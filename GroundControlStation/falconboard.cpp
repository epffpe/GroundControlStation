#include "falconboard.h"
/**************************************************************/
#define pi 3.1415926535897932384626433832795


/**************************************************************/
typedef void (FalconBoard::*QTCMD_TypeDef)(QByteArray);

const QTCMD_TypeDef qcomandos[] ={
    &FalconBoard::qParamHeartbeat,
    &FalconBoard::qParamAHRS,
    &FalconBoard::qParamSensoresInerciales,
    &FalconBoard::qParamSensoresAnalogicos,
    &FalconBoard::qServosServosIn,
    &FalconBoard::qServosFlyByWire,
    &FalconBoard::qFMSFlyPlan,
    &FalconBoard::qFMSHILFlyPlan,
    &FalconBoard::qFMSEstadisticas,
    &FalconBoard::qFMSGPS,
    &FalconBoard::qHILXPlane,
    &FalconBoard::qLoadParamAutopilotFBW,
};
#define QTCMD_COUNT  (sizeof(qcomandos) / sizeof (qcomandos[0]))

/**************************************************************/
/* Pruebas para definir la tabla como un atributo de la clase */
/**************************************************************/
void (FalconBoard::*qcomandos2[])(QByteArray) ={
        &FalconBoard::qParamHeartbeat,
        &FalconBoard::qParamAHRS,
        &FalconBoard::qParamSensoresInerciales,
        &FalconBoard::qParamSensoresAnalogicos,
        &FalconBoard::qServosServosIn,
        &FalconBoard::qServosFlyByWire,
        &FalconBoard::qFMSFlyPlan,
        &FalconBoard::qFMSHILFlyPlan,
        &FalconBoard::qFMSEstadisticas,
        &FalconBoard::qFMSGPS,
};

#define QTCMD_COUNT2  ( sizeof(FalconBoard::qcomandos[0]) )
/**************************************************************/
/**************************************************************/
/**************************************************************/
FalconBoard::FalconBoard(QObject *parent) :
    QObject(parent)
{
    char *hdr = (char *)&header;
    hdr[0] = '#';
    hdr[1] = 'Q';
    hdr[2] = 'T';
    hdr[3] = ',';
}

void FalconBoard::run()
{
    emit rxserialctr(trama.size());

    int indice = 0;
    //qDebug() << serial->bytesAvailable();
    paqueterecibido += trama;
    indice = trama.indexOf("\r\n\r\n");

    while( indice != -1){
        indice = paqueterecibido.indexOf("\rQT,");
        if (indice != 0) emit fallopaquete(1);
        paqueterecibido.remove(0,indice + 4);
        indice = paqueterecibido.indexOf("\r\n\r\n");
        QByteArray data(paqueterecibido.data(),indice);

        decode(data);

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

            //ui->lineEditSerialReceived->setText(recibido);

            //qDebug() << "-> "<< recibido;
            datosrecibidos.remove(0,indice);
            indice = datosrecibidos.indexOf("\r",1);
        }
    }
}


/**************************************************************/
/**************************************************************/
/**************************************************************/
/**************************************************************/
void FalconBoard::decode(QByteArray data)
{
    unsigned int tipo;

    int *tipoptr = (int *)data.data();
    tipo = *tipoptr;

    if (tipo & 0x80000000UL){
        tipo &= 0x00FFFFFFFUL;
        if (tipo < QTCMD_COUNT){
            if (qcomandos[tipo]){
                //data.remove(data.size()-1,1);
                if (!checksum(data)) {
                    (this->*qcomandos[tipo])(data);
                    return;
                }
            }
        }
    }
    emit fallopaquete(1);
    //emit fallopaquete(data.size());
}

