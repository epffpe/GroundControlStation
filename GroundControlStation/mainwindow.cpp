#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QStringList>
#include <QSerialPortInfo>
#include <QDebug>
#include <QMessageBox>
#include <QList>
#include "PaqueteType.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /* Actualizacion de la lista de puertos series */
    modelserial = new QStringListModel(this);
    ui->comboBoxPuertoSerie->setModel(modelserial);

    QSerialPortInfo portinfo;
    QSerialPortInfo port;

    foreach (QSerialPortInfo ptinfo , QSerialPortInfo::availablePorts())
    {
        qDebug() << ptinfo.portName();

        int row = modelserial->rowCount();
        modelserial->insertRows(row,1);
        QModelIndex index = modelserial->index(row);
        modelserial->setData(index,ptinfo.portName());
        if(QString::compare(ptinfo.portName(),"COM3", Qt::CaseInsensitive) == 0)
        {
            port = ptinfo;
        }
    }

    /* Actualizacion de la lista de baudrate del puerto serie */
    modelbaud = new QStringListModel(this);
    ui->comboBoxBaudSerie->setModel(modelbaud);
    QStringList baudlist;
    baudlist << "9600" << "56400" << "115200";
    modelbaud->setStringList(baudlist);
    ui->comboBoxBaudSerie->setCurrentIndex(2);

    /* Crea un objeto para el puerto serie */
    serial = new QSerialPort(port,this);
    connect(serial,SIGNAL(readyRead()),this,SLOT(readyReadGood()));

    /* Comunicación con el XPlane*/
    xplane = new XPlane(this);
    connect(xplane,SIGNAL(processTheDatagram(QByteArray)),this,SLOT(processTheDatagram(QByteArray)));
        connect(this,SIGNAL(XPlaneManualControl(float,float,float,float)),this,SLOT(on_Control_XPlane(float,float,float,float)));
    ControlJoysticRCModefeedback = 0;
    connect(this,SIGNAL(RCManualControl(float,float,float,float)),this, SLOT(on_Switch_joy_RC(float,float,float,float)));




    /* Modelo de las variables recibidas por el XPlane*/
    modelvar = new QStandardItemModel(1,8,this);
    ui->tableViewXPlaneReceived->setModel(modelvar);




    Statlabel = new QLabel(this);
    StatlabelLost = new QLabel(this);
    StatlabelRX = new QLabel(this);
    StatlabelTX = new QLabel(this);
    StatlabelXPlane = new QLabel(this);
    StatProgressRX = new QProgressBar(this);
    StatProgressTX = new QProgressBar(this);
    StatProgressXPlane = new QProgressBar(this);
    ui->statusBar->addPermanentWidget(Statlabel,3);
    ui->statusBar->addPermanentWidget(StatlabelLost);
    ui->statusBar->addPermanentWidget(StatlabelRX);
    ui->statusBar->addPermanentWidget(StatProgressRX,1);
    ui->statusBar->addPermanentWidget(StatlabelTX);
    ui->statusBar->addPermanentWidget(StatProgressTX,1);
    ui->statusBar->addPermanentWidget(StatlabelXPlane);
    ui->statusBar->addPermanentWidget(StatProgressXPlane);

//    Statlabel->setText("Hola");
    StatlabelRX->setText("RX:");
    StatlabelTX->setText("TX:");
    StatlabelXPlane->setText("XPlane:");
    StatProgressRX->setValue(0);
    StatProgressTX->setValue(0);
    StatProgressXPlane->setValue(0);

    /* Calculo del uso de los canales de comunicaciones */
    estadisticas = new SpeedCommunications(this);
    connect(this,SIGNAL(udpctr(int)),estadisticas,SLOT(udpctr(int)));
    connect(this,SIGNAL(rxserialctr(int)),estadisticas,SLOT(rxserialctr(int)));
    connect(this,SIGNAL(txserialctr(int)),estadisticas,SLOT(txserialctr(int)));
    connect(this, SIGNAL(fallopaquete(int)), estadisticas, SLOT(fallopaquete(int)));
    connect(estadisticas,SIGNAL(usoUDP(int)), this, SLOT(usoUDP(int)));
    connect(estadisticas,SIGNAL(usoSerialRX(int)),this,SLOT(usoSerialRX(int)));
    connect(estadisticas,SIGNAL(usoSerialTX(int)), this, SLOT(usoSerialTX(int)));

    /* Control del Joystick por XPlane */
    connect(this,SIGNAL(joystickXPlane(int,int,int)), this, SLOT(joystickcontrol(int,int,int)));
    connect(this, SIGNAL(throttleXPlane(int)), this, SLOT(throttlecontrol(int)));

    /* Clase de generación y lectura de paquetes */
    board = new FalconBoard(this);

//    /* Para Recepción con threads */
//    connect(board,SIGNAL(rxserialctr(int)),estadisticas,SLOT(rxserialctr(int)));
//    connect(this,SIGNAL(rxserialthread(QByteArray)), board, SLOT(serialReadyRead(QByteArray)));
//    /* Fin Recepción con threads */

    connect(this, SIGNAL(falconReceived(QByteArray)),board,SLOT(decode(QByteArray)));
    connect(board, SIGNAL(serialSend(QByteArray)), this, SLOT(serialSend(QByteArray)));
    connect(board, SIGNAL(fallopaquete(int)), estadisticas, SLOT(fallopaquete(int)));
    connect(estadisticas, SIGNAL(serialLost(int)),this, SLOT(serialLost(int)));
    connect(board,SIGNAL(ahrs(float,float,float)),this,SLOT(ahrs(float,float,float)));
    connect(board,SIGNAL(accUpdate(float,float,float)),this, SLOT(accUpdate(float,float,float)));
    connect(board,SIGNAL(gyroUpdate(float,float,float)),this, SLOT(gyroUpdate(float,float,float)));
    connect(board,SIGNAL(magUpdate(float,float,float)),this, SLOT(magUpdate(float,float,float)));
    connect(board,SIGNAL(adcUpdate(float,float)), this, SLOT(adcUpdate(float,float)));
    connect(board,SIGNAL(baroUpdate(float,float,float)), this, SLOT(baroUpdate(float,float,float)));
    connect(board,SIGNAL(pitotUpdate(float,float)),this, SLOT(pitotUpdate(float,float)));
    connect(board, SIGNAL(servosInUpdate(QByteArray)),this,SLOT(servosInUpdate(QByteArray)));
    connect(board,SIGNAL(flybywireUpdate(float,float,float,float)), this, SLOT(flybywireUpdate(float,float,float,float)));
    connect(board,SIGNAL(flypathUpdate(float,float,float,int,int)), this, SLOT(flypathUpdate(float,float,float,int,int)));
    connect(board, SIGNAL(HILflypathUpdate(float,float,float,int,int)), this, SLOT(HILflypathUpdate(float,float,float,int,int)));
    connect(board, SIGNAL(FSMEstadisticasUpdate(int,int)), this, SLOT(FSMEstadisticasUpdate(int,int)));
    connect(board, SIGNAL(GPSUpdate(QByteArray)),this,SLOT(GPSUpdate(QByteArray)));
    connect(board,SIGNAL(statusCodeUpdate(QByteArray)),this,SLOT(statusCodeUpdate(QByteArray)));
    connect(this,SIGNAL(xplanInfo2board(QByteArray)), board, SLOT(on_xplanInfo2board(QByteArray)));
    desactivaelementos();


    horizonteArtificial = new Horizonte_Artificial(ui->graphicsViewMainHA);
    magneticHeading = new Magnetic_Heading(ui->graphicsViewMainHeading);
    standarHA = new Horizonte_Artificial(ui->standardSixHorionteArtificial);
    standardDG = new Magnetic_Heading(ui->standardSixDG);

    //standardAirspeed = new AirSpeed(ui->standardSixAirSpeed);
    standardAltimetro = new Altimetro(ui->standardSixAltimetro);
    standardAltimetroGPS = new Altimetro(ui->standardSixAltimetroGPS);
    standardVVI = new VVI(ui->standardSixVVI);
    standardVel = new Velocimetro(ui->standardSixAirSpeed);

    standardHILHA = new Horizonte_Artificial(ui->standardSixHILHorionteArtificial);
    standardHILDG = new Magnetic_Heading(ui->standardSixHILDG);
    standardHILAirspeed = new Velocimetro(ui->standardSixHILAirSpeed);
    standardHILAltimetro = new Altimetro(ui->standardSixHILAltimetro);
    standardHILAltimetroGPS = new Altimetro(ui->standardSixHILAltimetroGPS);
    standardHILVVI = new VVI(ui->standardSixHILVVI);
}

MainWindow::~MainWindow()
{
    board->qComandoStop();
    serial->flush();
    serial->waitForBytesWritten(2000);
    board->qComandoExitQTMode();
    serial->flush();
    serial->waitForBytesWritten(1000);
    delete ui;
}

