#include "xplane.h"
#include <QDebug>


XPlane::XPlane(QObject *parent) :
    QObject(parent)
{
    XPlanePort = 49000;
}

void XPlane::initSocket(qint16 port)
{
    udpSocket = new QUdpSocket(this);
    udpSocket->bind(QHostAddress::AnyIPv4, port);


    connect(udpSocket, SIGNAL(readyRead()),
            this, SLOT(on_readyRead()));
}

void XPlane::on_readyRead()
{
    while (udpSocket->hasPendingDatagrams()) {
        QByteArray datagram;
        datagram.resize(udpSocket->pendingDatagramSize());


        udpSocket->readDatagram(datagram.data(), datagram.size(),
                                &hostSender, &hostSenderPort);
        //qDebug() << datagram;
        emit processTheDatagram(datagram);
    }
}

void XPlane::on_processTheDatagram(QByteArray datagram)
{

    //    int tamano = datagram.size();
    //    int elev, ailrn,ruddr,throl;
    //    emit udpctr(tamano);
    //    int numtramas = (tamano - 5)/ 36;

    //    qHILXPlaneInfo_t XPlaneInfo;
    //    qXPlanePacket_t *paquete;

    //    QByteArray datos;

    //    int i;
    //    for (i = 0; i < tamano-5;i++){
    //        datos.append(datagram.at(i+5));

    //    }

    //    QList<QByteArray> lista;
    //    for (i = 0; i < numtramas; i++){
    //        QByteArray trama;
    //        for (int j=0; j < 36; j++){
    //            trama.append(datos.at(36*i + j));
    //        }
    //        lista.append(trama);
    //    }
    //    modelvar->setRowCount(lista.size());
    //    QStringList msg;
    //    i = 0;
    //    foreach (QByteArray trama, lista){
    //        //qDebug() << extractdataref(trama);
    //        //qDebug() << QString::number(extractdataref(trama));
    //        msg.append(QString::number(extractdataref(trama)));
    //        float variable;
    //        //char buffer[10];
    //        QString varstr;
    //        paquete = (qXPlanePacket_t *)trama.data();

    //        switch (extractdataref(trama))
    //        {
    //        case 3:                             /* Speeds */
    //            variable = paquete->var[0];
    //            //variable = extractvariable(trama, 1);
    //            ui->lcdHILVind->display(qRound(variable));
    //            XPlaneInfo.velocidad = variable;
    //            break;
    //        case 4:                             /* MACH, VVI, G-load */
    //            variable = paquete->var[0];
    //            varstr.sprintf("%.3f",variable);
    //            ui->lcdHILMach->display(varstr);
    //            variable = paquete->var[2];
    //            varstr.sprintf("%.3f",variable);
    //            ui->lcdHILVVI->display(varstr);
    //            XPlaneInfo.VVI = variable;

    //            variable = paquete->var[4];
    //            varstr.sprintf("%.3f",variable);
    //            ui->lcdHILGnorml->display(varstr);
    //            variable = paquete->var[5];
    //            varstr.sprintf("%.3f",variable);
    //            ui->lcdHILGaxial->display(varstr);
    //            variable = paquete->var[6];
    //            varstr.sprintf("%.3f",variable);
    //            ui->lcdHILGside->display(varstr);
    //            break;
    //        case 6:                             /* Atmosphere: aircraft */

    //            break;
    //        case 8:                             /* Joystick */
    //            variable = paquete->var[0];
    //            elev = 100 * variable;
    //            //ui->joystickProfundidad->setValue((int) (-variable));
    //            variable = paquete->var[1];
    //            ailrn = 100 * variable;
    //            //ui->joystickAleron->setValue((int)variable);
    //            variable = paquete->var[2];
    //            ruddr = 100 * variable;
    //            emit joystickXPlane(elev,ailrn,ruddr);
    //            //ui->joystickRudder->setValue((int)variable);

    //            XPlaneInfo.elevator = elev;
    //            XPlaneInfo.alerones = ailrn;
    //            XPlaneInfo.rudder = ruddr;

    //            break;
    //        case 11:                             /* flight con ail/elev/rud */

    //            break;
    //        case 16:                             /* angular velocities */
    //            variable = paquete->var[0];
    //            varstr.sprintf("%.3f",variable);
    //            ui->lcdHILQ->display(varstr);
    //            XPlaneInfo.gx = variable;

    //            variable = paquete->var[1];
    //            varstr.sprintf("%.3f",variable);
    //            ui->lcdHILP->display(varstr);
    //            XPlaneInfo.gy = variable;

    //            variable = paquete->var[2];
    //            varstr.sprintf("%.3f",variable);
    //            ui->lcdHILR->display(varstr);
    //            XPlaneInfo.gz = variable;
    //            break;
    //        case 17:                             /* pitch, roll, heading */
    //            variable = paquete->var[0];
    //            //variable = paquete->var[0];
    //            ui->lcdHILPitch->display(qRound(variable));
    //            XPlaneInfo.pitch = variable;

    //            variable = paquete->var[1];
    //            //variable = paquete->var[1];
    //            ui->lcdHILRoll->display(qRound(variable));
    //            XPlaneInfo.roll = variable;

    //            variable = paquete->var[2];
    //            //variable = extractvariable(trama, 3);
    //            ui->lcdHILRumbo->display(qRound(variable));
    //            XPlaneInfo.yaw = variable;
    //            break;
    //        case 18:                             /* AoA, side-slip, paths */
    //            variable = paquete->var[0];
    //            varstr.sprintf("%.3f",variable);
    //            ui->lcdHILAoA->display(varstr);
    //            variable = paquete->var[1];
    //            varstr.sprintf("%.3f",variable);
    //            ui->lcdHILbeta->display(varstr);

    //            variable = paquete->var[2];
    //            varstr.sprintf("%.3f",variable);
    //            ui->lcdHILhding->display(varstr);
    //            XPlaneInfo.yaw = variable;

    //            variable = paquete->var[3];
    //            varstr.sprintf("%.3f",variable);
    //            ui->lcdHILvpath->display(varstr);
    //            break;
    //        case 20:                             /* latitud, longitud, altitude */
    //            variable = paquete->var[0];
    //            ui->lcdHILLatitud->display(variable);
    //            XPlaneInfo.latitud = variable;

    //            variable = paquete->var[1];
    //            ui->lcdHILLongitud->display(variable);
    //            XPlaneInfo.longitud = variable;

    //            variable = paquete->var[2];
    //            ui->lcdHILAltura->display(qRound(variable));
    //            XPlaneInfo.altitud = variable;

    //            variable = paquete->var[5];
    //            ui->lcdHILAltitude->display(qRound(variable));
    //            break;
    //        case 25:                             /* throttle command */
    //            variable = paquete->var[0];
    //            throl = 100 * variable;
    //            XPlaneInfo.throttle = variable;

    //            emit throttleXPlane(throl);
    //            //ui->joystickGases->setValue(variable);
    //            break;
    //        }

    //        for (int j=0;j<8;j++){
    //            float variable = extractvariable(trama, j+1);
    //            QModelIndex index = modelvar->index(i, j);
    //            modelvar->setData(index,variable);
    //        }
    //        i++;

    //    }

    //    datos.clear();
    //    datos.append((char *)&XPlaneInfo, sizeof(qHILXPlaneInfo_t));
    //    ui->lineEditXPlaneNumTramas->setText(msg.join(","));

}