void FalconBoard::on_xplanInfo2board(QByteArray paquete)
{
    comandoNvar(qComandoxplanInfo2board_t,paquete);
}
/**************************************************************/
/**************************************************************/
/**************************************************************/
/**************************************************************/
int FalconBoard::extraedatos(QByteArray &paquete, int *datos, int datalen)
{
    unsigned N = datalen/4;
    paquete.remove(0,4);
    int *packet = (int *) paquete.data();
    for (int i= 0; i < N; i++){
        datos[i] = packet[i];
    }
}
/**************************************************************/
/**************************************************************/
int FalconBoard::checksum(QByteArray &paquete)
{
    unsigned N = paquete.size()/4;
    int *packet = (int *) paquete.data();

    int sum = 0;
    for (int i= 0; i < N; i++){
        sum += packet[i];
    }

    return sum;
}
/**************************************************************/
/**************************************************************/
void FalconBoard::qParamHeartbeat(QByteArray paquete)
{
//    qPacketParameHeartbeat_t *bstatus = (qPacketParameHeartbeat_t *)(paquete.data() + 4);
//    if(bstatus->estadisticasStatus) qDebug() << " Estadisticas";
//    if(bstatus->gpsStatus) qDebug() << " GPS";
//    if (bstatus->ahrsStatus) qDebug() << "AHRS";
//    qDebug() << "AHRS:" << QString::number(bstatus->ahrsStatus) << "Analog:" << QString::number(bstatus->analogStatus);
    emit statusCodeUpdate(paquete);
}

void FalconBoard::qParamAHRS(QByteArray paquete)
{
    qPacketParamAHRS_t *qahrs;
    qahrs = (qPacketParamAHRS_t *)(paquete.data() + 4);
    emit ahrs(qahrs->yaw, qahrs->pitch, qahrs->roll );
    //qDebug() << qahrs->yaw << "," << qahrs->pitch << "," << qahrs->roll;
}

void FalconBoard::qParamSensoresInerciales(QByteArray paquete)
{
    qPacketParamSensoresInerciales_t *qinerciales;
    qinerciales = (qPacketParamSensoresInerciales_t *)(paquete.data() + 4);
    qinerciales->gx *= 180.0 / pi;
    emit gyroUpdate(qinerciales->gx, qinerciales->gy, qinerciales->gz);
    emit accUpdate(qinerciales->accx,qinerciales->accy, qinerciales->accz);
    emit magUpdate(qinerciales->magx, qinerciales->magy, qinerciales->magz);
    //qDebug() << qinerciales->gx << "," <<  qinerciales->gy << "," <<  qinerciales->gz;
}

void FalconBoard::qParamSensoresAnalogicos(QByteArray paquete)
{
    qPacketParamensoresAnalogicos_t *qanalog;
    qanalog = (qPacketParamensoresAnalogicos_t *)(paquete.data() + 4);
    emit adcUpdate(qanalog->temperatura, qanalog->bateria);
    emit baroUpdate(qanalog->baro, qanalog->altitud_externa, qanalog->VVI);
    emit pitotUpdate(qanalog->pitot, qanalog->calibratedSpeed);
}

void FalconBoard::qServosServosIn(QByteArray paquete)
{
    paquete.remove(0,4);
    paquete.remove(paquete.size()-4,4);
    if (paquete.size() == 4*12){
        emit servosInUpdate(paquete);
    }

}

void FalconBoard::qServosFlyByWire(QByteArray paquete)
{
    float *Servos = (float *)(paquete.data() + 4);
    emit flybywireUpdate(Servos[0],Servos[1],Servos[2],Servos[3]);
}

void FalconBoard::qFMSFlyPlan(QByteArray paquete)
{
    qPacketFMSFlyPath_t *flypath;
    flypath = (qPacketFMSFlyPath_t *)(paquete.data() + 4);
    emit flypathUpdate(flypath->brng, flypath->altura,flypath->velocidad,flypath->distancia,flypath->actualWaypoint);
}

void FalconBoard::qFMSHILFlyPlan(QByteArray paquete)
{
    qPacketFMSFlyPath_t *flypath;
    flypath = (qPacketFMSFlyPath_t *)(paquete.data() + 4);
    emit HILflypathUpdate(flypath->brng, flypath->altura,flypath->velocidad,flypath->distancia,flypath->actualWaypoint);
}

void FalconBoard::qFMSEstadisticas(QByteArray paquete)
{
    qPacketFMSEstadisticas_t * stat = (qPacketFMSEstadisticas_t *)(paquete.data() + 4);
    emit FSMEstadisticasUpdate(stat->SensorDSC, stat->ControlDSC);
}

void FalconBoard::qFMSGPS(QByteArray paquete)
{
    paquete.remove(0,4);
    paquete.remove(paquete.size()-4,4);
    qPacketFMSGPS_t *gps = (qPacketFMSGPS_t *)paquete.data();
    if (paquete.size() == sizeof(qPacketFMSGPS_t)){
        emit GPSUpdate(paquete);
    }
}