void MainWindow::readyReadSlow()
{
    QByteArray data = serial->readLine();
    emit rxserialctr(data.size());
    qDebug() << serial->bytesAvailable();
    if (data.lastIndexOf("\n") == (data.size()-1)){

        if(data.indexOf(("\rQT,")) == 0){
            //qDebug() << "[" << data.size() << "] -> Un paquete";
            data.remove(0,4);
            emit falconReceived(data);
            paqueterecibido.clear();
            return;
        }else if(paqueterecibido.indexOf(("\rQT,")) == 0){
            paqueterecibido += data;
            //qDebug() << "\n[" << data.size() << "] -> Mas de un paquete";
            paqueterecibido.remove(0,4);
            emit falconReceived(paqueterecibido);
            paqueterecibido.clear();
            return;
        }else if(paqueterecibido.indexOf(("#QT,")) == 0){
            paqueterecibido.clear();
            return;
        }
    }else{
        paqueterecibido += data;
    }


    if (data.indexOf("\r")==0){
        QString recibido(datosrecibidos);
        ui->lineEditSerialReceived->setText(recibido);
        datosrecibidos = data;
    }else{
        datosrecibidos += data;
    }
    //qDebug() << "[" << data.size() << "] -> "<< data;
}

void MainWindow::readyReadGood()
{
    QByteArray trama = serial->readAll();
    emit rxserialctr(trama.size());
    int indice = 0;
    //qDebug() << "[" << QString::number(trama.size()) << "]";
    paqueterecibido += trama;

    indice = trama.indexOf("\r\n\r\n");

    while( indice != -1){
        indice = paqueterecibido.indexOf("\rQT,");
        if (indice != 0) emit fallopaquete(1);
        paqueterecibido.remove(0,indice + 4);
        indice = paqueterecibido.indexOf("\r\n\r\n");
        QByteArray data(paqueterecibido.data(),indice);
        emit falconReceived(data);
        paqueterecibido.remove(0,indice + 4);
        indice = paqueterecibido.indexOf("\r\n\r\n");
    }


    datosrecibidos += trama;
    indice = trama.indexOf("\r");
    while(indice != -1){
//        indice = datosrecibidos.indexOf("\r");
//        datosrecibidos.remove(0,indice + 1);
        indice = datosrecibidos.indexOf("\r",1);
        if (indice != -1){
            QByteArray data(datosrecibidos.data()+1,indice);
            QString recibido(data);
            ui->lineEditSerialReceived->setText(recibido);
            //qDebug() << "-> "<< recibido;
            datosrecibidos.remove(0,indice);
            indice = datosrecibidos.indexOf("\r",1);
        }
    }
    //qDebug() << "-> "<< trama;

//    if (trama.indexOf("\r")==0){
//        QString recibido(datosrecibidos);
//        ui->lineEditSerialReceived->setText(recibido);
//        datosrecibidos = trama;
//    }else{
//        datosrecibidos += trama;
    //    }
}

void MainWindow::readyReadThread()
{
    QByteArray trama = serial->readAll();
    //emit rxserialctr(trama.size());
    emit rxserialthread(trama);
}

void MainWindow::on_pushButtonSerialOpen_clicked()
{
    //Open
    //QMessageBox::information(this,"Serial", "No se puede abrir el puerto");
    QString puerto = ui->comboBoxPuertoSerie->currentText();


    foreach (QSerialPortInfo ptinfo , QSerialPortInfo::availablePorts())
    {
        if(QString::compare(ptinfo.portName(),puerto, Qt::CaseInsensitive) == 0)
        {
            qDebug() << ptinfo.portName() << "==" << puerto;
            serial->setPort(ptinfo);
        }
    }

    if(serial->open(QIODevice::ReadWrite)){
        serial->setBaudRate(QSerialPort::Baud115200);
        serial->setDataBits(QSerialPort::Data8);
        serial->setParity(QSerialPort::NoParity);
        serial->setStopBits(QSerialPort::OneStop);
        serial->setFlowControl(QSerialPort::NoFlowControl);
        serial->flush();
        //serial->clear();
        activaelementos();
        puerto.append(" Connected");
        Statlabel->setText(puerto);

        QByteArray qtmode = "#QT\n";
        serial->write(qtmode);
        serial->flush();
    }
    else
    {
        QMessageBox::warning(this, serial->portName(), "No se puede abrir el puerto" );

    }


}

void MainWindow::on_pushButtonSerialClose_clicked()
{
    //Close
    //QMessageBox::information(this,"Serial", "No se puede abrir el puerto");
    board->qComandoStop();
    serial->flush();
    serial->waitForBytesWritten(2000);
    board->qComandoExitQTMode();
    serial->flush();
    serial->waitForBytesWritten(2000);
    serial->close();       
    desactivaelementos();
    QString puerto = ui->comboBoxPuertoSerie->currentText();
    puerto.append(" Closed");
    Statlabel->setText(puerto);
}

void MainWindow::on_pushButtonSerialSend_clicked()
{
    QString datos = ui->lineEditSerialCommand->text();
    datos.append("\n");
    QByteArray dataline = datos.toUtf8();
    serial->write(dataline);
    serial->flush();
    emit txserialctr(dataline.size());
    qDebug() << "<-" << datos << "," << datos.size();
}


void MainWindow::processTheDatagram(QByteArray datagram)
{

    int tamano = datagram.size();
    int elev, ailrn,ruddr,throl;
    emit udpctr(tamano);
    int numtramas = (tamano - 5)/ 36;



    QByteArray XPlane2board;
    XPlane2board.resize(sizeof(qHILXPlaneInfo_t));
    qHILXPlaneInfo_t *XPlaneInfo = (qHILXPlaneInfo_t *)XPlane2board.data();

    qXPlanePacket_t *paquete;

    QByteArray datos;

    int i;
    for (i = 0; i < tamano-5;i++){
        datos.append(datagram.at(i+5));

    }

    QList<QByteArray> lista;
    for (i = 0; i < numtramas; i++){
        QByteArray trama;
        for (int j=0; j < 36; j++){
            trama.append(datos.at(36*i + j));
        }
        lista.append(trama);
    }
    modelvar->setRowCount(lista.size());
    QStringList msg;
    i = 0;
    foreach (QByteArray trama, lista){
        //qDebug() << extractdataref(trama);
        //qDebug() << QString::number(extractdataref(trama));
        msg.append(QString::number(extractdataref(trama)));
        float variable;
        //char buffer[10];
        QString varstr;
        paquete = (qXPlanePacket_t *)trama.data();

        switch (extractdataref(trama))
        {
        case 3:                             /* Speeds */
            variable = paquete->var[0];
            //variable = extractvariable(trama, 1);
            ui->lcdHILVind->display(qRound(variable));
            XPlaneInfo->velocidad = variable;
            break;
        case 4:                             /* MACH, VVI, G-load */
            variable = paquete->var[0];
            varstr.sprintf("%.3f",variable);
            ui->lcdHILMach->display(varstr);
            variable = paquete->var[2];
            varstr.sprintf("%.3f",variable);
            ui->lcdHILVVI->display(varstr);
            XPlaneInfo->VVI = variable;


            variable = paquete->var[4];
            varstr.sprintf("%.3f",variable);
            ui->lcdHILGnorml->display(varstr);
            variable = paquete->var[5];
            varstr.sprintf("%.3f",variable);
            ui->lcdHILGaxial->display(varstr);
            variable = paquete->var[6];
            varstr.sprintf("%.3f",variable);
            ui->lcdHILGside->display(varstr);
            break;
        case 6:                             /* Atmosphere: aircraft */

            break;
        case 8:                             /* Joystick */
            variable = paquete->var[0];
            elev = 100 * variable;
            //ui->joystickProfundidad->setValue((int) (-variable));
            variable = paquete->var[1];
            ailrn = 100 * variable;
            //ui->joystickAleron->setValue((int)variable);
            variable = paquete->var[2];
            ruddr = 100 * variable;
            //emit joystickXPlane(elev,ailrn,ruddr);
            //ui->joystickRudder->setValue((int)variable);

            XPlaneInfo->elevator = paquete->var[0];
            XPlaneInfo->alerones = paquete->var[1];
            XPlaneInfo->rudder = paquete->var[2];

            break;
        case 11:                             /* flight con ail/elev/rud */

            break;
        case 16:                             /* angular velocities */
            variable = paquete->var[0];
            varstr.sprintf("%.3f",variable);
            ui->lcdHILQ->display(varstr);            

            variable = paquete->var[1];
            varstr.sprintf("%.3f",variable);
            ui->lcdHILP->display(varstr);


            variable = paquete->var[2];
            varstr.sprintf("%.3f",variable);
            ui->lcdHILR->display(varstr);

            XPlaneInfo->gy = paquete->var[0];
            XPlaneInfo->gx = paquete->var[1];
            XPlaneInfo->gz = paquete->var[2];
            break;
        case 17:                             /* pitch, roll, heading */
            variable = paquete->var[0];
            //variable = paquete->var[0];
            ui->lcdHILPitch->display(qRound(variable));
            XPlaneInfo->pitch = variable;

            variable = paquete->var[1];
            //variable = paquete->var[1];
            ui->lcdHILRoll->display(qRound(variable));
            XPlaneInfo->roll = variable;

            variable = paquete->var[2];
            //variable = extractvariable(trama, 3);
            ui->lcdHILRumbo->display(qRound(variable));
            XPlaneInfo->yaw = variable;

            break;
        case 18:                             /* AoA, side-slip, paths */
            variable = paquete->var[0];
            varstr.sprintf("%.3f",variable);
            ui->lcdHILAoA->display(varstr);
            variable = paquete->var[1];
            varstr.sprintf("%.3f",variable);
            ui->lcdHILbeta->display(varstr);

            variable = paquete->var[2];
            varstr.sprintf("%.3f",variable);
            ui->lcdHILhding->display(varstr);
            XPlaneInfo->yaw = variable;

            variable = paquete->var[3];
            varstr.sprintf("%.3f",variable);
            ui->lcdHILvpath->display(varstr);
            break;
        case 20:                             /* latitud, longitud, altitude */
            variable = paquete->var[0];
            ui->lcdHILLatitud->display(variable);
            XPlaneInfo->latitud = variable;

            variable = paquete->var[1];
            ui->lcdHILLongitud->display(variable);
            XPlaneInfo->longitud = variable;

            variable = paquete->var[2];
            ui->lcdHILAltura->display(qRound(variable));


            variable = paquete->var[5];
            ui->lcdHILAltitude->display(qRound(variable));
            XPlaneInfo->altitud = variable;


            break;
        case 25:                             /* throttle command */
            variable = paquete->var[0];
            throl = 100 * variable;
            XPlaneInfo->throttle = variable;

            //emit throttleXPlane(throl);
            //ui->joystickGases->setValue(variable);
            break;
        }

        for (int j=0;j<8;j++){
            float variable = extractvariable(trama, j+1);
            QModelIndex index = modelvar->index(i, j);
            modelvar->setData(index,variable);
        }
        i++;

    }

    emit xplanInfo2board(XPlane2board);
    emit joystickXPlaneManualControl(XPlaneInfo->alerones, XPlaneInfo->elevator,
                                     XPlaneInfo->rudder, XPlaneInfo->throttle);

    ui->lineEditXPlaneNumTramas->setText(msg.join(","));

//    standardHILHA->setAttitude(XPlaneInfo->pitch, XPlaneInfo->roll);
    standardHILDG->setHeading(ui->lcdHILRumbo->value());
//    standardHILAltimetroGPS->setAltura(ui->lcdHILAltura->value());
//    standardHILAltimetro->setAltura(XPlaneInfo->altitud);
//    standardHILAirspeed->setIndspeed(XPlaneInfo->velocidad);
//    standardHILVVI->setVerticalspeed(XPlaneInfo->VVI);
}
float MainWindow::extractvariable(const QByteArray &trama, int varnum)
{
    char variable[4];

    variable[0] = trama.at(4*varnum + 0);
    variable[1] = trama.at(4*varnum + 1);
    variable[2] = trama.at(4*varnum + 2);
    variable[3] = trama.at(4*varnum + 3);


    //Var1 ... Var8
    float *ptrfloat = (float *)variable;
    float result = *ptrfloat;
    return result;

}
int MainWindow::extractdataref(const QByteArray &trama)
{
    char variable[4];

    variable[0] = trama.at(0);
    variable[1] = trama.at(1);
    variable[2] = trama.at(2);
    variable[3] = trama.at(3);


    //Var1 ... Var8
    int *ptr = (int *)variable;
    int result = *ptr;
    return result;
}

