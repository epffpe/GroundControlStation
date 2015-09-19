#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAbstractListModel>
#include <QStringListModel>
#include <QSerialPort>
#include "xplane.h"
#include <QStandardItemModel>
#include <QtGui>
#include <QtCore>
#include <QProgressBar>
#include <QLabel>
#include "speedcommunications.h"
#include "falconboard.h"
#include <QGraphicsScene>
#include "horizonte_artificial.h"
#include "magnetic_heading.h"
#include "airspeed.h"
#include "altimetro.h"
#include "vvi.h"
#include "velocimetro.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
signals:
    void udpctr(int);
    void rxserialctr(int);
    void rxserialthread(QByteArray);
    void txserialctr(int);
    void fallopaquete(int packet);

    void falconSend(QByteArray);
    void falconReceived(QByteArray);
    void xplaneSend(QByteArray);
    void xplanInfo2board(QByteArray);

    void joystickXPlane(int elev, int ailrn, int ruddr);
    void throttleXPlane(int throl);
    void joystickRC(int elev, int ailrn, int ruddr);
    void throttleRC(int throl);

    void statusAutopilotRCsend(int autopilotSatus, int autotrimStatus);
    void statusAutopilotHILsend(int autopilotSatus, int autotrimStatus);

    /* Conmutador para el control del XPlane */
    void joystickXPlaneManualControl(float alerones, float elevator, float rudder, float throttle );
    void RCManualControl(float alerones, float elevator, float rudder, float throttle );
    void XPlaneManualControl(float alerones, float elevator, float rudder, float throttle );
    void controlaXPlane(float alerones, float elevator, float rudder, float throttle );

private slots:
    void usoUDP(int);
    void usoSerialRX(int);
    void usoSerialTX(int);
    void serialLost(int);

    void serialSend(QByteArray);
    void udpSend(QByteArray);

    void joystickcontrol(int elev, int ailrn, int ruddr);
    void throttlecontrol(int throl);

    /* Datos que provienen de la placa */
    void ahrs(float yaw,float pitch, float roll);
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
    void estadoSerialDebug(QString);
    void HILflybywireUpdate(float alerones, float elevator, float rudder, float throttle );
    void ParamAutopilotFBWUpdate(QByteArray);

    /* Datos que provienen de la placa */
    void readyReadSlow();
    void readyReadGood();
    void readyReadThread();
    void processTheDatagram(QByteArray datagram);

    void error(QSerialPort::SerialPortError error);


    /* Conmutador para el control del XPlane */
    void on_Control_XPlane(float alerones, float elevator, float rudder, float throttle );
    void on_Switch_joy_RC(float alerones, float elevator, float rudder, float throttle );

    void on_pushButtonSerialOpen_clicked();

    void on_pushButtonSerialClose_clicked();

    void on_pushButtonSerialSend_clicked();

    void on_pushButtonXPlaneOpen_clicked();

    void on_pushButtonXPlaneClose_clicked();

    void on_actionAbout_triggered();

    void on_actionEmulaci_n_triggered();

    void on_pushButtonParamReadAll_clicked();

    void on_actionHILControlJoystick_triggered();

    void on_actionHILControlRC_triggered();

    void on_actionParamStart_triggered();

    void on_actionParamStop_triggered();

    void on_actionAutopilotReset_triggered();

    void on_actionAnalogOn_triggered();

    void on_actionAnalogOff_triggered();

    void on_actionInercialOn_triggered();

    void on_actionInercialOff_triggered();

    void on_actionAHRSOn_triggered();

    void on_actionAHRSOff_triggered();

    void on_actionSTATOn_triggered();

    void on_actionSTATOff_triggered();

    void on_actionGPSOn_triggered();

    void on_actionGPSOff_triggered();

    void on_actionServosOn_triggered();

    void on_actionServosOff_triggered();

    void on_actionFBWOn_triggered();

    void on_actionFBWOff_triggered();

    void on_actionHIL_Load_Gando_triggered();

    void on_actionHIL_Load_Ruta_Isla_triggered();

    void on_actionHIL_Load_Alternativa_triggered();

    void on_actionHIL_Load_Vuelo_triggered();

    void on_actionHIL_NEXT_WAYPOINT_triggered();

    void on_actionHIL_PREV_WAYPOINT_triggered();

    void on_actionFMSFlyPlanOn_triggered();

    void on_actionFMSFlyPlanOff_triggered();

    void on_actionFMSHILFlyPlanOn_triggered();

    void on_actionFMSHILFlyPlanOff_triggered();

    void on_actionAutopilot_On_triggered();

    void on_actionAutopilot_off_triggered();

    void on_actionAutotrim_On_triggered();

    void on_actionAutotrim_Off_triggered();

    void on_pushButtonFMSNext_clicked();

    void on_pushButtonFMSPrevious_clicked();

    void on_pushButtonHILFMSNext_clicked();

    void on_pushButtonHILFMSPrevious_clicked();



    void on_spinBoxRateParam_valueChanged(int arg1);

    void on_spinBoxRateFMS_valueChanged(int arg1);

    void on_spinBoxRateServos_valueChanged(int arg1);

    void on_actionPlane_Joystick_triggered();

    void on_actionPlane_RC_triggered();

    void on_actionTest_triggered();

    void on_actionServos_Control_Mode_FBW_triggered();

    void on_actionServos_Control_Mode_HIL_triggered();

    void on_ServosOut_1_valueChanged(int value);

    void on_ServosOut_2_valueChanged(int value);

    void on_ServosOut_3_valueChanged(int value);

    void on_ServosOut_4_valueChanged(int value);

    void on_ServosOut_5_valueChanged(int value);

    void on_ServosOut_6_valueChanged(int value);

    void on_ServosOut_7_valueChanged(int value);

    void on_ServosOut_8_valueChanged(int value);

    void on_ServosOut_9_valueChanged(int value);

    void on_ServosOut_10_valueChanged(int value);

    void on_ServosOut_11_valueChanged(int value);

    void on_ServosOut_12_valueChanged(int value);

    void on_ServosOut_13_valueChanged(int value);

    void on_ServosOut_14_valueChanged(int value);

    void on_ServosOut_15_valueChanged(int value);

    void on_ServosOut_16_valueChanged(int value);

    void on_ServosOut_17_valueChanged(int value);

    void on_ServosOut_18_valueChanged(int value);

    void on_ServosOut_19_valueChanged(int value);

    void on_ServosOut_20_valueChanged(int value);

    void on_pushButtonAutopilotParamLoad_clicked();

    void on_doubleSpinBox_k_int_pitch_valueChanged(double arg1);

    void on_doubleSpinBox_k_div_Q_speed_valueChanged(double arg1);

    void on_doubleSpinBox_k_elev_valueChanged(double arg1);

    void on_doubleSpinBox_k_div_Q_init_valueChanged(double arg1);

    void on_doubleSpinBox_k_pitch_valueChanged(double arg1);

    void on_doubleSpinBox_k_VVI_valueChanged(double arg1);

    void on_doubleSpinBox_k_altura_valueChanged(double arg1);

    void on_doubleSpinBox_k_int_altura_valueChanged(double arg1);

    void on_doubleSpinBox_k_airln_valueChanged(double arg1);

    void on_doubleSpinBox_k_div_P_init_valueChanged(double arg1);

    void on_doubleSpinBox_k_div_P_speed_valueChanged(double arg1);

    void on_doubleSpinBox_k_roll_valueChanged(double arg1);

    void on_doubleSpinBox_k_heading_valueChanged(double arg1);

    void on_doubleSpinBox_k_rudder_valueChanged(double arg1);

    void on_doubleSpinBox_k_div_R_init_valueChanged(double arg1);

    void on_doubleSpinBox_k_div_R_speed_valueChanged(double arg1);

    void on_spinBox_k_div_velocidad_valueChanged(int arg1);


    void on_pushButtonSerialUpdate_clicked();