void FalconBoard::qHILXPlane(QByteArray paquete)
{
    qPacketSurfacesFlightControl_t *surfacecontrol;
    surfacecontrol = (qPacketSurfacesFlightControl_t *)(paquete.data() + 4);
    emit HILflybywireUpdate(surfacecontrol->alerones, surfacecontrol->elevator,
                            surfacecontrol->rudder, surfacecontrol->throttle);
    //qDebug() << QString::number(surfacecontrol->alerones) << "," << QString::number(surfacecontrol->elevator) << "," << QString::number(surfacecontrol->rudder) << "," << QString::number(surfacecontrol->throttle);
}

void FalconBoard::qLoadParamAutopilotFBW(QByteArray paquete)
{
    paquete.remove(0,4);
    paquete.remove(paquete.size()-4,4);
    if (paquete.size() == sizeof(qPacketParamAutopilotFBW_t)){
        emit ParamAutopilotFBWUpdate(paquete);
    }
}

QByteArray &FalconBoard::comandoSimple(int tipo)
{
    QByteArray comando;
    comando.resize(sizeof(qComandoSimple_t));
    qComandoSimple_t *qcmd = (qComandoSimple_t *)comando.data();
    qcmd->header = header;
    qcmd->tipo = tipo;
    qcmd->CRC = -tipo;
    comando.append("\r\n\r\n");
    emit serialSend(comando);

    qDebug() << "[" << comando.size() << "bytes] <- Comando simple tipo: " << tipo;
    QString state = "[" + QString::number(comando.size()) + "] <- Comando simple tipo: " + QString::number(tipo);
    emit estadoDebug(state);

    return comando;
}

QByteArray &FalconBoard::comando1var(int tipo, int var)
{
    QByteArray comando;
    comando.resize(sizeof(qComando1var_t));
    qComando1var_t *qcmd = (qComando1var_t *)comando.data();

    qcmd->header = header;
    qcmd->tipo = tipo;
    qcmd->variable1 = var;
    qcmd->CRC = -(tipo + var);
    comando.append("\r\n\r\n");
    emit serialSend(comando);
    qDebug() << "[" << comando.size() << "bytes] <- Comando 1 var tipo: " << tipo;
    QString state = "[" + QString::number(comando.size()) + "] <- Comando 1 var tipo: " + QString::number(tipo);
    emit estadoDebug(state);
    return comando;
}

QByteArray &FalconBoard::comando1var(int tipo, float var)
{
    QByteArray comando;
    comando.resize(sizeof(qComando1var_t));
    qComando1float_t *qcmd = (qComando1float_t *)comando.data();

    qcmd->header = header;
    qcmd->tipo = tipo;
    qcmd->variable1 = var;
    int *variable = (int *)&qcmd->variable1;
    qcmd->CRC = -(tipo + *variable);
    comando.append("\r\n\r\n");
    emit serialSend(comando);
    qDebug() << "[" << comando.size() << "bytes] <- Comando 1 var tipo: " << tipo;
    QString state = "[" + QString::number(comando.size()) + "] <- Comando 1 var tipo: " + QString::number(tipo);
    emit estadoDebug(state);
    return comando;
}

QByteArray &FalconBoard::comandoNvar(int tipo, QByteArray var)
{
    QByteArray comando;
    comando.resize(8);
    qComando1var_t *qcmd = (qComando1var_t *)comando.data();

    qcmd->header = header;
    qcmd->tipo = tipo;

    comando += var;

    int sum = tipo;
    int *varptr = (int *)var.data();

    for (int i = var.size()/4; i != 0; i--){
        sum += *(varptr++);
    }

    QByteArray CRC;
    CRC.resize(4);
    varptr = (int *)CRC.data();
    *varptr = -sum;

    comando += CRC;
    comando.append("\r\n\r\n");
    emit serialSend(comando);
    if (tipo != qComandoxplanInfo2board_t){
        qDebug() << "[" << comando.size() << "] <- Comando N var tipo: " << tipo;
    }

    //QString state = "[" + QString::number(comando.size()) + "] <- Comando N var tipo: " + QString::number(tipo);
    //emit estadoDebug(state);
    return comando;
}


void FalconBoard::qComandoStop()
{
    comandoSimple(qComandoStop_t);
}

void FalconBoard::qComandoStart()
{
    comandoSimple(qComandoStart_t);
}