void MainWindow::desactivaelementos()
{
    disconnect(this,SIGNAL(falconSend(QByteArray)),this,SLOT(serialSend(QByteArray)));
    disconnect(board, SIGNAL(serialSend(QByteArray)), this, SLOT(serialSend(QByteArray)));
    disconnect(board,SIGNAL(estadoDebug(QString)),this,SLOT(estadoSerialDebug(QString)));
    disconnect(board,SIGNAL(HILflybywireUpdate(float,float,float,float)),this,SLOT(HILflybywireUpdate(float,float,float,float)));
    disconnect(board,SIGNAL(ParamAutopilotFBWUpdate(QByteArray)),this,SLOT(ParamAutopilotFBWUpdate(QByteArray)));
    /* Desactivo Controles del puerto serie */
    ui->comboBoxBaudSerie->setDisabled(false);
    ui->comboBoxPuertoSerie->setDisabled(false);
    ui->pushButtonSerialSend->setEnabled(false);
    ui->pushButtonSerialOpen->setEnabled(true);
    ui->pushButtonSerialUpdate->setEnabled(true);

    /* Desactivo los botones de waypoint */
    ui->pushButtonFMSNext->setEnabled(false);
    ui->pushButtonFMSPrevious->setEnabled(false);
    ui->pushButtonHILFMSNext->setEnabled(false);
    ui->pushButtonHILFMSPrevious->setEnabled(false);

    /* Desactivo el boton de Read All */
    ui->pushButtonParamReadAll->setEnabled(false);

    /* Desactivo las acciones */
    ui->actionAutopilot_On->setEnabled(false);
    ui->actionAutopilot_off->setEnabled(false);
    ui->actionAutotrim_On->setEnabled(false);
    ui->actionAutotrim_Off->setEnabled(false);
    ui->actionSelectorAlturaBaro->setEnabled(false);
    ui->actionSelectorAlturaGPS->setEnabled(false);
    ui->actionSelectorSpeedGPS->setEnabled(false);
    ui->actionSelectorSpeedTubo_Pitot->setEnabled(false);

    ui->actionAnalogOn->setEnabled(false);
    ui->actionAnalogOff->setEnabled(false);
    ui->actionInercialOn->setEnabled(false);
    ui->actionInercialOff->setEnabled(false);
    ui->actionAHRSOn->setEnabled(false);
    ui->actionAHRSOff->setEnabled(false);
    ui->actionSTATOn->setEnabled(false);
    ui->actionSTATOff->setEnabled(false);
    ui->actionGPSOn->setEnabled(false);
    ui->actionGPSOff->setEnabled(false);
    ui->actionServosOn->setEnabled(false);
    ui->actionServosOff->setEnabled(false);
    ui->actionFBWOff->setEnabled(false);
    ui->actionFBWOn->setEnabled(false);
    ui->actionParamStop->setEnabled(false);
    ui->actionParamStart->setEnabled(false);
    ui->actionAutopilotReset->setEnabled(false);

    ui->actionHIL_Load_Alternativa->setEnabled(false);
    ui->actionHIL_Load_Gando->setEnabled(false);
    ui->actionHIL_Load_Ruta_Isla->setEnabled(false);
    ui->actionHIL_Load_Vuelo->setEnabled(false);
    ui->actionHIL_NEXT_WAYPOINT->setEnabled(false);
    ui->actionHIL_PREV_WAYPOINT->setEnabled(false);

    ui->actionFMSFlyPlanOff->setEnabled(false);
    ui->actionFMSFlyPlanOn->setEnabled(false);
    ui->actionFMSHILFlyPlanOff->setEnabled(false);
    ui->actionFMSHILFlyPlanOn->setEnabled(false);

    ui->actionServos_Control_Mode_FBW->setEnabled(false);
    ui->actionServos_Control_Mode_HIL->setEnabled(false);

    /* Desactivo los servos de salida */
    ui->ServosOut_1->setEnabled(false);
    ui->ServosOut_2->setEnabled(false);
    ui->ServosOut_3->setEnabled(false);
    ui->ServosOut_4->setEnabled(false);
    ui->ServosOut_5->setEnabled(false);
    ui->ServosOut_6->setEnabled(false);
    ui->ServosOut_7->setEnabled(false);
    ui->ServosOut_8->setEnabled(false);
    ui->ServosOut_9->setEnabled(false);
    ui->ServosOut_10->setEnabled(false);
    ui->ServosOut_11->setEnabled(false);
    ui->ServosOut_12->setEnabled(false);
    ui->ServosOut_13->setEnabled(false);
    ui->ServosOut_14->setEnabled(false);
    ui->ServosOut_15->setEnabled(false);
    ui->ServosOut_16->setEnabled(false);
    ui->ServosOut_17->setEnabled(false);
    ui->ServosOut_18->setEnabled(false);
    ui->ServosOut_19->setEnabled(false);
    ui->ServosOut_20->setEnabled(false);

    /* Desactivo los parametros del autopilot */
    ui->pushButtonAutopilotParamLoad->setEnabled(false);
    ui->pushButtonAutopilotParamStore->setEnabled(false);
    /* Desactivo los parametros del control de altura */
    ui->doubleSpinBox_k_altura->setEnabled(false);
    ui->doubleSpinBox_k_int_altura->setEnabled(false);
    ui->doubleSpinBox_k_pitch->setEnabled(false);
    ui->doubleSpinBox_k_VVI->setEnabled(false);
    ui->doubleSpinBox_k_elev->setEnabled(false);
    ui->doubleSpinBox_k_int_pitch->setEnabled(false);
    ui->doubleSpinBox_k_div_Q_init->setEnabled(false);
    ui->doubleSpinBox_k_div_Q_speed->setEnabled(false);
    /* Desactivo los parametros del control de rumbo */
    ui->doubleSpinBox_k_heading->setEnabled(false);
    ui->doubleSpinBox_k_roll->setEnabled(false);
    ui->doubleSpinBox_k_airln->setEnabled(false);
    ui->doubleSpinBox_k_div_P_init->setEnabled(false);
    ui->doubleSpinBox_k_div_P_speed->setEnabled(false);
    /* Desactivo los parametros del control de rumbo */
    ui->doubleSpinBox_k_rudder->setEnabled(false);
    ui->doubleSpinBox_k_div_R_init->setEnabled(false);
    ui->doubleSpinBox_k_div_R_speed->setEnabled(false);
    /* Desactivo los parametros del control de velocidad */
    ui->spinBox_k_div_velocidad->setEnabled(false);
    ui->horizontalSlider_k_div_velocidad->setEnabled(false);

    /* Desactivo el control de RC */
    //ui->actionHILControlRC->setEnabled(false);
    ui->actionPlane_Joystick->setEnabled(false);
    ui->actionPlane_RC->setEnabled(false);

    /* Desactivo el control del tiempo de refresco */
    ui->spinBoxRateFMS->setEnabled(false);
    ui->spinBoxRateParam->setEnabled(false);
    ui->spinBoxRateServos->setEnabled(false);

    /* Desactivo los checkbox de estado */
    ui->checkBoxStatusAHRS->setCheckable(false);
    ui->checkBoxStatusAnalog->setCheckable(false);
    ui->checkBoxStatusAutopilot->setCheckable(false);
    ui->checkBoxStatusAutotrim->setCheckable(false);
    ui->checkBoxStatusGPS->setCheckable(false);
    ui->checkBoxStatusInerciales->setCheckable(false);
    ui->checkBoxStatusServos->setCheckable(false);
    ui->checkBoxStatusStat->setCheckable(false);
}