void XPlane::on_Control_XPlane(float alerones, float elevator, float rudder, float throttle)
{
    QByteArray trama = flightSpeedControl(alerones, elevator, rudder, throttle);
    udpSocket->writeDatagram(trama,hostSender,XPlanePort);


}
void XPlane::close()
{
    QByteArray trama = flightSpeedControl(-999, -999, -999, -999);
    udpSocket->writeDatagram(trama,hostSender,XPlanePort);
    udpSocket->waitForBytesWritten();
    udpSocket->close();
    delete(udpSocket);
}

QByteArray &XPlane::flightSpeedControl(float alerones, float elevator, float rudder, float throttle)
{
    QByteArray header("DATA\0",5);
    QByteArray flightcontrol;
    flightcontrol.resize(sizeof(qXPlanePacket_t));
    qXPlanePacket_t *datosptr = (qXPlanePacket_t *)flightcontrol.data();

    datosptr->DataRef = 11;
    datosptr->var[0] = elevator;
    datosptr->var[1] = alerones;
    datosptr->var[2] = rudder;
    for (int i = 3; i<8;i++){
        datosptr->var[i] = -999;
    }

    QByteArray throttlecommand;
    throttlecommand.resize(sizeof(qXPlanePacket_t));
    datosptr = (qXPlanePacket_t *)throttlecommand.data();

    datosptr->DataRef = 25;
    for (int i = 0; i<8;i++){
        datosptr->var[i] = throttle;
    }

    QByteArray trama = header + flightcontrol + throttlecommand;
    return trama;
}


quint16 XPlane::getXPlanePort() const
{
    return XPlanePort;
}

void XPlane::setXPlanePort(const quint16 &value)
{
    XPlanePort = value;
}