void FalconBoard::qComandoReadAll()
{
    comandoSimple(qComandoReadAll_t);
}

void FalconBoard::qComandoReset()
{
    comandoSimple(qComandoReset_t);
}

void FalconBoard::qComandoAHRSOn()
{
    comandoSimple(qComandoAHRSOn_t);
}

void FalconBoard::qComandoAHRSOff()
{
    comandoSimple(qComandoAHRSOff_t);
}

void FalconBoard::qComandoSensoresInercialesOn()
{
    comandoSimple(qComandoSensoresInercialesOn_t);
}

void FalconBoard::qComandoSensoresInercialesOff()
{
    comandoSimple(qComandoSensoresInercialesOff_t);
}

void FalconBoard::qComandoSensoresAnalogicosOn()
{
    comandoSimple(qComandoSensoresAnalogicosOn_t);
}

void FalconBoard::qComandoSensoresAnalogicosOff()
{
    comandoSimple(qComandoSensoresAnalogicosOff_t);
}

void FalconBoard::qComandoEstadisticasOn()
{
    comandoSimple(qComandoEstadisticasOn_t);
}

void FalconBoard::qComandoEstadisticasOff()
{
    comandoSimple(qComandoEstadisticasOff_t);
}

void FalconBoard::qComandoGPSOn()
{
    comandoSimple(qComandoGPSOn_t);
}

void FalconBoard::qComandoGPSOff()
{
    comandoSimple(qComandoGPSOff_t);
}

void FalconBoard::qComandoServosInOn()
{
    comandoSimple(qComandoServosInOn_t);
}

void FalconBoard::qComandoServosInOff()
{
    comandoSimple(qComandoServosInOff_t);
}

void FalconBoard::qComandoFlyByWireOn()
{
    comandoSimple(qComandoFlyByWireOn_t);
}

void FalconBoard::qComandoFlyByWireOff()
{
    comandoSimple(qComandoFlyByWireOff_t);
}

void FalconBoard::qComandoFMSFlyPlanOn()
{
    comandoSimple(qComandoFMSFlyPlanOn_t);
}

void FalconBoard::qComandoFMSFlyPlanOff()
{
    comandoSimple(qComandoFMSFlyPlanOff_t);
}

void FalconBoard::qComandoFMSHILFlyPlanOn()
{
    comandoSimple(qComandoFMSHILFlyPlanOn_t);
}

void FalconBoard::qComandoFMSHILFlyPlanOff()
{
    comandoSimple(qComandoFMSHILFlyPlanOff_t);
}
//****************
void FalconBoard::qComandoAutopilotOn()
{
    comandoSimple(qComandoAutopilotOn_t);
}
void FalconBoard::qComandoAutopilotOff()
{
    comandoSimple(qComandoAutopilotOff_t);
}
void FalconBoard::qComandoAutoTrimOn()
{
    comandoSimple(qComandoAutoTrimOn_t);
}
void FalconBoard::qComandoAutoTrimOff()
{
    comandoSimple(qComandoAutoTrimOff_t);
}
void FalconBoard::qComandoFMSNextWaypoint()
{
    comandoSimple(qComandoFMSNextWaypoint_t);
}
void FalconBoard::qComandoFMSPrevWaypoint()
{
    comandoSimple(qComandoFMSPrevWaypoint_t);
}
void FalconBoard::qComandoHILFMSNextWaypoint()
{
    comandoSimple(qComandoHILFMSNextWaypoint_t);
}
void FalconBoard::qComandoHILFMSPrevWaypoint()
{
    comandoSimple(qComandoHILFMSPrevWaypoint_t);
}

void FalconBoard::qComandoSetParamTaskRate(unsigned int rate)
{
    comando1var(qComandoSetParamTaskRate_t, (int)rate);
}

void FalconBoard::qComandoSetFMSTaskRate(unsigned int rate)
{
    comando1var(qComandoSetFMSTaskRate_t, (int)rate);
}

void FalconBoard::qComandoSetServosTaskRate(unsigned int rate)
{
    comando1var(qComandoSetServosTaskRate_t, (int)rate);
}

void FalconBoard::qComandoExitQTMode()
{
    comandoSimple(qComandoExitQTMode_t);
}

void FalconBoard::qComandoHILLoadGando()
{
    comandoSimple(qComandoHILLoadGando_t);
}

void FalconBoard::qComandoHILLoadRutaIsla()
{
    comandoSimple(qComandoHILLoadRutaIsla_t);
}