void MainWindow::activaelementos()
{
    connect(this,SIGNAL(falconSend(QByteArray)),this,SLOT(serialSend(QByteArray)));
    connect(board, SIGNAL(serialSend(QByteArray)), this, SLOT(serialSend(QByteArray)));
    connect(board,SIGNAL(estadoDebug(QString)),this,SLOT(estadoSerialDebug(QString)));
    connect(board,SIGNAL(HILflybywireUpdate(float,float,float,float)),this,SLOT(HILflybywireUpdate(float,float,float,float)));
    connect(board,SIGNAL(ParamAutopilotFBWUpdate(QByteArray)),this,SLOT(ParamAutopilotFBWUpdate(QByteArray)));
    /* Activo Controles del puerto serie */
    ui->comboBoxPuertoSerie->setDisabled(true);
    ui->comboBoxBaudSerie->setDisabled(true);
    ui->pushButtonSerialSend->setEnabled(true);
    ui->pushButtonSerialOpen->setEnabled(false);
    ui->pushButtonSerialUpdate->setEnabled(false);

    /* Activo los botones de waypoint */
    ui->pushButtonFMSNext->setEnabled(true);
    ui->pushButtonFMSPrevious->setEnabled(true);
    ui->pushButtonHILFMSNext->setEnabled(true);
    ui->pushButtonHILFMSPrevious->setEnabled(true);

    /* Activo el boton de Read All */
    ui->pushButtonParamReadAll->setEnabled(true);

    /* Activo las acciones */
    ui->actionAutopilot_On->setEnabled(true);
    ui->actionAutopilot_off->setEnabled(true);
    ui->actionAutotrim_On->setEnabled(true);
    ui->actionAutotrim_Off->setEnabled(true);
    ui->actionSelectorAlturaBaro->setEnabled(true);
    ui->actionSelectorAlturaGPS->setEnabled(true);
    ui->actionSelectorSpeedGPS->setEnabled(true);
    ui->actionSelectorSpeedTubo_Pitot->setEnabled(true);

    ui->actionAnalogOn->setEnabled(true);
    ui->actionAnalogOff->setEnabled(true);
    ui->actionInercialOn->setEnabled(true);
    ui->actionInercialOff->setEnabled(true);
    ui->actionAHRSOn->setEnabled(true);
    ui->actionAHRSOff->setEnabled(true);
    ui->actionSTATOn->setEnabled(true);
    ui->actionSTATOff->setEnabled(true);
    ui->actionGPSOn->setEnabled(true);
    ui->actionGPSOff->setEnabled(true);
    ui->actionServosOn->setEnabled(true);
    ui->actionServosOff->setEnabled(true);
    ui->actionFBWOff->setEnabled(true);
    ui->actionFBWOn->setEnabled(true);
    ui->actionParamStop->setEnabled(true);
    ui->actionParamStart->setEnabled(true);
    ui->actionAutopilotReset->setEnabled(true);

    ui->actionHIL_Load_Alternativa->setEnabled(true);
    ui->actionHIL_Load_Gando->setEnabled(true);
    ui->actionHIL_Load_Ruta_Isla->setEnabled(true);
    ui->actionHIL_Load_Vuelo->setEnabled(true);
    ui->actionHIL_NEXT_WAYPOINT->setEnabled(true);
    ui->actionHIL_PREV_WAYPOINT->setEnabled(true);

    ui->actionFMSFlyPlanOff->setEnabled(true);
    ui->actionFMSFlyPlanOn->setEnabled(true);
    ui->actionFMSHILFlyPlanOff->setEnabled(true);
    ui->actionFMSHILFlyPlanOn->setEnabled(true);

    ui->actionServos_Control_Mode_FBW->setEnabled(true);
    ui->actionServos_Control_Mode_HIL->setEnabled(true);

    /* Activo los servos de salida */
    ui->ServosOut_1->setEnabled(true);
    ui->ServosOut_2->setEnabled(true);
    ui->ServosOut_3->setEnabled(true);
    ui->ServosOut_4->setEnabled(true);
    ui->ServosOut_5->setEnabled(true);
    ui->ServosOut_6->setEnabled(true);
    ui->ServosOut_7->setEnabled(true);
    ui->ServosOut_8->setEnabled(true);
    ui->ServosOut_9->setEnabled(true);
    ui->ServosOut_10->setEnabled(true);
    ui->ServosOut_11->setEnabled(true);
    ui->ServosOut_12->setEnabled(true);
    ui->ServosOut_13->setEnabled(true);
    ui->ServosOut_14->setEnabled(true);
    ui->ServosOut_15->setEnabled(true);
    ui->ServosOut_16->setEnabled(true);
    ui->ServosOut_17->setEnabled(true);
    ui->ServosOut_18->setEnabled(true);
    ui->ServosOut_19->setEnabled(true);
    ui->ServosOut_20->setEnabled(true);

    /* Activo los parametros del autopilot */
    ui->pushButtonAutopilotParamLoad->setEnabled(true);
    ui->pushButtonAutopilotParamStore->setEnabled(true);
    /* Activo los parametros del control de altura */
    ui->doubleSpinBox_k_altura->setEnabled(true);
    ui->doubleSpinBox_k_int_altura->setEnabled(true);
    ui->doubleSpinBox_k_pitch->setEnabled(true);
    ui->doubleSpinBox_k_VVI->setEnabled(true);
    ui->doubleSpinBox_k_elev->setEnabled(true);
    ui->doubleSpinBox_k_int_pitch->setEnabled(true);
    ui->doubleSpinBox_k_div_Q_init->setEnabled(true);
    ui->doubleSpinBox_k_div_Q_speed->setEnabled(true);
    /* Activo los parametros del control de rumbo */
    ui->doubleSpinBox_k_heading->setEnabled(true);
    ui->doubleSpinBox_k_roll->setEnabled(true);
    ui->doubleSpinBox_k_airln->setEnabled(true);
    ui->doubleSpinBox_k_div_P_init->setEnabled(true);
    ui->doubleSpinBox_k_div_P_speed->setEnabled(true);
    /* Activo los parametros del control de rumbo */
    ui->doubleSpinBox_k_rudder->setEnabled(true);
    ui->doubleSpinBox_k_div_R_init->setEnabled(true);
    ui->doubleSpinBox_k_div_R_speed->setEnabled(true);
    /* Activo los parametros del control de velocidad */
    ui->spinBox_k_div_velocidad->setEnabled(true);
    ui->horizontalSlider_k_div_velocidad->setEnabled(true);

    /* Activo el control de RC */
    //ui->actionHILControlRC->setEnabled(true);
    ui->actionPlane_Joystick->setEnabled(true);
    ui->actionPlane_RC->setEnabled(true);

    /* Activo el control del tiempo de refresco */
    ui->spinBoxRateFMS->setEnabled(true);
    ui->spinBoxRateParam->setEnabled(true);
    ui->spinBoxRateServos->setEnabled(true);

    /* Activo los checkbox de estado */
    ui->checkBoxStatusAHRS->setCheckable(true);
    ui->checkBoxStatusAnalog->setCheckable(true);
    ui->checkBoxStatusAutopilot->setCheckable(true);
    ui->checkBoxStatusAutotrim->setCheckable(true);
    ui->checkBoxStatusGPS->setCheckable(true);
    ui->checkBoxStatusInerciales->setCheckable(true);
    ui->checkBoxStatusServos->setCheckable(true);
    ui->checkBoxStatusStat->setCheckable(true);
}