private:
    Ui::MainWindow *ui;

    QStringListModel *modelserial;
    QStringListModel *modelbaud;
    QSerialPort *serial;
    QByteArray datosrecibidos;
    QByteArray paqueterecibido;

    QStandardItemModel *modelvar;
    XPlane *xplane;

    QLabel *Statlabel;
    QLabel *StatlabelLost;
    QLabel *StatlabelRX;
    QLabel *StatlabelTX;
    QLabel *StatlabelXPlane;
    QProgressBar *StatProgressRX;
    QProgressBar *StatProgressTX;
    QProgressBar *StatProgressXPlane;
    SpeedCommunications *estadisticas;
    FalconBoard *board;

    int ControlJoysticRCModefeedback;

    float extractvariable(const QByteArray &trama, int varnum);
    int extractdataref(const QByteArray &trama);

    void desactivaelementos();
    void activaelementos();
    void emulacionRecepcion();
    int ServoRange(float servo);

// Instrumentos de la placa
    Horizonte_Artificial *horizonteArtificial;
    Magnetic_Heading *magneticHeading;

    Horizonte_Artificial *standarHA;
    Magnetic_Heading *standardDG;

    AirSpeed *standardAirspeed;

    Altimetro *standardAltimetro;
    Altimetro *standardAltimetroGPS;
    VVI *standardVVI;
    Velocimetro *standardVel;

// Instrumentos del simulador
    Horizonte_Artificial *standardHILHA;
    Magnetic_Heading *standardHILDG;
    Velocimetro *standardHILAirspeed;
    Altimetro *standardHILAltimetro;
    Altimetro *standardHILAltimetroGPS;
    VVI *standardHILVVI;
};

#endif // MAINWINDOW_H