void FalconBoard::qComandoHILLoadAlternativa()
{
    comandoSimple(qComandoHILLoadAlternativa_t);
}

void FalconBoard::qComandoHILLoadVuelo()
{
    comandoSimple(qComandoHILLoadVuelo_t);
}

void FalconBoard::qComandoControlModeJoysticRC(int mode)
{
    comando1var(qComandoControlModeJoysticRC_t, mode);
}

void FalconBoard::qComandoSetServosControlModeFBW()
{
    comandoSimple(qComandoSetServosControlModeFBW_t);
}

void FalconBoard::qComandoSetServosControlModeHIL()
{
    comandoSimple(qComandoSetServosControlModeHIL_t);
}

void FalconBoard::qComandoSetServosOutPosition(int servNum, float value)
{
    QByteArray datos;
    datos.resize(sizeof(qServosOut_t));
    qServosOut_t *servo = (qServosOut_t *)datos.data();
    servo->servoNum = servNum;
    servo->value = value;
    comandoNvar(qComandoSetServosOutPosition_t, datos);
}

void FalconBoard::qComandoLoadParametrosAutopilotFBW()
{
    comandoSimple(qComandoLoadParametrosAutopilotFBW_t);
}

void FalconBoard::qComandoSetAutopilotParam_k_elev(float value)
{
    comando1var(qComandoSetAutopilotParam_k_elev_t, value);
}

void FalconBoard::qComandoSetAutopilotParam_k_airln(float value)
{
    comando1var(qComandoSetAutopilotParam_k_airln_t, value);
}
void FalconBoard::qComandoSetAutopilotParam_k_rudder(float value)
{
    comando1var(qComandoSetAutopilotParam_k_rudder_t, value);
}
void FalconBoard::qComandoSetAutopilotParam_k_int_pitch(float value)
{
    comando1var(qComandoSetAutopilotParam_k_int_pitch_t, value);
}
void FalconBoard::qComandoSetAutopilotParam_k_div_P_init(float value)
{
    comando1var(qComandoSetAutopilotParam_k_div_P_init_t, value);
}
void FalconBoard::qComandoSetAutopilotParam_k_div_P_speed(float value)
{
    comando1var(qComandoSetAutopilotParam_k_div_P_speed_t, value);
}
void FalconBoard::qComandoSetAutopilotParam_k_div_Q_init(float value)
{
    comando1var(qComandoSetAutopilotParam_k_div_Q_init_t, value);
}
void FalconBoard::qComandoSetAutopilotParam_k_div_Q_speed(float value)
{
    comando1var(qComandoSetAutopilotParam_k_div_Q_speed_t, value);
}
void FalconBoard::qComandoSetAutopilotParam_k_div_R_init(float value)
{
    comando1var(qComandoSetAutopilotParam_k_div_R_init_t, value);
}
void FalconBoard::qComandoSetAutopilotParam_k_div_R_speed(float value)
{
    comando1var(qComandoSetAutopilotParam_k_div_R_speed_t, value);
}
void FalconBoard::qComandoSetAutopilotParam_k_div_velocidad(int value)
{
    comando1var(qComandoSetAutopilotParam_k_div_velocidad_t, value);
}
void FalconBoard::qComandoSetAutopilotParam_k_roll(float value)
{
    comando1var(qComandoSetAutopilotParam_k_roll_t, value);
}
void FalconBoard::qComandoSetAutopilotParam_k_heading(float value)
{
    comando1var(qComandoSetAutopilotParam_k_heading_t, value);
}
void FalconBoard::qComandoSetAutopilotParam_k_pitch(float value)
{
    comando1var(qComandoSetAutopilotParam_k_pitch_t, value);
}
void FalconBoard::qComandoSetAutopilotParam_k_VVI(float value)
{
    comando1var(qComandoSetAutopilotParam_k_VVI_t, value);
}
void FalconBoard::qComandoSetAutopilotParam_k_altura(float value)
{
    comando1var(qComandoSetAutopilotParam_k_altura_t, value);
}
void FalconBoard::qComandoSetAutopilotParam_k_int_altura(float value)
{
    comando1var(qComandoSetAutopilotParam_k_int_altura_t, value);
}

void FalconBoard::serialReadyRead(QByteArray tramaref)
{
    trama = tramaref;
    //this->start();
}