void MainWindow::emulacionRecepcion()
{
    /* AHRS */
    ui->lcdRumbo->display(360);
    ui->lcdRumbo_2->display(359.7);
    ui->lcdPitch->display(40);
    ui->lcdPitch_2->display(40.1);
    ui->lcdRoll->display(30);
    ui->lcdRoll_2->display(30);
    ui->checkBoxStatusAHRS->setChecked(true);

    /* Gyros */
    ui->lcdGyroX->display(0.17583);
    ui->lcdGyroY->display(-0.10395);
    ui->lcdGyroZ->display(-0.45608);
    /* Accelerómetros */
    ui->lcdAccX->display(-6.38722);
    ui->lcdAccY->display(+3.75719);
    ui->lcdAccZ->display(+6.23830);
    /* Magnetometros */

    ui->checkBoxStatusInerciales->setChecked(true);
    /* Analog */
    ui->lcdAnalogTemp->display(38.5);
    ui->lcdAnalogVbatt->display(12.2);
    ui->lcdAnalogBaro->display(100.71);
    ui->lcdAnalogAltura->display(74.2);
    ui->checkBoxStatusAnalog->setChecked(true);

    /* Estadisticas */
    ui->lcdStatControlDSC->display(1);
    ui->lcdStatSensorDSC->display(9);

    /* FMS */
    ui->lcdFMSRumbo->display(30.4);
    ui->lcdFMSAltura->display(15000);
    ui->lcdFMSDistancia->display(12023);
    ui->lcdFMSSpeed->display(30);
    ui->lcdFMSWaypoint->display(2);
}

int MainWindow::ServoRange(float servo)
{
    if (servo < -1.0) servo = -1.0;
    if (servo > 1.0) servo = 1.0;
    return (int) (100 * servo);
}

void MainWindow::error(QSerialPort::SerialPortError error)
{
    error = error;
    QMessageBox::information(this,"Serial", "Error en el puerto");
}

void MainWindow::on_Control_XPlane(float alerones, float elevator, float rudder, float throttle)
{
    emit controlaXPlane(alerones, elevator, rudder, throttle);

}

void MainWindow::on_Switch_joy_RC(float alerones, float elevator, float rudder, float throttle)
{
    emit XPlaneManualControl(alerones, elevator, rudder, throttle);

    ui->joystickProfundidad->setValue(ServoRange(elevator));
    ui->joystickAleron->setValue(ServoRange(alerones));
    ui->joystickRudder->setValue(ServoRange(rudder));
    ui->joystickGases->setValue(ServoRange(throttle));
}

void MainWindow::on_pushButtonXPlaneOpen_clicked()
{

    //connect(this,SIGNAL(xplaneSend(QByteArray)),this, SLOT(udpSend(QByteArray)));

    //Open XPlane
    connect(this,SIGNAL(controlaXPlane(float,float,float,float)),xplane,SLOT(on_Control_XPlane(float,float,float,float)));
    xplane->initSocket(ui->spinBoxXPlaneUDPPort->value());
    ui->pushButtonXPlaneOpen->setEnabled(false);
    ui->pushButtonXPlaneClose->setEnabled(true);
    ui->spinBoxXPlaneUDPPort->setEnabled(false);
    ui->spinBoxXPlaneUDPTxPort->setEnabled(false);
    ui->lineEditXPlaneIPTx->setEnabled(false);
    Statlabel->setText("Conectado al XPlane");
    qDebug() << "Conectado al XPlane";
}

void MainWindow::on_pushButtonXPlaneClose_clicked()
{
    //disconnect(this,SIGNAL(xplaneSend(QByteArray)),this, SLOT(udpSend(QByteArray)));

    //Close XPlane
    disconnect(this,SIGNAL(controlaXPlane(float,float,float,float)),xplane,SLOT(on_Control_XPlane(float,float,float,float)));
    xplane->close();
    ui->pushButtonXPlaneOpen->setEnabled(true);
    ui->pushButtonXPlaneClose->setEnabled(false);
    ui->spinBoxXPlaneUDPPort->setEnabled(true);
    ui->spinBoxXPlaneUDPTxPort->setEnabled(true);
    ui->lineEditXPlaneIPTx->setEnabled(true);
    Statlabel->setText("Desconectado del XPlane");
    qDebug() << "Desconectado del XPlane";
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::information(this, "EPF GCS", "Este software fue diseñado para el Proyecto Fin de Carrera\n"
                             "de Eugenio Peñate Fariañas.\n\n"
                             "contacto: epffpe@gmail.com");
}

void MainWindow::on_actionEmulaci_n_triggered()
{
    emulacionRecepcion();
}


void MainWindow::on_pushButtonParamReadAll_clicked()
{
    board->qComandoReadAll();
}


void MainWindow::usoUDP(int uso)
{
    if (uso > 100) uso = 100;
    StatProgressXPlane->setValue(uso);
}

void MainWindow::usoSerialRX(int uso)
{
    if (uso > 100) uso = 100;
    StatProgressRX->setValue(uso);
}

void MainWindow::usoSerialTX(int uso)
{
    if (uso > 100) uso = 100;
    StatProgressTX->setValue(uso);
}

void MainWindow::serialLost(int lost)
{
    //if (lost){
        QString informe;
        informe.sprintf("Paquetes dañados %2d", lost);
        StatlabelLost->setText(informe);
    //}

}

void MainWindow::serialSend(QByteArray dataline)
{
    serial->write(dataline);
    serial->flush();
    emit txserialctr(dataline.size());
}

void MainWindow::udpSend(QByteArray dataline)
{
    /* Contador de datos */
    //emit udpctr(dataline.size());
}

void MainWindow::joystickcontrol(int elev, int ailrn, int ruddr)
{
//    ui->joystickProfundidad->setValue(-elev);
//    ui->joystickAleron->setValue(ailrn);
//    ui->joystickRudder->setValue(ruddr);
}

void MainWindow::throttlecontrol(int throl)
{
//    ui->joystickGases->setValue(throl);
}

void MainWindow::ahrs(float yaw, float pitch, float roll)
{
    QString varstr;
    if (yaw < 0) yaw += 360;
    varstr.sprintf("%.3f",yaw);
    //ui->lcdRumbo->display(qRound(yaw));
    ui->lcdRumbo->display(varstr);
    ui->lcdRumbo_2->display(varstr);

    varstr.sprintf("%.3f",roll);
    ui->lcdRoll->display(varstr);
    ui->lcdRoll_2->display(varstr);

    varstr.sprintf("%.3f",pitch);
    ui->lcdPitch->display(varstr);
    ui->lcdPitch_2->display(varstr);

    horizonteArtificial->setAttitude(pitch,roll);
    magneticHeading->setHeading(yaw);

    standarHA->setAttitude(pitch,roll);
    standardDG->setHeading(yaw);
}

void MainWindow::gyroUpdate(float gx, float gy, float gz)
{
    QString varstr;
    varstr.sprintf("%.1f",gx);
    ui->lcdGyroX->display(varstr);
    varstr.sprintf("%.1f",gy);
    ui->lcdGyroY->display(varstr);
    varstr.sprintf("%.1f",gz);
    ui->lcdGyroZ->display(varstr);
}

void MainWindow::accUpdate(float accx, float accy, float accz)
{
    QString varstr;
    varstr.sprintf("%.2f",accx);
    ui->lcdAccX->display(varstr);
    varstr.sprintf("%.2f",accy);
    ui->lcdAccY->display(varstr);
    varstr.sprintf("%.2f",accz);
    ui->lcdAccZ->display(varstr);
}

void MainWindow::magUpdate(float magx, float magy, float magz)
{
    ui->lcdMagX->display(magx);
    ui->lcdMagY->display(magy);
    ui->lcdMagZ->display(magz);
}

void MainWindow::adcUpdate(float temp, float Vbat)
{
    QString varstr;
    varstr.sprintf("%.2f",temp);
    ui->lcdAnalogTemp->display(varstr);
    varstr.sprintf("%.2f",Vbat);
    ui->lcdAnalogVbatt->display(varstr);
}

