#ifndef FALCONBOARD_H
#define FALCONBOARD_H

#include <QObject>
#include <QDebug>
#include "PaqueteType.h"
#include <QtCore>
#include <QSerialPort>

class FalconBoard : public QObject
{
    Q_OBJECT
public:
    explicit FalconBoard(QObject *parent = 0);

    void run();
    /* Funciones que recibo */
    void qParamHeartbeat(QByteArray);
    void qParamAHRS(QByteArray);
    void qParamSensoresInerciales(QByteArray);
    void qParamSensoresAnalogicos(QByteArray);
    void qServosServosIn(QByteArray);
    void qServosFlyByWire(QByteArray);
    void qFMSFlyPlan(QByteArray);
    void qFMSHILFlyPlan(QByteArray);
    void qFMSEstadisticas(QByteArray);
    void qFMSGPS(QByteArray);
    void qHILXPlane(QByteArray);
    void qLoadParamAutopilotFBW(QByteArray);


    /* Funciones que envio */
    QByteArray &comandoSimple(int tipo);
    QByteArray &comando1var(int tipo, int var);
    QByteArray &comando1var(int tipo, float var);
    QByteArray &comandoNvar(int tipo, QByteArray var);
    void qComandoStop();
    void qComandoStart();
    void qComandoReadAll();
    void qComandoReset();

    void qComandoAHRSOn();
    void qComandoAHRSOff();

    void qComandoSensoresInercialesOn();
    void qComandoSensoresInercialesOff();

    void qComandoSensoresAnalogicosOn();
    void qComandoSensoresAnalogicosOff();

    void qComandoEstadisticasOn();
    void qComandoEstadisticasOff();

    void qComandoGPSOn();
    void qComandoGPSOff();

    void qComandoServosInOn();
    void qComandoServosInOff();

    void qComandoFlyByWireOn();
    void qComandoFlyByWireOff();

    void qComandoFMSFlyPlanOn();
    void qComandoFMSFlyPlanOff();

    void qComandoFMSHILFlyPlanOn();
    void qComandoFMSHILFlyPlanOff();

    void qComandoAutopilotOn();
    void qComandoAutopilotOff();
    void qComandoAutoTrimOn();
    void qComandoAutoTrimOff();
    void qComandoFMSNextWaypoint();
    void qComandoFMSPrevWaypoint();
    void qComandoHILFMSNextWaypoint();
    void qComandoHILFMSPrevWaypoint();


    void qComandoSetParamTaskRate(unsigned int rate);
    void qComandoSetFMSTaskRate(unsigned int rate);
    void qComandoSetServosTaskRate(unsigned int rate);

    void qComandoExitQTMode();

    void qComandoHILLoadGando();
    void qComandoHILLoadRutaIsla();
    void qComandoHILLoadAlternativa();
    void qComandoHILLoadVuelo();

    void qComandoControlModeJoysticRC(int);

    void qComandoSetServosControlModeFBW();
    void qComandoSetServosControlModeHIL();
    void qComandoSetServosOutPosition(int servNum, float value);
    void qComandoLoadParametrosAutopilotFBW();

    void qComandoSetAutopilotParam_k_elev(float value);
    void qComandoSetAutopilotParam_k_airln(float value);
    void qComandoSetAutopilotParam_k_rudder(float value);
    void qComandoSetAutopilotParam_k_int_pitch(float value);
    void qComandoSetAutopilotParam_k_div_P_init(float value);
    void qComandoSetAutopilotParam_k_div_P_speed(float value);
    void qComandoSetAutopilotParam_k_div_Q_init(float value);
    void qComandoSetAutopilotParam_k_div_Q_speed(float value);
    void qComandoSetAutopilotParam_k_div_R_init(float value);
    void qComandoSetAutopilotParam_k_div_R_speed(float value);
    void qComandoSetAutopilotParam_k_div_velocidad(int value);
    void qComandoSetAutopilotParam_k_roll(float value);
    void qComandoSetAutopilotParam_k_heading(float value);
    void qComandoSetAutopilotParam_k_pitch(float value);
    void qComandoSetAutopilotParam_k_VVI(float value);
    void qComandoSetAutopilotParam_k_altura(float value);
    void qComandoSetAutopilotParam_k_int_altura(float value);


signals:
    void rxserialctr(int);

    void serialSend(QByteArray);
    void fallopaquete(int packet);
    void ahrs(float yaw,float pitch, float roll);
    /* Datos que provienen de los sensores Inerciales */
    void gyroUpdate(float gx,float gy, float gz);
    void accUpdate(float accx,float accy, float accz);
    void magUpdate(float magx,float magy, float magz);
    void adcUpdate(float temp, float Vbat);
    void baroUpdate(float baro, float altura, float VVI);
    void pitotUpdate(float pitot, float speed);
    void servosInUpdate(QByteArray);
    void flybywireUpdate(float servo1, float servo2, float servo3, float servo4 );
    void flypathUpdate(float brng,float altura,float velocidad,int distancia,int actualWaypoint);
    void HILflypathUpdate(float brng,float altura,float velocidad,int distancia,int actualWaypoint);
    void FSMEstadisticasUpdate(int SensorDSC, int ControlDSC);
    void GPSUpdate(QByteArray);
    void statusCodeUpdate(QByteArray);
    void estadoDebug(QString);
    void HILflybywireUpdate(float alerones, float elevator, float rudder, float throttle );
    void ParamAutopilotFBWUpdate(QByteArray);

public slots:
    void serialReadyRead(QByteArray);
    void decode(QByteArray);
    void on_xplanInfo2board(QByteArray);
private:
    int header;
    int extraedatos(QByteArray &paquete, int *datos, int datalen);
    int checksum(QByteArray &paquete);

    static void (*qcomandos2[])(QByteArray);

    QByteArray datosrecibidos;
    QByteArray paqueterecibido;
    QByteArray trama;
};


#endif // FALCONBOARD_H