void MainWindow::baroUpdate(float baro, float altura, float VVI)
{
    QString varstr;
    varstr.sprintf("%.1f",baro);
    ui->lcdAnalogBaro->display(varstr);
    varstr.sprintf("%.1f",altura);
    //ui->lcdAnalogAltura->display(qRound(altura));
    ui->lcdAnalogAltura->display(varstr);
    qreal altitude;
    if (qIsNaN(altura)){
        altitude = 0;
    }else{
        altitude =  altura * 3.280839895013123;
    }
    standardAltimetro->setAltura(altitude);
    qreal verticalspeed;
    if (qIsNaN(VVI)){
        verticalspeed = 0;
    }else{
        verticalspeed =  VVI;
    }
    standardVVI->setVerticalspeed(verticalspeed);
}

void MainWindow::pitotUpdate(float pitot, float speed)
{
    if (qIsNaN(speed)) speed = 0.0;
    QString varstr;
    varstr.sprintf("%.2f",pitot);
    ui->lcdAnalogPitot->display(pitot);
    varstr.sprintf("%.2f",speed);
    ui->lcdAnalogSpeed->display(qRound(speed));
    standardVel->setIndspeed(speed);
}

void MainWindow::servosInUpdate(QByteArray paquete)
{
    float *ServosIn;
    ServosIn = (float *)paquete.data();

    ui->ServosIn_1->setValue(ServoRange(ServosIn[0]));
    ui->ServosIn_2->setValue(ServoRange(ServosIn[1]));
    ui->ServosIn_3->setValue(ServoRange(ServosIn[2]));
    ui->ServosIn_4->setValue(ServoRange(ServosIn[3]));
    ui->ServosIn_5->setValue(ServoRange(ServosIn[4]));
    ui->ServosIn_6->setValue(ServoRange(ServosIn[5]));
    ui->ServosIn_7->setValue(ServoRange(ServosIn[6]));
    ui->ServosIn_8->setValue(ServoRange(ServosIn[7]));
    ui->ServosIn_9->setValue(ServoRange(ServosIn[8]));
    ui->ServosIn_10->setValue(ServoRange(ServosIn[9]));
    ui->ServosIn_11->setValue(ServoRange(ServosIn[10]));
    ui->ServosIn_12->setValue(ServoRange(ServosIn[11]));

    emit RCManualControl(ServosIn[0],ServosIn[1],ServosIn[3],ServosIn[2]);

//    emit joystickRC(ServosIn[1], ServosIn[0], ServosIn[3]);
//    emit throttleRC(ServosIn[2]);

    //qDebug() << "Th: " << QString::number(ServosIn[2]) << " Ailrn: " << QString::number(ServosIn[0]);
}

void MainWindow::flybywireUpdate(float servo1, float servo2, float servo3, float servo4)
{
    ui->joystickFBWAleron->setValue(ServoRange(servo1));
    ui->joystickFBWGases->setValue(ServoRange(servo2));
    ui->joystickFBWProfundidad->setValue(ServoRange(servo3));
    ui->joystickFBWRudder->setValue(ServoRange(servo4));
}

void MainWindow::flypathUpdate(float brng, float altura, float velocidad, int distancia, int actualWaypoint)
{
    if (brng < 0) brng += 360;
    magneticHeading->setHeadinghold(brng);
    standardDG->setHeadinghold(brng);

    ui->lcdFMSRumbo->display(brng);
    ui->lcdFMSAltura->display(altura);
    ui->lcdFMSSpeed->display(velocidad);
    ui->lcdFMSDistancia->display(distancia);
    ui->lcdFMSWaypoint->display(actualWaypoint);
}

void MainWindow::HILflypathUpdate(float brng, float altura, float velocidad, int distancia, int actualWaypoint)
{
    if (brng < 0) brng += 360;
    standardHILDG->setHeadinghold(brng);
    ui->lcdHILFMSRumbo->display(brng);
    ui->lcdHILFMSAltura->display(altura);
    ui->lcdHILFMSSpeed->display(velocidad);
    ui->lcdHILFMSDistancia->display(distancia);
    ui->lcdHILFMSWaypoint->display(actualWaypoint);
}

void MainWindow::FSMEstadisticasUpdate(int SensorDSC, int ControlDSC)
{
    ui->lcdStatSensorDSC->display(SensorDSC);
    ui->lcdStatControlDSC->display(ControlDSC);
}

void MainWindow::GPSUpdate(QByteArray paquete)
{
    qPacketFMSGPS_t *gps = (qPacketFMSGPS_t *)paquete.data();
    ui->lcdGPSAltura->display(gps->altura);
    ui->lcdGPSFastAltura->display(gps->altura);
    standardAltimetroGPS->setAltura(gps->altura * 3.280839895013123);

    ui->lcdGPSLatitud->display(gps->latitud);
    ui->lcdGPSFastLatitud->display(gps->latitud);

    ui->lcdGPSLongitud->display(gps->longitud);
    ui->lcdGPSFastLongitud->display(gps->longitud);

    ui->lcdGPSRumbo->display(gps->rumbo);
    ui->lcdGPSFastRumbo->display(gps->rumbo);

    int sat = gps->GPSSatellitesUsed;
    int unidades = (sat & 0xFF) - '0';
    int decimales = ((sat>>8) & 0xFF) - '0';
    if (decimales < 0) decimales = 0;
    sat = 10 * decimales + unidades;

    ui->lcdGPSSatelitesUsed->display(sat);
    ui->lcdGPSFastSatelitesUsed->display(sat);

    ui->lcdGPSSpeed->display(gps->velocidad);
    ui->lcdGPSFastSpeed->display(gps->velocidad);
    if ((gps->GPSPositionFixIndicator - '0') > 0){
        ui->checkBoxGPSPositionFix->setChecked(true);
    }else{
        ui->checkBoxGPSPositionFix->setChecked(false);
    }
    if (gps->GPSStatus == 'A'){
        ui->checkBoxFastPositionFix->setChecked(true);
    }else{
        ui->checkBoxFastPositionFix->setChecked(false);
    }

}

void MainWindow::statusCodeUpdate(QByteArray paquete)
{
    qPacketParameHeartbeat_t *bstatus = (qPacketParameHeartbeat_t *)(paquete.data() + 4);
    ui->checkBoxStatusAHRS->setChecked(bstatus->ahrsStatus);
    ui->checkBoxStatusAnalog->setChecked(bstatus->analogStatus);

    int autopilotHILStatus = bstatus->autopilotHILStatus & 0x1;
    ui->checkBoxStatusAutopilot->setChecked(autopilotHILStatus);
    ui->checkBoxStatusAutotrim->setChecked(bstatus->autotrimHILStatus);

    ui->checkBoxStatusGPS->setChecked(bstatus->gpsStatus);
    ui->checkBoxStatusInerciales->setChecked(bstatus->inercialesStatus);
    ui->checkBoxStatusServos->setChecked(bstatus->servosStatus);
    ui->checkBoxStatusStat->setChecked(bstatus->estadisticasStatus);

    if (bstatus->autopilotStatus){
        ui->radioButtonAutopilotRCOn->setChecked(true);
    }else{
        ui->radioButtonAutopilotRCOff->setChecked(true);
    }
    if (bstatus->autotrimStatus){
        ui->radioButtonAutotrimRCOn->setChecked(true);
    }else{
        ui->radioButtonAutotrimRCOff->setChecked(true);
    }


    int ControlJoysticRCMode = (bstatus->autopilotHILStatus >> 1) & 0x1;
    if(ControlJoysticRCMode != ControlJoysticRCModefeedback){
        if (ControlJoysticRCMode){ //Modo Joystick joystickXPlaneManualControl
            disconnect(this,SIGNAL(RCManualControl(float,float,float,float)),this,SLOT(on_Switch_joy_RC(float,float,float,float)));
            connect(this,SIGNAL(joystickXPlaneManualControl(float,float,float,float)),this,SLOT(on_Switch_joy_RC(float,float,float,float)));
        }else{ //Modo mando RC RCManualControl
            disconnect(this,SIGNAL(joystickXPlaneManualControl(float,float,float,float)),this,SLOT(on_Switch_joy_RC(float,float,float,float)));
            connect(this,SIGNAL(RCManualControl(float,float,float,float)),this,SLOT(on_Switch_joy_RC(float,float,float,float)));
        }
    }
    ControlJoysticRCModefeedback = ControlJoysticRCMode;

    if (ControlJoysticRCMode){
        if (autopilotHILStatus){
            ui->radioButtonAutopilotOn->setChecked(true);
        }else{
            ui->radioButtonAutopilotOff->setChecked(true);
        }
        if (bstatus->autotrimHILStatus){
            ui->radioButtonAutotrimOn->setChecked(true);
        }else{
            ui->radioButtonAutotrimOff->setChecked(true);
        }
    }else{
        if (bstatus->autopilotStatus){
            ui->radioButtonAutopilotOn->setChecked(true);
        }else{
            ui->radioButtonAutopilotOff->setChecked(true);
        }
        if (bstatus->autotrimStatus){
            ui->radioButtonAutotrimOn->setChecked(true);
        }else{
            ui->radioButtonAutotrimOff->setChecked(true);
        }
    }


    emit statusAutopilotHILsend(bstatus->autopilotStatus, bstatus->autotrimStatus);
    emit statusAutopilotRCsend(bstatus->autopilotStatus, bstatus->autotrimStatus);

}

void MainWindow::estadoSerialDebug(QString text)
{
    Statlabel->setText(text);
}

void MainWindow::HILflybywireUpdate(float alerones, float elevator, float rudder, float throttle)
{
    ui->joystickHILFBWAleron->setValue(ServoRange(alerones));
    ui->joystickHILFBWProfundidad->setValue(ServoRange(elevator));
    ui->joystickHILFBWRudder->setValue(ServoRange(rudder));
    ui->joystickHILFBWGases->setValue(ServoRange(throttle));
}

void MainWindow::ParamAutopilotFBWUpdate(QByteArray paquete)
{
    qPacketParamAutopilotFBW_t *parametros = (qPacketParamAutopilotFBW_t *)(paquete.data());

    ui->doubleSpinBox_k_airln->setValue(parametros->k_airln);
    ui->doubleSpinBox_k_altura->setValue(parametros->k_altura);
    ui->doubleSpinBox_k_div_P_init->setValue(parametros->k_div_P_init);
    ui->doubleSpinBox_k_div_P_speed->setValue(parametros->k_div_P_speed);
    ui->doubleSpinBox_k_div_Q_init->setValue(parametros->k_div_Q_init);
    ui->doubleSpinBox_k_div_Q_speed->setValue(parametros->k_div_Q_speed);
    ui->doubleSpinBox_k_div_R_init->setValue(parametros->k_div_R_init);
    ui->doubleSpinBox_k_div_R_speed->setValue(parametros->k_div_R_speed);
    ui->doubleSpinBox_k_elev->setValue(parametros->k_elev);
    ui->doubleSpinBox_k_heading->setValue(parametros->k_heading);
    ui->doubleSpinBox_k_int_altura->setValue(parametros->k_int_altura);
    ui->doubleSpinBox_k_int_pitch->setValue(parametros->k_int_pitch);
    ui->doubleSpinBox_k_pitch->setValue(parametros->k_pitch);
    ui->doubleSpinBox_k_roll->setValue(parametros->k_roll);
    ui->doubleSpinBox_k_rudder->setValue(parametros->k_rudder);
    ui->doubleSpinBox_k_VVI->setValue(parametros->k_VVI);
    ui->spinBox_k_div_velocidad->setValue(parametros->k_div_velocidad);

//    float k_int_altura;
//    float k_altura;
//    float k_VVI;
//    float k_pitch;
//// Parametros para el control de rumbo
//    float k_heading;
//    float k_roll;
//// Parametros para el control de velocidad
//    int k_div_velocidad;
//// Parametros del fly-by-wire
//    float k_div_P_init;
//    float k_div_P_speed;
//    float k_div_Q_init;
//    float k_div_Q_speed;
//    float k_div_R_init;
//    float k_div_R_speed;
//    float k_int_pitch;
//    float k_elev;
//    float k_airln;
//    float k_rudder;
}

void MainWindow::on_actionHILControlJoystick_triggered()
{
    /* Desconecta el control fly-by-wire que viene de la placa */
    disconnect(board,SIGNAL(HILflybywireUpdate(float,float,float,float)),
               this, SLOT(on_Control_XPlane(float,float,float,float)));
    /* Conecto el control manual, que con el slot on_Control.. se selecciona o Joystic o
        directamente de la señal de los servos de entrada.*/
    connect(this,SIGNAL(XPlaneManualControl(float,float,float,float)),
            this,SLOT(on_Control_XPlane(float,float,float,float)));
    ui->actionHILControlJoystick->setEnabled(false);
    ui->actionHILControlRC->setEnabled(true);

//    /* Desconecta el control del Joystick por RC */
//    disconnect(this, SIGNAL(joystickRC(int,int,int)), this, SLOT(joystickcontrol(int,int,int)));
//    disconnect(this,SIGNAL(throttleRC(int)),this, SLOT(throttlecontrol(int)));
//    /* Control del Joystick por XPlane */
//    connect(this,SIGNAL(joystickXPlane(int,int,int)), this, SLOT(joystickcontrol(int,int,int)));
//    connect(this, SIGNAL(throttleXPlane(int)), this, SLOT(throttlecontrol(int)));
}

void MainWindow::on_actionHILControlRC_triggered()
{
    /* Desconecta el control manual, que con el slot on_Control.. se selecciona o Joystic o
        directamente de la señal de los servos de entrada.*/
    disconnect(this,SIGNAL(XPlaneManualControl(float,float,float,float)),
            this,SLOT(on_Control_XPlane(float,float,float,float)));
    /* Conecto el control fly-by-wire que viene de la placa */
    connect(board,SIGNAL(HILflybywireUpdate(float,float,float,float)),
               this, SLOT(on_Control_XPlane(float,float,float,float)));
    ui->actionHILControlRC->setEnabled(false);
    ui->actionHILControlJoystick->setEnabled(true);

//    /* Desconecta el control del Joystick por XPlane */
//    disconnect(this,SIGNAL(joystickXPlane(int,int,int)), this, SLOT(joystickcontrol(int,int,int)));
//    disconnect(this, SIGNAL(throttleXPlane(int)), this, SLOT(throttlecontrol(int)));
//    /* Control del Joystick por RC */
//    connect(this, SIGNAL(joystickRC(int,int,int)), this, SLOT(joystickcontrol(int,int,int)));
//    connect(this,SIGNAL(throttleRC(int)),this, SLOT(throttlecontrol(int)));
}

void MainWindow::on_actionParamStart_triggered()
{
    board->qComandoStart();
}

void MainWindow::on_actionParamStop_triggered()
{
    board->qComandoStop();
}

void MainWindow::on_actionAutopilotReset_triggered()
{
    board->qComandoReset();
}

void MainWindow::on_actionAnalogOn_triggered()
{
    board->qComandoSensoresAnalogicosOn();
}

void MainWindow::on_actionAnalogOff_triggered()
{
    board->qComandoSensoresAnalogicosOff();
}

void MainWindow::on_actionInercialOn_triggered()
{
    board->qComandoSensoresInercialesOn();
}

void MainWindow::on_actionInercialOff_triggered()
{
    board->qComandoSensoresInercialesOff();
}

void MainWindow::on_actionAHRSOn_triggered()
{
    board->qComandoAHRSOn();
}

void MainWindow::on_actionAHRSOff_triggered()
{
    board->qComandoAHRSOff();
}

void MainWindow::on_actionSTATOn_triggered()
{
    board->qComandoEstadisticasOn();
}

void MainWindow::on_actionSTATOff_triggered()
{
    board->qComandoEstadisticasOff();
}

void MainWindow::on_actionGPSOn_triggered()
{
    board->qComandoGPSOn();
}

void MainWindow::on_actionGPSOff_triggered()
{
    board->qComandoGPSOff();
}

void MainWindow::on_actionServosOn_triggered()
{
    board->qComandoServosInOn();
}

void MainWindow::on_actionServosOff_triggered()
{
    board->qComandoServosInOff();
}

void MainWindow::on_actionFBWOn_triggered()
{
    board->qComandoFlyByWireOn();
}

void MainWindow::on_actionFBWOff_triggered()
{
    board->qComandoFlyByWireOff();
}

void MainWindow::on_actionHIL_Load_Gando_triggered()
{
//    QString datos("hil load gando\n");
//    QByteArray dataline = datos.toUtf8();
//    serial->write(dataline);
//    emit txserialctr(dataline.size());
    board->qComandoHILLoadGando();
}

void MainWindow::on_actionHIL_Load_Ruta_Isla_triggered()
{
    board->qComandoHILLoadRutaIsla();
}

void MainWindow::on_actionHIL_Load_Alternativa_triggered()
{
    board->qComandoHILLoadAlternativa();
}

void MainWindow::on_actionHIL_Load_Vuelo_triggered()
{
    board->qComandoHILLoadVuelo();
}

void MainWindow::on_actionHIL_NEXT_WAYPOINT_triggered()
{
    board->qComandoHILFMSNextWaypoint();
}

void MainWindow::on_actionHIL_PREV_WAYPOINT_triggered()
{
    board->qComandoHILFMSPrevWaypoint();
}

void MainWindow::on_actionFMSFlyPlanOn_triggered()
{
    board->qComandoFMSFlyPlanOn();
}

void MainWindow::on_actionFMSFlyPlanOff_triggered()
{
    board->qComandoFMSFlyPlanOff();
}

void MainWindow::on_actionFMSHILFlyPlanOn_triggered()
{
    board->qComandoFMSHILFlyPlanOn();
}

void MainWindow::on_actionFMSHILFlyPlanOff_triggered()
{
    board->qComandoFMSHILFlyPlanOff();
}

void MainWindow::on_actionAutopilot_On_triggered()
{
    board->qComandoAutopilotOn();
}

void MainWindow::on_actionAutopilot_off_triggered()
{
    board->qComandoAutopilotOff();
}

void MainWindow::on_actionAutotrim_On_triggered()
{
    board->qComandoAutoTrimOn();
}

void MainWindow::on_actionAutotrim_Off_triggered()
{
    board->qComandoAutoTrimOff();
}

void MainWindow::on_pushButtonFMSNext_clicked()
{
    board->qComandoFMSNextWaypoint();
}

void MainWindow::on_pushButtonFMSPrevious_clicked()
{
    board->qComandoFMSPrevWaypoint();
}

void MainWindow::on_pushButtonHILFMSNext_clicked()
{
    board->qComandoHILFMSNextWaypoint();
}

void MainWindow::on_pushButtonHILFMSPrevious_clicked()
{
    board->qComandoHILFMSPrevWaypoint();
}




void MainWindow::on_spinBoxRateParam_valueChanged(int arg1)
{
    board->qComandoSetParamTaskRate(arg1);
}

void MainWindow::on_spinBoxRateFMS_valueChanged(int arg1)
{
    board->qComandoSetFMSTaskRate(arg1);
}

void MainWindow::on_spinBoxRateServos_valueChanged(int arg1)
{
    board->qComandoSetServosTaskRate(arg1);
}

void MainWindow::on_actionPlane_Joystick_triggered()
{
    board->qComandoControlModeJoysticRC(1);
}

void MainWindow::on_actionPlane_RC_triggered()
{
    board->qComandoControlModeJoysticRC(0);
}

void MainWindow::on_actionTest_triggered()
{
    xplane->flightSpeedControl(0.2,0.3,0.4,0.5);
}

void MainWindow::on_actionServos_Control_Mode_FBW_triggered()
{
    board->qComandoSetServosControlModeFBW();
}

void MainWindow::on_actionServos_Control_Mode_HIL_triggered()
{
    board->qComandoSetServosControlModeHIL();
}

void MainWindow::on_ServosOut_1_valueChanged(int value)
{
    board->qComandoSetServosOutPosition(0, ((float)-value)/ 100);
}

void MainWindow::on_ServosOut_2_valueChanged(int value)
{
    board->qComandoSetServosOutPosition(1, ((float)-value)/ 100);
}

void MainWindow::on_ServosOut_3_valueChanged(int value)
{
    board->qComandoSetServosOutPosition(2, ((float)-value)/ 100);
}

void MainWindow::on_ServosOut_4_valueChanged(int value)
{
    board->qComandoSetServosOutPosition(3, ((float)-value)/ 100);
}

void MainWindow::on_ServosOut_5_valueChanged(int value)
{
    board->qComandoSetServosOutPosition(4, ((float)-value)/ 100);
}

void MainWindow::on_ServosOut_6_valueChanged(int value)
{
    board->qComandoSetServosOutPosition(5, ((float)-value)/ 100);
}

void MainWindow::on_ServosOut_7_valueChanged(int value)
{
    board->qComandoSetServosOutPosition(6, ((float)-value)/ 100);
}

void MainWindow::on_ServosOut_8_valueChanged(int value)
{
    board->qComandoSetServosOutPosition(7, ((float)-value)/ 100);
}

void MainWindow::on_ServosOut_9_valueChanged(int value)
{
    board->qComandoSetServosOutPosition(8, ((float)-value)/ 100);
}

void MainWindow::on_ServosOut_10_valueChanged(int value)
{
    board->qComandoSetServosOutPosition(9, ((float)-value)/ 100);
}

void MainWindow::on_ServosOut_11_valueChanged(int value)
{
    board->qComandoSetServosOutPosition(10, ((float)-value)/ 100);
}

void MainWindow::on_ServosOut_12_valueChanged(int value)
{
    board->qComandoSetServosOutPosition(11, ((float)-value)/ 100);
}

void MainWindow::on_ServosOut_13_valueChanged(int value)
{
    board->qComandoSetServosOutPosition(12, ((float)-value)/ 100);
}

void MainWindow::on_ServosOut_14_valueChanged(int value)
{
    board->qComandoSetServosOutPosition(13, ((float)-value)/ 100);
}

void MainWindow::on_ServosOut_15_valueChanged(int value)
{
    board->qComandoSetServosOutPosition(14, ((float)-value)/ 100);
}

void MainWindow::on_ServosOut_16_valueChanged(int value)
{
    board->qComandoSetServosOutPosition(15, ((float)-value)/ 100);
}

void MainWindow::on_ServosOut_17_valueChanged(int value)
{
    board->qComandoSetServosOutPosition(16, ((float)-value)/ 100);
}

void MainWindow::on_ServosOut_18_valueChanged(int value)
{
    board->qComandoSetServosOutPosition(17, ((float)-value)/ 100);
}

void MainWindow::on_ServosOut_19_valueChanged(int value)
{
    board->qComandoSetServosOutPosition(18, ((float)-value)/ 100);
}

void MainWindow::on_ServosOut_20_valueChanged(int value)
{
    board->qComandoSetServosOutPosition(19, ((float)-value)/ 100);
}

void MainWindow::on_pushButtonAutopilotParamLoad_clicked()
{
    board->qComandoLoadParametrosAutopilotFBW();
}

void MainWindow::on_doubleSpinBox_k_int_pitch_valueChanged(double arg1)
{
    board->qComandoSetAutopilotParam_k_int_pitch(arg1);
}

void MainWindow::on_doubleSpinBox_k_div_Q_speed_valueChanged(double arg1)
{
    board->qComandoSetAutopilotParam_k_div_Q_speed(arg1);
}

void MainWindow::on_doubleSpinBox_k_elev_valueChanged(double arg1)
{
    board->qComandoSetAutopilotParam_k_elev(arg1);
}

void MainWindow::on_doubleSpinBox_k_div_Q_init_valueChanged(double arg1)
{
    board->qComandoSetAutopilotParam_k_div_Q_init(arg1);
}

void MainWindow::on_doubleSpinBox_k_pitch_valueChanged(double arg1)
{
    board->qComandoSetAutopilotParam_k_pitch(arg1);
}

void MainWindow::on_doubleSpinBox_k_VVI_valueChanged(double arg1)
{
    board->qComandoSetAutopilotParam_k_VVI(arg1);
}

void MainWindow::on_doubleSpinBox_k_altura_valueChanged(double arg1)
{
    board->qComandoSetAutopilotParam_k_altura(arg1);
}

void MainWindow::on_doubleSpinBox_k_int_altura_valueChanged(double arg1)
{
    board->qComandoSetAutopilotParam_k_int_altura(arg1);
}

void MainWindow::on_doubleSpinBox_k_airln_valueChanged(double arg1)
{
    board->qComandoSetAutopilotParam_k_airln(arg1);
}

void MainWindow::on_doubleSpinBox_k_div_P_init_valueChanged(double arg1)
{
    board->qComandoSetAutopilotParam_k_div_P_init(arg1);
}

void MainWindow::on_doubleSpinBox_k_div_P_speed_valueChanged(double arg1)
{
    board->qComandoSetAutopilotParam_k_div_P_speed(arg1);
}

void MainWindow::on_doubleSpinBox_k_roll_valueChanged(double arg1)
{
    board->qComandoSetAutopilotParam_k_roll(arg1);
}

void MainWindow::on_doubleSpinBox_k_heading_valueChanged(double arg1)
{
    board->qComandoSetAutopilotParam_k_heading(arg1);
}

void MainWindow::on_doubleSpinBox_k_rudder_valueChanged(double arg1)
{
    board->qComandoSetAutopilotParam_k_rudder(arg1);
}

void MainWindow::on_doubleSpinBox_k_div_R_init_valueChanged(double arg1)
{
    board->qComandoSetAutopilotParam_k_div_R_init(arg1);
}

void MainWindow::on_doubleSpinBox_k_div_R_speed_valueChanged(double arg1)
{
    board->qComandoSetAutopilotParam_k_div_R_speed(arg1);
}

void MainWindow::on_spinBox_k_div_velocidad_valueChanged(int arg1)
{
    board->qComandoSetAutopilotParam_k_div_velocidad(arg1);
}


void MainWindow::on_pushButtonSerialUpdate_clicked()
{
    /* Actualizacion de la lista de puertos series */

    int row = modelserial->rowCount();
    modelserial->removeRows(0,row);

    QSerialPortInfo portinfo;
    QSerialPortInfo port;

    foreach (QSerialPortInfo ptinfo , QSerialPortInfo::availablePorts())
    {
        qDebug() << ptinfo.portName();

        row = modelserial->rowCount();
        modelserial->insertRows(row,1);
        QModelIndex index = modelserial->index(row);
        modelserial->setData(index,ptinfo.portName());
        if(QString::compare(ptinfo.portName(),"COM3", Qt::CaseInsensitive) == 0)
        {
            port = ptinfo;
        }
    }
}
