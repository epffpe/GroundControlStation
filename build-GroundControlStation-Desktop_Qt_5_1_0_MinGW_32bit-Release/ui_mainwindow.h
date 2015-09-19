/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAutopilot_On;
    QAction *actionAutopilot_off;
    QAction *actionAutotrim_On;
    QAction *actionAutotrim_Off;
    QAction *actionAbout;
    QAction *actionGoogleReset;
    QAction *actionAnalogOn;
    QAction *actionAnalogOff;
    QAction *actionInercialOn;
    QAction *actionInercialOff;
    QAction *actionAHRSOn;
    QAction *actionAHRSOff;
    QAction *actionSTATOn;
    QAction *actionSTATOff;
    QAction *actionGPSOn;
    QAction *actionGPSOff;
    QAction *actionServosOn;
    QAction *actionServosOff;
    QAction *actionParamStop;
    QAction *actionHILControlJoystick;
    QAction *actionHILControlRC;
    QAction *actionVelocidad;
    QAction *actionSelectorSpeedGPS;
    QAction *actionSelectorSpeedTubo_Pitot;
    QAction *actionParamStart;
    QAction *actionAutopilotReset;
    QAction *actionSelectorAlturaGPS;
    QAction *actionSelectorAlturaBaro;
    QAction *actionEmulaci_n;
    QAction *actionFBWOn;
    QAction *actionFBWOff;
    QAction *actionHIL_Load_Gando;
    QAction *actionHIL_Load_Ruta_Isla;
    QAction *actionHIL_Load_Alternativa;
    QAction *actionHIL_Load_Vuelo;
    QAction *actionHIL_NEXT_WAYPOINT;
    QAction *actionHIL_PREV_WAYPOINT;
    QAction *actionFMSFlyPlanOn;
    QAction *actionFMSFlyPlanOff;
    QAction *actionFMSHILFlyPlanOn;
    QAction *actionFMSHILFlyPlanOff;
    QAction *actionPlane_Joystick;
    QAction *actionPlane_RC;
    QAction *actionTest;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_flightdata;
    QGroupBox *groupBox_14;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLCDNumber *lcdRumbo_2;
    QLCDNumber *lcdPitch_2;
    QLCDNumber *lcdRoll_2;
    QGroupBox *groupBox_15;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkBoxStatusAnalog;
    QCheckBox *checkBoxStatusInerciales;
    QCheckBox *checkBoxStatusAHRS;
    QCheckBox *checkBoxStatusStat;
    QCheckBox *checkBoxStatusGPS;
    QCheckBox *checkBoxStatusServos;
    QCheckBox *checkBoxStatusAutotrim;
    QCheckBox *checkBoxStatusAutopilot;
    QPushButton *pushButtonParamReadAll;
    QGroupBox *groupBox_16;
    QLCDNumber *lcdGyroX;
    QLCDNumber *lcdGyroY;
    QLCDNumber *lcdGyroZ;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QGroupBox *groupBox_17;
    QLCDNumber *lcdAccX;
    QLCDNumber *lcdAccY;
    QLCDNumber *lcdAccZ;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_37;
    QLabel *label_38;
    QLabel *label_39;
    QGroupBox *groupBox_18;
    QLCDNumber *lcdMagX;
    QLCDNumber *lcdMagY;
    QLCDNumber *lcdMagZ;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_40;
    QLabel *label_41;
    QLabel *label_42;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QLCDNumber *lcdFMSRumbo;
    QLabel *label_51;
    QLabel *label_52;
    QLabel *label_53;
    QLabel *label_54;
    QLabel *label_55;
    QLCDNumber *lcdFMSAltura;
    QLCDNumber *lcdFMSSpeed;
    QLCDNumber *lcdFMSDistancia;
    QLCDNumber *lcdFMSWaypoint;
    QPushButton *pushButtonFMSPrevious;
    QPushButton *pushButtonFMSNext;
    QWidget *layoutWidget_9;
    QVBoxLayout *verticalLayout_16;
    QRadioButton *radioButtonAutopilotRCOn;
    QRadioButton *radioButtonAutopilotRCOff;
    QWidget *layoutWidget_10;
    QVBoxLayout *verticalLayout_17;
    QRadioButton *radioButtonAutotrimRCOn;
    QRadioButton *radioButtonAutotrimRCOff;
    QWidget *tab_6;
    QLCDNumber *lcdGPSRumbo;
    QLabel *label_136;
    QLCDNumber *lcdGPSSpeed;
    QLabel *label_137;
    QLCDNumber *lcdGPSLongitud;
    QLCDNumber *lcdGPSAltura;
    QLCDNumber *lcdGPSLatitud;
    QLabel *label_138;
    QLabel *label_139;
    QLabel *label_140;
    QCheckBox *checkBoxGPSPositionFix;
    QLCDNumber *lcdGPSSatelitesUsed;
    QLabel *label_141;
    QWidget *tab_2;
    QWidget *layoutWidget_19;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_110;
    QLabel *label_111;
    QLabel *label_112;
    QLabel *label_113;
    QLabel *label_114;
    QLabel *label_115;
    QLabel *label_116;
    QLabel *label_117;
    QLabel *label_118;
    QLabel *label_119;
    QLabel *label_120;
    QLabel *label_121;
    QWidget *layoutWidget_20;
    QHBoxLayout *horizontalLayout_14;
    QScrollBar *ServosIn_1;
    QScrollBar *ServosIn_2;
    QScrollBar *ServosIn_3;
    QScrollBar *ServosIn_4;
    QScrollBar *ServosIn_5;
    QScrollBar *ServosIn_6;
    QScrollBar *ServosIn_7;
    QScrollBar *ServosIn_8;
    QScrollBar *ServosIn_9;
    QScrollBar *ServosIn_10;
    QScrollBar *ServosIn_11;
    QScrollBar *ServosIn_12;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_78;
    QLabel *label_79;
    QLabel *label_80;
    QWidget *tab_3;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_6;
    QScrollBar *ServosOut_1;
    QScrollBar *ServosOut_2;
    QScrollBar *ServosOut_3;
    QScrollBar *ServosOut_4;
    QScrollBar *ServosOut_5;
    QScrollBar *ServosOut_6;
    QScrollBar *ServosOut_7;
    QScrollBar *ServosOut_8;
    QScrollBar *ServosOut_9;
    QScrollBar *ServosOut_10;
    QScrollBar *ServosOut_11;
    QScrollBar *ServosOut_12;
    QScrollBar *ServosOut_13;
    QScrollBar *ServosOut_14;
    QScrollBar *ServosOut_15;
    QScrollBar *ServosOut_16;
    QScrollBar *ServosOut_17;
    QScrollBar *ServosOut_18;
    QScrollBar *ServosOut_19;
    QScrollBar *ServosOut_20;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_43;
    QLabel *label_44;
    QLabel *label_45;
    QLabel *label_46;
    QLabel *label_48;
    QLabel *label_50;
    QLabel *label_49;
    QLabel *label_47;
    QLabel *label_98;
    QLabel *label_102;
    QLabel *label_99;
    QLabel *label_104;
    QLabel *label_100;
    QLabel *label_105;
    QLabel *label_107;
    QLabel *label_106;
    QLabel *label_103;
    QLabel *label_101;
    QLabel *label_109;
    QLabel *label_108;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_83;
    QLabel *label_82;
    QLabel *label_81;
    QWidget *tab_10;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_7;
    QSlider *joystickFBWGases;
    QVBoxLayout *verticalLayout_15;
    QSlider *joystickFBWAleron;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_5;
    QSlider *joystickFBWProfundidad;
    QSpacerItem *horizontalSpacer_6;
    QSlider *joystickFBWRudder;
    QWidget *tab_5;
    QSpinBox *spinBoxRateParam;
    QLabel *label_56;
    QLabel *label_57;
    QSpinBox *spinBoxRateFMS;
    QSpinBox *spinBoxRateServos;
    QLabel *label_58;
    QLabel *label_59;
    QLabel *label_60;
    QLabel *label_61;
    QGroupBox *groupBox_34;
    QLCDNumber *lcdAnalogTemp;
    QLabel *label_122;
    QLCDNumber *lcdAnalogVbatt;
    QLabel *label_123;
    QLCDNumber *lcdAnalogBaro;
    QLabel *label_124;
    QLCDNumber *lcdAnalogAltura;
    QLabel *label_125;
    QLCDNumber *lcdAnalogPitot;
    QLabel *label_126;
    QLCDNumber *lcdAnalogSpeed;
    QLabel *label_127;
    QTabWidget *tabWidget_3;
    QWidget *tab_7;
    QLCDNumber *lcdGPSFastRumbo;
    QLCDNumber *lcdGPSFastLongitud;
    QLabel *label_129;
    QLabel *label_131;
    QLCDNumber *lcdGPSFastAltura;
    QLabel *label_130;
    QLabel *label_128;
    QLCDNumber *lcdGPSFastLatitud;
    QLabel *label_132;
    QLCDNumber *lcdGPSFastSpeed;
    QWidget *tab_8;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_15;
    QCheckBox *checkBoxFastPositionFix;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_133;
    QLCDNumber *lcdGPSFastSatelitesUsed;
    QWidget *tab_9;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_134;
    QLCDNumber *lcdStatSensorDSC;
    QLabel *label_142;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_135;
    QLCDNumber *lcdStatControlDSC;
    QLabel *label_143;
    QWidget *tab;
    QGroupBox *groupBox_19;
    QDoubleSpinBox *doubleSpinBox_k_elev;
    QLabel *label_62;
    QLabel *label_63;
    QDoubleSpinBox *doubleSpinBox_k_div_Q_init;
    QLabel *label_64;
    QLabel *label_65;
    QDoubleSpinBox *doubleSpinBox_k_div_Q_speed;
    QDoubleSpinBox *doubleSpinBox_k_int_pitch;
    QLabel *label_66;
    QDoubleSpinBox *doubleSpinBox_k_pitch;
    QLabel *label_67;
    QDoubleSpinBox *doubleSpinBox_k_altura;
    QLabel *label_68;
    QDoubleSpinBox *doubleSpinBox_k_int_altura;
    QDoubleSpinBox *doubleSpinBox_k_VVI;
    QLabel *label_69;
    QPushButton *pushButtonAutopilotParamLoad;
    QPushButton *pushButtonAutopilotParamStore;
    QGroupBox *groupBox_20;
    QDoubleSpinBox *doubleSpinBox_k_airln;
    QLabel *label_70;
    QDoubleSpinBox *doubleSpinBox_k_div_P_init;
    QLabel *label_72;
    QLabel *label_73;
    QDoubleSpinBox *doubleSpinBox_k_div_P_speed;
    QLabel *label_74;
    QDoubleSpinBox *doubleSpinBox_k_roll;
    QLabel *label_75;
    QDoubleSpinBox *doubleSpinBox_k_heading;
    QGroupBox *groupBox_21;
    QDoubleSpinBox *doubleSpinBox_k_rudder;
    QLabel *label_71;
    QDoubleSpinBox *doubleSpinBox_k_div_R_init;
    QLabel *label_76;
    QLabel *label_77;
    QDoubleSpinBox *doubleSpinBox_k_div_R_speed;
    QGroupBox *groupBox_22;
    QLabel *label_87;
    QSpinBox *spinBox_k_div_velocidad;
    QSlider *horizontalSlider_k_div_velocidad;
    QWidget *tab_HIL;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_6;
    QLCDNumber *lcdHILRumbo;
    QLCDNumber *lcdHILPitch;
    QLCDNumber *lcdHILRoll;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget8;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *layoutWidget9;
    QVBoxLayout *verticalLayout_9;
    QLCDNumber *lcdHILVind;
    QLCDNumber *lcdHILAltitude;
    QGroupBox *groupBox_5;
    QLCDNumber *lcdHILLatitud;
    QLCDNumber *lcdHILLongitud;
    QLCDNumber *lcdHILAltura;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QGroupBox *groupBox_6;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_3;
    QSlider *joystickHILFBWGases;
    QVBoxLayout *verticalLayout_10;
    QSlider *joystickHILFBWAleron;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QSlider *joystickHILFBWProfundidad;
    QSpacerItem *horizontalSpacer_4;
    QSlider *joystickHILFBWRudder;
    QGroupBox *groupBox_10;
    QLCDNumber *lcdHILAoA;
    QLCDNumber *lcdHILbeta;
    QLCDNumber *lcdHILhding;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLCDNumber *lcdHILvpath;
    QLabel *label_17;
    QGroupBox *groupBox_11;
    QLCDNumber *lcdHILQ;
    QLCDNumber *lcdHILP;
    QLCDNumber *lcdHILR;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QGroupBox *groupBox_12;
    QLCDNumber *lcdHILMach;
    QLCDNumber *lcdHILGnorml;
    QLCDNumber *lcdHILVVI;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLCDNumber *lcdHILGaxial;
    QLCDNumber *lcdHILGside;
    QLabel *label_25;
    QGroupBox *groupBox_13;
    QLCDNumber *lcdHILFMSRumbo;
    QLabel *label_26;
    QLCDNumber *lcdHILFMSAltura;
    QLabel *label_27;
    QLCDNumber *lcdHILFMSSpeed;
    QLabel *label_28;
    QPushButton *pushButtonHILFMSPrevious;
    QPushButton *pushButtonHILFMSNext;
    QLabel *label_29;
    QLCDNumber *lcdHILFMSWaypoint;
    QLCDNumber *lcdHILFMSDistancia;
    QLabel *label_30;
    QWidget *tab_setup;
    QGroupBox *autopilotCommunication;
    QComboBox *comboBoxBaudSerie;
    QComboBox *comboBoxPuertoSerie;
    QPushButton *pushButtonSerialOpen;
    QPushButton *pushButtonSerialClose;
    QGroupBox *groupBox;
    QLineEdit *lineEditSerialCommand;
    QLineEdit *lineEditSerialReceived;
    QPushButton *pushButtonSerialSend;
    QGroupBox *groupBox_2;
    QLineEdit *lineEditXPlaneNumTramas;
    QLabel *label_5;
    QLineEdit *lineEditXPlaneIPTx;
    QSpinBox *spinBoxXPlaneUDPTxPort;
    QLabel *label_84;
    QLabel *label_85;
    QPushButton *pushButtonXPlaneClose;
    QSpinBox *spinBoxXPlaneUDPPort;
    QPushButton *pushButtonXPlaneOpen;
    QLabel *label_4;
    QTableView *tableViewXPlaneReceived;
    QGroupBox *groupBox_7;
    QWidget *layoutWidget10;
    QHBoxLayout *horizontalLayout_2;
    QSlider *joystickGases;
    QVBoxLayout *verticalLayout;
    QSlider *joystickAleron;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QSlider *joystickProfundidad;
    QSpacerItem *horizontalSpacer_2;
    QSlider *joystickRudder;
    QGroupBox *groupBox_8;
    QWidget *layoutWidget11;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *radioButtonAutopilotOn;
    QRadioButton *radioButtonAutopilotOff;
    QWidget *layoutWidget12;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *radioButtonAutotrimOn;
    QRadioButton *radioButtonAutotrimOff;
    QGroupBox *groupBox_9;
    QWidget *layoutWidget13;
    QVBoxLayout *verticalLayout_2;
    QLCDNumber *lcdRumbo;
    QLCDNumber *lcdPitch;
    QLCDNumber *lcdRoll;
    QWidget *layoutWidget14;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QMenu *menuEPF;
    QMenu *menuSelector_de_velocidad;
    QMenu *menuSelector_de_altura;
    QMenu *menuAyuda;
    QMenu *menuGoogle_Earth;
    QMenu *menuPar_metros;
    QMenu *menuSensores_Anal_gicos;
    QMenu *menuSensores_Inerciales;
    QMenu *menuAHRS;
    QMenu *menuADS;
    QMenu *menuGPS;
    QMenu *menuServosIn;
    QMenu *menuFly_By_Wire;
    QMenu *menuFMS_Fly_Plan;
    QMenu *menuFMS_HIL_Fly_Plan;
    QMenu *menuControl;
    QMenu *menuXPlane;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *Control_toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(840, 618);
        actionAutopilot_On = new QAction(MainWindow);
        actionAutopilot_On->setObjectName(QStringLiteral("actionAutopilot_On"));
        actionAutopilot_On->setEnabled(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/Iconos/8.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAutopilot_On->setIcon(icon);
        actionAutopilot_off = new QAction(MainWindow);
        actionAutopilot_off->setObjectName(QStringLiteral("actionAutopilot_off"));
        actionAutopilot_off->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/Iconos/7.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAutopilot_off->setIcon(icon1);
        actionAutotrim_On = new QAction(MainWindow);
        actionAutotrim_On->setObjectName(QStringLiteral("actionAutotrim_On"));
        actionAutotrim_On->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Images/Iconos/6.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAutotrim_On->setIcon(icon2);
        actionAutotrim_Off = new QAction(MainWindow);
        actionAutotrim_Off->setObjectName(QStringLiteral("actionAutotrim_Off"));
        actionAutotrim_Off->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Images/Iconos/2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAutotrim_Off->setIcon(icon3);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionGoogleReset = new QAction(MainWindow);
        actionGoogleReset->setObjectName(QStringLiteral("actionGoogleReset"));
        actionAnalogOn = new QAction(MainWindow);
        actionAnalogOn->setObjectName(QStringLiteral("actionAnalogOn"));
        actionAnalogOn->setEnabled(false);
        actionAnalogOff = new QAction(MainWindow);
        actionAnalogOff->setObjectName(QStringLiteral("actionAnalogOff"));
        actionAnalogOff->setEnabled(false);
        actionInercialOn = new QAction(MainWindow);
        actionInercialOn->setObjectName(QStringLiteral("actionInercialOn"));
        actionInercialOn->setEnabled(false);
        actionInercialOff = new QAction(MainWindow);
        actionInercialOff->setObjectName(QStringLiteral("actionInercialOff"));
        actionInercialOff->setEnabled(false);
        actionAHRSOn = new QAction(MainWindow);
        actionAHRSOn->setObjectName(QStringLiteral("actionAHRSOn"));
        actionAHRSOn->setEnabled(false);
        actionAHRSOff = new QAction(MainWindow);
        actionAHRSOff->setObjectName(QStringLiteral("actionAHRSOff"));
        actionAHRSOff->setEnabled(false);
        actionSTATOn = new QAction(MainWindow);
        actionSTATOn->setObjectName(QStringLiteral("actionSTATOn"));
        actionSTATOn->setEnabled(false);
        actionSTATOff = new QAction(MainWindow);
        actionSTATOff->setObjectName(QStringLiteral("actionSTATOff"));
        actionSTATOff->setEnabled(false);
        actionGPSOn = new QAction(MainWindow);
        actionGPSOn->setObjectName(QStringLiteral("actionGPSOn"));
        actionGPSOn->setEnabled(false);
        actionGPSOff = new QAction(MainWindow);
        actionGPSOff->setObjectName(QStringLiteral("actionGPSOff"));
        actionGPSOff->setEnabled(false);
        actionServosOn = new QAction(MainWindow);
        actionServosOn->setObjectName(QStringLiteral("actionServosOn"));
        actionServosOn->setEnabled(false);
        actionServosOff = new QAction(MainWindow);
        actionServosOff->setObjectName(QStringLiteral("actionServosOff"));
        actionServosOff->setEnabled(false);
        actionParamStop = new QAction(MainWindow);
        actionParamStop->setObjectName(QStringLiteral("actionParamStop"));
        actionHILControlJoystick = new QAction(MainWindow);
        actionHILControlJoystick->setObjectName(QStringLiteral("actionHILControlJoystick"));
        actionHILControlJoystick->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Images/Iconos/10.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHILControlJoystick->setIcon(icon4);
        actionHILControlRC = new QAction(MainWindow);
        actionHILControlRC->setObjectName(QStringLiteral("actionHILControlRC"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Images/Iconos/PCBTOP2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHILControlRC->setIcon(icon5);
        actionVelocidad = new QAction(MainWindow);
        actionVelocidad->setObjectName(QStringLiteral("actionVelocidad"));
        actionSelectorSpeedGPS = new QAction(MainWindow);
        actionSelectorSpeedGPS->setObjectName(QStringLiteral("actionSelectorSpeedGPS"));
        actionSelectorSpeedGPS->setEnabled(false);
        actionSelectorSpeedTubo_Pitot = new QAction(MainWindow);
        actionSelectorSpeedTubo_Pitot->setObjectName(QStringLiteral("actionSelectorSpeedTubo_Pitot"));
        actionSelectorSpeedTubo_Pitot->setEnabled(false);
        actionParamStart = new QAction(MainWindow);
        actionParamStart->setObjectName(QStringLiteral("actionParamStart"));
        actionAutopilotReset = new QAction(MainWindow);
        actionAutopilotReset->setObjectName(QStringLiteral("actionAutopilotReset"));
        actionSelectorAlturaGPS = new QAction(MainWindow);
        actionSelectorAlturaGPS->setObjectName(QStringLiteral("actionSelectorAlturaGPS"));
        actionSelectorAlturaBaro = new QAction(MainWindow);
        actionSelectorAlturaBaro->setObjectName(QStringLiteral("actionSelectorAlturaBaro"));
        actionEmulaci_n = new QAction(MainWindow);
        actionEmulaci_n->setObjectName(QStringLiteral("actionEmulaci_n"));
        actionFBWOn = new QAction(MainWindow);
        actionFBWOn->setObjectName(QStringLiteral("actionFBWOn"));
        actionFBWOff = new QAction(MainWindow);
        actionFBWOff->setObjectName(QStringLiteral("actionFBWOff"));
        actionHIL_Load_Gando = new QAction(MainWindow);
        actionHIL_Load_Gando->setObjectName(QStringLiteral("actionHIL_Load_Gando"));
        actionHIL_Load_Ruta_Isla = new QAction(MainWindow);
        actionHIL_Load_Ruta_Isla->setObjectName(QStringLiteral("actionHIL_Load_Ruta_Isla"));
        actionHIL_Load_Alternativa = new QAction(MainWindow);
        actionHIL_Load_Alternativa->setObjectName(QStringLiteral("actionHIL_Load_Alternativa"));
        actionHIL_Load_Vuelo = new QAction(MainWindow);
        actionHIL_Load_Vuelo->setObjectName(QStringLiteral("actionHIL_Load_Vuelo"));
        actionHIL_NEXT_WAYPOINT = new QAction(MainWindow);
        actionHIL_NEXT_WAYPOINT->setObjectName(QStringLiteral("actionHIL_NEXT_WAYPOINT"));
        actionHIL_PREV_WAYPOINT = new QAction(MainWindow);
        actionHIL_PREV_WAYPOINT->setObjectName(QStringLiteral("actionHIL_PREV_WAYPOINT"));
        actionFMSFlyPlanOn = new QAction(MainWindow);
        actionFMSFlyPlanOn->setObjectName(QStringLiteral("actionFMSFlyPlanOn"));
        actionFMSFlyPlanOff = new QAction(MainWindow);
        actionFMSFlyPlanOff->setObjectName(QStringLiteral("actionFMSFlyPlanOff"));
        actionFMSHILFlyPlanOn = new QAction(MainWindow);
        actionFMSHILFlyPlanOn->setObjectName(QStringLiteral("actionFMSHILFlyPlanOn"));
        actionFMSHILFlyPlanOff = new QAction(MainWindow);
        actionFMSHILFlyPlanOff->setObjectName(QStringLiteral("actionFMSHILFlyPlanOff"));
        actionPlane_Joystick = new QAction(MainWindow);
        actionPlane_Joystick->setObjectName(QStringLiteral("actionPlane_Joystick"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Images/Iconos/11.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlane_Joystick->setIcon(icon6);
        actionPlane_RC = new QAction(MainWindow);
        actionPlane_RC->setObjectName(QStringLiteral("actionPlane_RC"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Images/Iconos/4.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlane_RC->setIcon(icon7);
        actionTest = new QAction(MainWindow);
        actionTest->setObjectName(QStringLiteral("actionTest"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(220, 10, 611, 521));
        tab_flightdata = new QWidget();
        tab_flightdata->setObjectName(QStringLiteral("tab_flightdata"));
        groupBox_14 = new QGroupBox(tab_flightdata);
        groupBox_14->setObjectName(QStringLiteral("groupBox_14"));
        groupBox_14->setGeometry(QRect(10, 50, 241, 181));
        layoutWidget_6 = new QWidget(groupBox_14);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(10, 20, 68, 151));
        verticalLayout_12 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_31 = new QLabel(layoutWidget_6);
        label_31->setObjectName(QStringLiteral("label_31"));
        QFont font;
        font.setPointSize(13);
        label_31->setFont(font);

        verticalLayout_12->addWidget(label_31);

        label_32 = new QLabel(layoutWidget_6);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setFont(font);

        verticalLayout_12->addWidget(label_32);

        label_33 = new QLabel(layoutWidget_6);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setFont(font);

        verticalLayout_12->addWidget(label_33);

        lcdRumbo_2 = new QLCDNumber(groupBox_14);
        lcdRumbo_2->setObjectName(QStringLiteral("lcdRumbo_2"));
        lcdRumbo_2->setGeometry(QRect(80, 20, 149, 51));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        lcdRumbo_2->setFont(font1);
        lcdRumbo_2->setDigitCount(7);
        lcdRumbo_2->setProperty("value", QVariant(0));
        lcdRumbo_2->setProperty("intValue", QVariant(0));
        lcdPitch_2 = new QLCDNumber(groupBox_14);
        lcdPitch_2->setObjectName(QStringLiteral("lcdPitch_2"));
        lcdPitch_2->setGeometry(QRect(80, 70, 149, 51));
        lcdPitch_2->setDigitCount(7);
        lcdPitch_2->setProperty("value", QVariant(0));
        lcdPitch_2->setProperty("intValue", QVariant(0));
        lcdRoll_2 = new QLCDNumber(groupBox_14);
        lcdRoll_2->setObjectName(QStringLiteral("lcdRoll_2"));
        lcdRoll_2->setGeometry(QRect(80, 120, 149, 51));
        lcdRoll_2->setDigitCount(7);
        lcdRoll_2->setProperty("value", QVariant(0));
        lcdRoll_2->setProperty("intValue", QVariant(0));
        groupBox_15 = new QGroupBox(tab_flightdata);
        groupBox_15->setObjectName(QStringLiteral("groupBox_15"));
        groupBox_15->setGeometry(QRect(10, 0, 581, 51));
        layoutWidget = new QWidget(groupBox_15);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 571, 25));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        checkBoxStatusAnalog = new QCheckBox(layoutWidget);
        checkBoxStatusAnalog->setObjectName(QStringLiteral("checkBoxStatusAnalog"));
        checkBoxStatusAnalog->setCheckable(true);
        checkBoxStatusAnalog->setChecked(false);

        horizontalLayout_5->addWidget(checkBoxStatusAnalog);

        checkBoxStatusInerciales = new QCheckBox(layoutWidget);
        checkBoxStatusInerciales->setObjectName(QStringLiteral("checkBoxStatusInerciales"));
        checkBoxStatusInerciales->setCheckable(true);

        horizontalLayout_5->addWidget(checkBoxStatusInerciales);

        checkBoxStatusAHRS = new QCheckBox(layoutWidget);
        checkBoxStatusAHRS->setObjectName(QStringLiteral("checkBoxStatusAHRS"));
        checkBoxStatusAHRS->setCheckable(true);

        horizontalLayout_5->addWidget(checkBoxStatusAHRS);

        checkBoxStatusStat = new QCheckBox(layoutWidget);
        checkBoxStatusStat->setObjectName(QStringLiteral("checkBoxStatusStat"));
        checkBoxStatusStat->setCheckable(true);

        horizontalLayout_5->addWidget(checkBoxStatusStat);

        checkBoxStatusGPS = new QCheckBox(layoutWidget);
        checkBoxStatusGPS->setObjectName(QStringLiteral("checkBoxStatusGPS"));
        checkBoxStatusGPS->setCheckable(true);

        horizontalLayout_5->addWidget(checkBoxStatusGPS);

        checkBoxStatusServos = new QCheckBox(layoutWidget);
        checkBoxStatusServos->setObjectName(QStringLiteral("checkBoxStatusServos"));
        checkBoxStatusServos->setCheckable(true);

        horizontalLayout_5->addWidget(checkBoxStatusServos);

        checkBoxStatusAutotrim = new QCheckBox(layoutWidget);
        checkBoxStatusAutotrim->setObjectName(QStringLiteral("checkBoxStatusAutotrim"));
        checkBoxStatusAutotrim->setCheckable(true);

        horizontalLayout_5->addWidget(checkBoxStatusAutotrim);

        checkBoxStatusAutopilot = new QCheckBox(layoutWidget);
        checkBoxStatusAutopilot->setObjectName(QStringLiteral("checkBoxStatusAutopilot"));
        checkBoxStatusAutopilot->setCheckable(true);

        horizontalLayout_5->addWidget(checkBoxStatusAutopilot);

        pushButtonParamReadAll = new QPushButton(layoutWidget);
        pushButtonParamReadAll->setObjectName(QStringLiteral("pushButtonParamReadAll"));
        pushButtonParamReadAll->setEnabled(false);

        horizontalLayout_5->addWidget(pushButtonParamReadAll);

        groupBox_16 = new QGroupBox(tab_flightdata);
        groupBox_16->setObjectName(QStringLiteral("groupBox_16"));
        groupBox_16->setGeometry(QRect(260, 50, 101, 111));
        lcdGyroX = new QLCDNumber(groupBox_16);
        lcdGyroX->setObjectName(QStringLiteral("lcdGyroX"));
        lcdGyroX->setGeometry(QRect(30, 20, 64, 23));
        lcdGyroX->setProperty("value", QVariant(0));
        lcdGyroY = new QLCDNumber(groupBox_16);
        lcdGyroY->setObjectName(QStringLiteral("lcdGyroY"));
        lcdGyroY->setGeometry(QRect(30, 50, 64, 23));
        lcdGyroY->setProperty("value", QVariant(0));
        lcdGyroZ = new QLCDNumber(groupBox_16);
        lcdGyroZ->setObjectName(QStringLiteral("lcdGyroZ"));
        lcdGyroZ->setGeometry(QRect(30, 80, 64, 23));
        lcdGyroZ->setProperty("value", QVariant(0));
        layoutWidget1 = new QWidget(groupBox_16);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 20, 81));
        verticalLayout_11 = new QVBoxLayout(layoutWidget1);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_34 = new QLabel(layoutWidget1);
        label_34->setObjectName(QStringLiteral("label_34"));

        verticalLayout_11->addWidget(label_34);

        label_35 = new QLabel(layoutWidget1);
        label_35->setObjectName(QStringLiteral("label_35"));

        verticalLayout_11->addWidget(label_35);

        label_36 = new QLabel(layoutWidget1);
        label_36->setObjectName(QStringLiteral("label_36"));

        verticalLayout_11->addWidget(label_36);

        groupBox_17 = new QGroupBox(tab_flightdata);
        groupBox_17->setObjectName(QStringLiteral("groupBox_17"));
        groupBox_17->setGeometry(QRect(370, 50, 101, 111));
        lcdAccX = new QLCDNumber(groupBox_17);
        lcdAccX->setObjectName(QStringLiteral("lcdAccX"));
        lcdAccX->setGeometry(QRect(30, 20, 64, 23));
        lcdAccX->setProperty("value", QVariant(0));
        lcdAccY = new QLCDNumber(groupBox_17);
        lcdAccY->setObjectName(QStringLiteral("lcdAccY"));
        lcdAccY->setGeometry(QRect(30, 50, 64, 23));
        lcdAccY->setProperty("value", QVariant(0));
        lcdAccZ = new QLCDNumber(groupBox_17);
        lcdAccZ->setObjectName(QStringLiteral("lcdAccZ"));
        lcdAccZ->setGeometry(QRect(30, 80, 64, 23));
        lcdAccZ->setProperty("value", QVariant(0));
        layoutWidget_5 = new QWidget(groupBox_17);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 20, 20, 81));
        verticalLayout_13 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_37 = new QLabel(layoutWidget_5);
        label_37->setObjectName(QStringLiteral("label_37"));

        verticalLayout_13->addWidget(label_37);

        label_38 = new QLabel(layoutWidget_5);
        label_38->setObjectName(QStringLiteral("label_38"));

        verticalLayout_13->addWidget(label_38);

        label_39 = new QLabel(layoutWidget_5);
        label_39->setObjectName(QStringLiteral("label_39"));

        verticalLayout_13->addWidget(label_39);

        groupBox_18 = new QGroupBox(tab_flightdata);
        groupBox_18->setObjectName(QStringLiteral("groupBox_18"));
        groupBox_18->setGeometry(QRect(480, 50, 101, 111));
        lcdMagX = new QLCDNumber(groupBox_18);
        lcdMagX->setObjectName(QStringLiteral("lcdMagX"));
        lcdMagX->setGeometry(QRect(30, 20, 64, 23));
        lcdMagX->setProperty("value", QVariant(0));
        lcdMagY = new QLCDNumber(groupBox_18);
        lcdMagY->setObjectName(QStringLiteral("lcdMagY"));
        lcdMagY->setGeometry(QRect(30, 50, 64, 23));
        lcdMagY->setProperty("value", QVariant(0));
        lcdMagZ = new QLCDNumber(groupBox_18);
        lcdMagZ->setObjectName(QStringLiteral("lcdMagZ"));
        lcdMagZ->setGeometry(QRect(30, 80, 64, 23));
        lcdMagZ->setProperty("value", QVariant(0));
        layoutWidget_7 = new QWidget(groupBox_18);
        layoutWidget_7->setObjectName(QStringLiteral("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(10, 20, 20, 81));
        verticalLayout_14 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_40 = new QLabel(layoutWidget_7);
        label_40->setObjectName(QStringLiteral("label_40"));

        verticalLayout_14->addWidget(label_40);

        label_41 = new QLabel(layoutWidget_7);
        label_41->setObjectName(QStringLiteral("label_41"));

        verticalLayout_14->addWidget(label_41);

        label_42 = new QLabel(layoutWidget_7);
        label_42->setObjectName(QStringLiteral("label_42"));

        verticalLayout_14->addWidget(label_42);

        tabWidget_2 = new QTabWidget(tab_flightdata);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(10, 320, 591, 171));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        lcdFMSRumbo = new QLCDNumber(tab_4);
        lcdFMSRumbo->setObjectName(QStringLiteral("lcdFMSRumbo"));
        lcdFMSRumbo->setGeometry(QRect(10, 30, 131, 41));
        lcdFMSRumbo->setDigitCount(6);
        lcdFMSRumbo->setProperty("value", QVariant(0));
        lcdFMSRumbo->setProperty("intValue", QVariant(0));
        label_51 = new QLabel(tab_4);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setGeometry(QRect(50, 0, 61, 31));
        label_51->setFont(font);
        label_52 = new QLabel(tab_4);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setGeometry(QRect(180, 0, 71, 31));
        label_52->setFont(font);
        label_53 = new QLabel(tab_4);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setGeometry(QRect(280, 0, 51, 31));
        label_53->setFont(font);
        label_54 = new QLabel(tab_4);
        label_54->setObjectName(QStringLiteral("label_54"));
        label_54->setGeometry(QRect(20, 70, 111, 31));
        label_54->setFont(font);
        label_55 = new QLabel(tab_4);
        label_55->setObjectName(QStringLiteral("label_55"));
        label_55->setGeometry(QRect(400, 0, 71, 31));
        label_55->setFont(font);
        lcdFMSAltura = new QLCDNumber(tab_4);
        lcdFMSAltura->setObjectName(QStringLiteral("lcdFMSAltura"));
        lcdFMSAltura->setGeometry(QRect(160, 30, 101, 41));
        lcdFMSAltura->setDigitCount(5);
        lcdFMSAltura->setProperty("intValue", QVariant(0));
        lcdFMSSpeed = new QLCDNumber(tab_4);
        lcdFMSSpeed->setObjectName(QStringLiteral("lcdFMSSpeed"));
        lcdFMSSpeed->setGeometry(QRect(270, 30, 71, 41));
        lcdFMSSpeed->setDigitCount(3);
        lcdFMSSpeed->setProperty("intValue", QVariant(0));
        lcdFMSDistancia = new QLCDNumber(tab_4);
        lcdFMSDistancia->setObjectName(QStringLiteral("lcdFMSDistancia"));
        lcdFMSDistancia->setGeometry(QRect(10, 100, 121, 41));
        lcdFMSDistancia->setDigitCount(6);
        lcdFMSDistancia->setProperty("intValue", QVariant(0));
        lcdFMSWaypoint = new QLCDNumber(tab_4);
        lcdFMSWaypoint->setObjectName(QStringLiteral("lcdFMSWaypoint"));
        lcdFMSWaypoint->setGeometry(QRect(380, 30, 121, 71));
        lcdFMSWaypoint->setDigitCount(3);
        pushButtonFMSPrevious = new QPushButton(tab_4);
        pushButtonFMSPrevious->setObjectName(QStringLiteral("pushButtonFMSPrevious"));
        pushButtonFMSPrevious->setEnabled(false);
        pushButtonFMSPrevious->setGeometry(QRect(340, 110, 75, 23));
        pushButtonFMSNext = new QPushButton(tab_4);
        pushButtonFMSNext->setObjectName(QStringLiteral("pushButtonFMSNext"));
        pushButtonFMSNext->setEnabled(false);
        pushButtonFMSNext->setGeometry(QRect(430, 110, 75, 23));
        layoutWidget_9 = new QWidget(tab_4);
        layoutWidget_9->setObjectName(QStringLiteral("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(150, 90, 87, 42));
        verticalLayout_16 = new QVBoxLayout(layoutWidget_9);
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        radioButtonAutopilotRCOn = new QRadioButton(layoutWidget_9);
        radioButtonAutopilotRCOn->setObjectName(QStringLiteral("radioButtonAutopilotRCOn"));

        verticalLayout_16->addWidget(radioButtonAutopilotRCOn);

        radioButtonAutopilotRCOff = new QRadioButton(layoutWidget_9);
        radioButtonAutopilotRCOff->setObjectName(QStringLiteral("radioButtonAutopilotRCOff"));
        radioButtonAutopilotRCOff->setChecked(true);

        verticalLayout_16->addWidget(radioButtonAutopilotRCOff);

        layoutWidget_10 = new QWidget(tab_4);
        layoutWidget_10->setObjectName(QStringLiteral("layoutWidget_10"));
        layoutWidget_10->setGeometry(QRect(240, 90, 85, 42));
        verticalLayout_17 = new QVBoxLayout(layoutWidget_10);
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        radioButtonAutotrimRCOn = new QRadioButton(layoutWidget_10);
        radioButtonAutotrimRCOn->setObjectName(QStringLiteral("radioButtonAutotrimRCOn"));
        radioButtonAutotrimRCOn->setChecked(false);

        verticalLayout_17->addWidget(radioButtonAutotrimRCOn);

        radioButtonAutotrimRCOff = new QRadioButton(layoutWidget_10);
        radioButtonAutotrimRCOff->setObjectName(QStringLiteral("radioButtonAutotrimRCOff"));
        radioButtonAutotrimRCOff->setChecked(true);

        verticalLayout_17->addWidget(radioButtonAutotrimRCOff);

        tabWidget_2->addTab(tab_4, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        lcdGPSRumbo = new QLCDNumber(tab_6);
        lcdGPSRumbo->setObjectName(QStringLiteral("lcdGPSRumbo"));
        lcdGPSRumbo->setGeometry(QRect(360, 100, 81, 31));
        label_136 = new QLabel(tab_6);
        label_136->setObjectName(QStringLiteral("label_136"));
        label_136->setGeometry(QRect(290, 20, 51, 21));
        label_136->setFont(font);
        lcdGPSSpeed = new QLCDNumber(tab_6);
        lcdGPSSpeed->setObjectName(QStringLiteral("lcdGPSSpeed"));
        lcdGPSSpeed->setGeometry(QRect(360, 60, 81, 31));
        label_137 = new QLabel(tab_6);
        label_137->setObjectName(QStringLiteral("label_137"));
        label_137->setGeometry(QRect(290, 100, 61, 21));
        label_137->setFont(font);
        lcdGPSLongitud = new QLCDNumber(tab_6);
        lcdGPSLongitud->setObjectName(QStringLiteral("lcdGPSLongitud"));
        lcdGPSLongitud->setGeometry(QRect(70, 80, 191, 41));
        lcdGPSLongitud->setDigitCount(10);
        lcdGPSAltura = new QLCDNumber(tab_6);
        lcdGPSAltura->setObjectName(QStringLiteral("lcdGPSAltura"));
        lcdGPSAltura->setGeometry(QRect(360, 10, 191, 41));
        lcdGPSAltura->setDigitCount(10);
        lcdGPSLatitud = new QLCDNumber(tab_6);
        lcdGPSLatitud->setObjectName(QStringLiteral("lcdGPSLatitud"));
        lcdGPSLatitud->setGeometry(QRect(70, 10, 191, 41));
        lcdGPSLatitud->setDigitCount(10);
        label_138 = new QLabel(tab_6);
        label_138->setObjectName(QStringLiteral("label_138"));
        label_138->setGeometry(QRect(290, 70, 51, 21));
        label_138->setFont(font);
        label_139 = new QLabel(tab_6);
        label_139->setObjectName(QStringLiteral("label_139"));
        label_139->setGeometry(QRect(10, 20, 61, 21));
        label_139->setFont(font);
        label_140 = new QLabel(tab_6);
        label_140->setObjectName(QStringLiteral("label_140"));
        label_140->setGeometry(QRect(0, 90, 71, 21));
        label_140->setFont(font);
        checkBoxGPSPositionFix = new QCheckBox(tab_6);
        checkBoxGPSPositionFix->setObjectName(QStringLiteral("checkBoxGPSPositionFix"));
        checkBoxGPSPositionFix->setGeometry(QRect(460, 60, 91, 17));
        checkBoxGPSPositionFix->setCheckable(true);
        lcdGPSSatelitesUsed = new QLCDNumber(tab_6);
        lcdGPSSatelitesUsed->setObjectName(QStringLiteral("lcdGPSSatelitesUsed"));
        lcdGPSSatelitesUsed->setGeometry(QRect(460, 100, 91, 31));
        lcdGPSSatelitesUsed->setDigitCount(2);
        label_141 = new QLabel(tab_6);
        label_141->setObjectName(QStringLiteral("label_141"));
        label_141->setGeometry(QRect(460, 80, 86, 23));
        tabWidget_2->addTab(tab_6, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        layoutWidget_19 = new QWidget(tab_2);
        layoutWidget_19->setObjectName(QStringLiteral("layoutWidget_19"));
        layoutWidget_19->setGeometry(QRect(10, 0, 541, 31));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget_19);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_110 = new QLabel(layoutWidget_19);
        label_110->setObjectName(QStringLiteral("label_110"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_110->sizePolicy().hasHeightForWidth());
        label_110->setSizePolicy(sizePolicy);
        label_110->setLayoutDirection(Qt::LeftToRight);
        label_110->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(label_110);

        label_111 = new QLabel(layoutWidget_19);
        label_111->setObjectName(QStringLiteral("label_111"));
        sizePolicy.setHeightForWidth(label_111->sizePolicy().hasHeightForWidth());
        label_111->setSizePolicy(sizePolicy);
        label_111->setLayoutDirection(Qt::LeftToRight);
        label_111->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(label_111);

        label_112 = new QLabel(layoutWidget_19);
        label_112->setObjectName(QStringLiteral("label_112"));
        sizePolicy.setHeightForWidth(label_112->sizePolicy().hasHeightForWidth());
        label_112->setSizePolicy(sizePolicy);
        label_112->setLayoutDirection(Qt::LeftToRight);
        label_112->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(label_112);

        label_113 = new QLabel(layoutWidget_19);
        label_113->setObjectName(QStringLiteral("label_113"));
        sizePolicy.setHeightForWidth(label_113->sizePolicy().hasHeightForWidth());
        label_113->setSizePolicy(sizePolicy);
        label_113->setLayoutDirection(Qt::LeftToRight);
        label_113->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(label_113);

        label_114 = new QLabel(layoutWidget_19);
        label_114->setObjectName(QStringLiteral("label_114"));
        sizePolicy.setHeightForWidth(label_114->sizePolicy().hasHeightForWidth());
        label_114->setSizePolicy(sizePolicy);
        label_114->setLayoutDirection(Qt::LeftToRight);
        label_114->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(label_114);

        label_115 = new QLabel(layoutWidget_19);
        label_115->setObjectName(QStringLiteral("label_115"));
        sizePolicy.setHeightForWidth(label_115->sizePolicy().hasHeightForWidth());
        label_115->setSizePolicy(sizePolicy);
        label_115->setLayoutDirection(Qt::LeftToRight);
        label_115->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(label_115);

        label_116 = new QLabel(layoutWidget_19);
        label_116->setObjectName(QStringLiteral("label_116"));
        sizePolicy.setHeightForWidth(label_116->sizePolicy().hasHeightForWidth());
        label_116->setSizePolicy(sizePolicy);
        label_116->setLayoutDirection(Qt::LeftToRight);
        label_116->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(label_116);

        label_117 = new QLabel(layoutWidget_19);
        label_117->setObjectName(QStringLiteral("label_117"));
        sizePolicy.setHeightForWidth(label_117->sizePolicy().hasHeightForWidth());
        label_117->setSizePolicy(sizePolicy);
        label_117->setLayoutDirection(Qt::LeftToRight);
        label_117->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(label_117);

        label_118 = new QLabel(layoutWidget_19);
        label_118->setObjectName(QStringLiteral("label_118"));
        sizePolicy.setHeightForWidth(label_118->sizePolicy().hasHeightForWidth());
        label_118->setSizePolicy(sizePolicy);
        label_118->setLayoutDirection(Qt::LeftToRight);
        label_118->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(label_118);

        label_119 = new QLabel(layoutWidget_19);
        label_119->setObjectName(QStringLiteral("label_119"));
        sizePolicy.setHeightForWidth(label_119->sizePolicy().hasHeightForWidth());
        label_119->setSizePolicy(sizePolicy);
        label_119->setLayoutDirection(Qt::LeftToRight);
        label_119->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(label_119);

        label_120 = new QLabel(layoutWidget_19);
        label_120->setObjectName(QStringLiteral("label_120"));
        sizePolicy.setHeightForWidth(label_120->sizePolicy().hasHeightForWidth());
        label_120->setSizePolicy(sizePolicy);
        label_120->setLayoutDirection(Qt::LeftToRight);
        label_120->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(label_120);

        label_121 = new QLabel(layoutWidget_19);
        label_121->setObjectName(QStringLiteral("label_121"));
        sizePolicy.setHeightForWidth(label_121->sizePolicy().hasHeightForWidth());
        label_121->setSizePolicy(sizePolicy);
        label_121->setLayoutDirection(Qt::LeftToRight);
        label_121->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(label_121);

        layoutWidget_20 = new QWidget(tab_2);
        layoutWidget_20->setObjectName(QStringLiteral("layoutWidget_20"));
        layoutWidget_20->setGeometry(QRect(0, 30, 561, 111));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget_20);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        ServosIn_1 = new QScrollBar(layoutWidget_20);
        ServosIn_1->setObjectName(QStringLiteral("ServosIn_1"));
        ServosIn_1->setMinimum(-100);
        ServosIn_1->setMaximum(100);
        ServosIn_1->setValue(0);
        ServosIn_1->setTracking(true);
        ServosIn_1->setOrientation(Qt::Vertical);
        ServosIn_1->setInvertedAppearance(true);

        horizontalLayout_14->addWidget(ServosIn_1);

        ServosIn_2 = new QScrollBar(layoutWidget_20);
        ServosIn_2->setObjectName(QStringLiteral("ServosIn_2"));
        ServosIn_2->setMinimum(-100);
        ServosIn_2->setMaximum(100);
        ServosIn_2->setValue(0);
        ServosIn_2->setTracking(false);
        ServosIn_2->setOrientation(Qt::Vertical);
        ServosIn_2->setInvertedAppearance(true);

        horizontalLayout_14->addWidget(ServosIn_2);

        ServosIn_3 = new QScrollBar(layoutWidget_20);
        ServosIn_3->setObjectName(QStringLiteral("ServosIn_3"));
        ServosIn_3->setMinimum(-100);
        ServosIn_3->setMaximum(100);
        ServosIn_3->setValue(0);
        ServosIn_3->setTracking(true);
        ServosIn_3->setOrientation(Qt::Vertical);
        ServosIn_3->setInvertedAppearance(true);

        horizontalLayout_14->addWidget(ServosIn_3);

        ServosIn_4 = new QScrollBar(layoutWidget_20);
        ServosIn_4->setObjectName(QStringLiteral("ServosIn_4"));
        ServosIn_4->setMinimum(-100);
        ServosIn_4->setMaximum(100);
        ServosIn_4->setValue(0);
        ServosIn_4->setTracking(true);
        ServosIn_4->setOrientation(Qt::Vertical);
        ServosIn_4->setInvertedAppearance(true);

        horizontalLayout_14->addWidget(ServosIn_4);

        ServosIn_5 = new QScrollBar(layoutWidget_20);
        ServosIn_5->setObjectName(QStringLiteral("ServosIn_5"));
        ServosIn_5->setMinimum(-100);
        ServosIn_5->setMaximum(100);
        ServosIn_5->setValue(0);
        ServosIn_5->setTracking(true);
        ServosIn_5->setOrientation(Qt::Vertical);
        ServosIn_5->setInvertedAppearance(true);

        horizontalLayout_14->addWidget(ServosIn_5);

        ServosIn_6 = new QScrollBar(layoutWidget_20);
        ServosIn_6->setObjectName(QStringLiteral("ServosIn_6"));
        ServosIn_6->setMinimum(-100);
        ServosIn_6->setMaximum(100);
        ServosIn_6->setValue(0);
        ServosIn_6->setTracking(true);
        ServosIn_6->setOrientation(Qt::Vertical);
        ServosIn_6->setInvertedAppearance(true);

        horizontalLayout_14->addWidget(ServosIn_6);

        ServosIn_7 = new QScrollBar(layoutWidget_20);
        ServosIn_7->setObjectName(QStringLiteral("ServosIn_7"));
        ServosIn_7->setMinimum(-100);
        ServosIn_7->setMaximum(100);
        ServosIn_7->setValue(0);
        ServosIn_7->setTracking(true);
        ServosIn_7->setOrientation(Qt::Vertical);
        ServosIn_7->setInvertedAppearance(true);

        horizontalLayout_14->addWidget(ServosIn_7);

        ServosIn_8 = new QScrollBar(layoutWidget_20);
        ServosIn_8->setObjectName(QStringLiteral("ServosIn_8"));
        ServosIn_8->setMinimum(-100);
        ServosIn_8->setMaximum(100);
        ServosIn_8->setValue(0);
        ServosIn_8->setTracking(true);
        ServosIn_8->setOrientation(Qt::Vertical);
        ServosIn_8->setInvertedAppearance(true);

        horizontalLayout_14->addWidget(ServosIn_8);

        ServosIn_9 = new QScrollBar(layoutWidget_20);
        ServosIn_9->setObjectName(QStringLiteral("ServosIn_9"));
        ServosIn_9->setMinimum(-100);
        ServosIn_9->setMaximum(100);
        ServosIn_9->setValue(0);
        ServosIn_9->setTracking(true);
        ServosIn_9->setOrientation(Qt::Vertical);
        ServosIn_9->setInvertedAppearance(true);

        horizontalLayout_14->addWidget(ServosIn_9);

        ServosIn_10 = new QScrollBar(layoutWidget_20);
        ServosIn_10->setObjectName(QStringLiteral("ServosIn_10"));
        ServosIn_10->setMinimum(-100);
        ServosIn_10->setMaximum(100);
        ServosIn_10->setValue(0);
        ServosIn_10->setTracking(true);
        ServosIn_10->setOrientation(Qt::Vertical);
        ServosIn_10->setInvertedAppearance(true);

        horizontalLayout_14->addWidget(ServosIn_10);

        ServosIn_11 = new QScrollBar(layoutWidget_20);
        ServosIn_11->setObjectName(QStringLiteral("ServosIn_11"));
        ServosIn_11->setMinimum(-100);
        ServosIn_11->setMaximum(100);
        ServosIn_11->setValue(0);
        ServosIn_11->setTracking(true);
        ServosIn_11->setOrientation(Qt::Vertical);
        ServosIn_11->setInvertedAppearance(true);

        horizontalLayout_14->addWidget(ServosIn_11);

        ServosIn_12 = new QScrollBar(layoutWidget_20);
        ServosIn_12->setObjectName(QStringLiteral("ServosIn_12"));
        ServosIn_12->setMinimum(-100);
        ServosIn_12->setMaximum(100);
        ServosIn_12->setValue(0);
        ServosIn_12->setTracking(true);
        ServosIn_12->setOrientation(Qt::Vertical);
        ServosIn_12->setInvertedAppearance(true);

        horizontalLayout_14->addWidget(ServosIn_12);

        layoutWidget2 = new QWidget(tab_2);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(560, 30, 21, 111));
        verticalLayout_18 = new QVBoxLayout(layoutWidget2);
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setContentsMargins(11, 11, 11, 11);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        label_78 = new QLabel(layoutWidget2);
        label_78->setObjectName(QStringLiteral("label_78"));

        verticalLayout_18->addWidget(label_78);

        label_79 = new QLabel(layoutWidget2);
        label_79->setObjectName(QStringLiteral("label_79"));

        verticalLayout_18->addWidget(label_79);

        label_80 = new QLabel(layoutWidget2);
        label_80->setObjectName(QStringLiteral("label_80"));

        verticalLayout_18->addWidget(label_80);

        tabWidget_2->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        layoutWidget3 = new QWidget(tab_3);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 30, 561, 111));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        ServosOut_1 = new QScrollBar(layoutWidget3);
        ServosOut_1->setObjectName(QStringLiteral("ServosOut_1"));
        ServosOut_1->setMinimum(-100);
        ServosOut_1->setMaximum(100);
        ServosOut_1->setValue(0);
        ServosOut_1->setOrientation(Qt::Vertical);
        ServosOut_1->setInvertedAppearance(true);

        horizontalLayout_6->addWidget(ServosOut_1);

        ServosOut_2 = new QScrollBar(layoutWidget3);
        ServosOut_2->setObjectName(QStringLiteral("ServosOut_2"));
        ServosOut_2->setMinimum(-100);
        ServosOut_2->setMaximum(100);
        ServosOut_2->setValue(0);
        ServosOut_2->setOrientation(Qt::Vertical);
        ServosOut_2->setInvertedAppearance(true);

        horizontalLayout_6->addWidget(ServosOut_2);

        ServosOut_3 = new QScrollBar(layoutWidget3);
        ServosOut_3->setObjectName(QStringLiteral("ServosOut_3"));
        ServosOut_3->setMinimum(-100);
        ServosOut_3->setMaximum(100);
        ServosOut_3->setValue(0);
        ServosOut_3->setOrientation(Qt::Vertical);
        ServosOut_3->setInvertedAppearance(true);

        horizontalLayout_6->addWidget(ServosOut_3);

        ServosOut_4 = new QScrollBar(layoutWidget3);
        ServosOut_4->setObjectName(QStringLiteral("ServosOut_4"));
        ServosOut_4->setMinimum(-100);
        ServosOut_4->setMaximum(100);
        ServosOut_4->setValue(0);
        ServosOut_4->setOrientation(Qt::Vertical);
        ServosOut_4->setInvertedAppearance(true);

        horizontalLayout_6->addWidget(ServosOut_4);

        ServosOut_5 = new QScrollBar(layoutWidget3);
        ServosOut_5->setObjectName(QStringLiteral("ServosOut_5"));
        ServosOut_5->setMinimum(-100);
        ServosOut_5->setMaximum(100);
        ServosOut_5->setValue(0);
        ServosOut_5->setOrientation(Qt::Vertical);
        ServosOut_5->setInvertedAppearance(true);

        horizontalLayout_6->addWidget(ServosOut_5);

        ServosOut_6 = new QScrollBar(layoutWidget3);
        ServosOut_6->setObjectName(QStringLiteral("ServosOut_6"));
        ServosOut_6->setMinimum(-100);
        ServosOut_6->setMaximum(100);
        ServosOut_6->setValue(0);
        ServosOut_6->setOrientation(Qt::Vertical);
        ServosOut_6->setInvertedAppearance(true);

        horizontalLayout_6->addWidget(ServosOut_6);

        ServosOut_7 = new QScrollBar(layoutWidget3);
        ServosOut_7->setObjectName(QStringLiteral("ServosOut_7"));
        ServosOut_7->setMinimum(-100);
        ServosOut_7->setMaximum(100);
        ServosOut_7->setValue(0);
        ServosOut_7->setOrientation(Qt::Vertical);
        ServosOut_7->setInvertedAppearance(true);

        horizontalLayout_6->addWidget(ServosOut_7);

        ServosOut_8 = new QScrollBar(layoutWidget3);
        ServosOut_8->setObjectName(QStringLiteral("ServosOut_8"));
        ServosOut_8->setMinimum(-100);
        ServosOut_8->setMaximum(100);
        ServosOut_8->setValue(0);
        ServosOut_8->setOrientation(Qt::Vertical);
        ServosOut_8->setInvertedAppearance(true);

        horizontalLayout_6->addWidget(ServosOut_8);

        ServosOut_9 = new QScrollBar(layoutWidget3);
        ServosOut_9->setObjectName(QStringLiteral("ServosOut_9"));
        ServosOut_9->setMinimum(-100);
        ServosOut_9->setMaximum(100);
        ServosOut_9->setValue(0);
        ServosOut_9->setOrientation(Qt::Vertical);
        ServosOut_9->setInvertedAppearance(true);

        horizontalLayout_6->addWidget(ServosOut_9);

        ServosOut_10 = new QScrollBar(layoutWidget3);
        ServosOut_10->setObjectName(QStringLiteral("ServosOut_10"));
        ServosOut_10->setMinimum(-100);
        ServosOut_10->setMaximum(100);
        ServosOut_10->setValue(0);
        ServosOut_10->setOrientation(Qt::Vertical);
        ServosOut_10->setInvertedAppearance(true);

        horizontalLayout_6->addWidget(ServosOut_10);

        ServosOut_11 = new QScrollBar(layoutWidget3);
        ServosOut_11->setObjectName(QStringLiteral("ServosOut_11"));
        ServosOut_11->setMinimum(-100);
        ServosOut_11->setMaximum(100);
        ServosOut_11->setValue(0);
        ServosOut_11->setOrientation(Qt::Vertical);
        ServosOut_11->setInvertedAppearance(true);

        horizontalLayout_6->addWidget(ServosOut_11);

        ServosOut_12 = new QScrollBar(layoutWidget3);
        ServosOut_12->setObjectName(QStringLiteral("ServosOut_12"));
        ServosOut_12->setMinimum(-100);
        ServosOut_12->setMaximum(100);
        ServosOut_12->setValue(0);
        ServosOut_12->setOrientation(Qt::Vertical);
        ServosOut_12->setInvertedAppearance(true);

        horizontalLayout_6->addWidget(ServosOut_12);

        ServosOut_13 = new QScrollBar(layoutWidget3);
        ServosOut_13->setObjectName(QStringLiteral("ServosOut_13"));
        ServosOut_13->setMinimum(-100);
        ServosOut_13->setMaximum(100);
        ServosOut_13->setValue(0);
        ServosOut_13->setOrientation(Qt::Vertical);
        ServosOut_13->setInvertedAppearance(true);

        horizontalLayout_6->addWidget(ServosOut_13);

        ServosOut_14 = new QScrollBar(layoutWidget3);
        ServosOut_14->setObjectName(QStringLiteral("ServosOut_14"));
        ServosOut_14->setMinimum(-100);
        ServosOut_14->setMaximum(100);
        ServosOut_14->setValue(0);
        ServosOut_14->setOrientation(Qt::Vertical);
        ServosOut_14->setInvertedAppearance(true);

        horizontalLayout_6->addWidget(ServosOut_14);

        ServosOut_15 = new QScrollBar(layoutWidget3);
        ServosOut_15->setObjectName(QStringLiteral("ServosOut_15"));
        ServosOut_15->setMinimum(-100);
        ServosOut_15->setMaximum(100);
        ServosOut_15->setValue(0);
        ServosOut_15->setOrientation(Qt::Vertical);
        ServosOut_15->setInvertedAppearance(true);

        horizontalLayout_6->addWidget(ServosOut_15);

        ServosOut_16 = new QScrollBar(layoutWidget3);
        ServosOut_16->setObjectName(QStringLiteral("ServosOut_16"));
        ServosOut_16->setMinimum(-100);
        ServosOut_16->setMaximum(100);
        ServosOut_16->setValue(0);
        ServosOut_16->setOrientation(Qt::Vertical);
        ServosOut_16->setInvertedAppearance(true);

        horizontalLayout_6->addWidget(ServosOut_16);

        ServosOut_17 = new QScrollBar(layoutWidget3);
        ServosOut_17->setObjectName(QStringLiteral("ServosOut_17"));
        ServosOut_17->setMinimum(-100);
        ServosOut_17->setMaximum(100);
        ServosOut_17->setValue(0);
        ServosOut_17->setOrientation(Qt::Vertical);
        ServosOut_17->setInvertedAppearance(true);

        horizontalLayout_6->addWidget(ServosOut_17);

        ServosOut_18 = new QScrollBar(layoutWidget3);
        ServosOut_18->setObjectName(QStringLiteral("ServosOut_18"));
        ServosOut_18->setMinimum(-100);
        ServosOut_18->setMaximum(100);
        ServosOut_18->setValue(0);
        ServosOut_18->setOrientation(Qt::Vertical);
        ServosOut_18->setInvertedAppearance(true);

        horizontalLayout_6->addWidget(ServosOut_18);

        ServosOut_19 = new QScrollBar(layoutWidget3);
        ServosOut_19->setObjectName(QStringLiteral("ServosOut_19"));
        ServosOut_19->setMinimum(-100);
        ServosOut_19->setMaximum(100);
        ServosOut_19->setValue(0);
        ServosOut_19->setOrientation(Qt::Vertical);
        ServosOut_19->setInvertedAppearance(true);

        horizontalLayout_6->addWidget(ServosOut_19);

        ServosOut_20 = new QScrollBar(layoutWidget3);
        ServosOut_20->setObjectName(QStringLiteral("ServosOut_20"));
        ServosOut_20->setMinimum(-100);
        ServosOut_20->setMaximum(100);
        ServosOut_20->setValue(0);
        ServosOut_20->setOrientation(Qt::Vertical);
        ServosOut_20->setInvertedAppearance(true);

        horizontalLayout_6->addWidget(ServosOut_20);

        layoutWidget4 = new QWidget(tab_3);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 0, 561, 31));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_43 = new QLabel(layoutWidget4);
        label_43->setObjectName(QStringLiteral("label_43"));
        sizePolicy.setHeightForWidth(label_43->sizePolicy().hasHeightForWidth());
        label_43->setSizePolicy(sizePolicy);
        label_43->setLayoutDirection(Qt::LeftToRight);
        label_43->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_43);

        label_44 = new QLabel(layoutWidget4);
        label_44->setObjectName(QStringLiteral("label_44"));
        sizePolicy.setHeightForWidth(label_44->sizePolicy().hasHeightForWidth());
        label_44->setSizePolicy(sizePolicy);
        label_44->setLayoutDirection(Qt::LeftToRight);
        label_44->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_44);

        label_45 = new QLabel(layoutWidget4);
        label_45->setObjectName(QStringLiteral("label_45"));
        sizePolicy.setHeightForWidth(label_45->sizePolicy().hasHeightForWidth());
        label_45->setSizePolicy(sizePolicy);
        label_45->setLayoutDirection(Qt::LeftToRight);
        label_45->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_45);

        label_46 = new QLabel(layoutWidget4);
        label_46->setObjectName(QStringLiteral("label_46"));
        sizePolicy.setHeightForWidth(label_46->sizePolicy().hasHeightForWidth());
        label_46->setSizePolicy(sizePolicy);
        label_46->setLayoutDirection(Qt::LeftToRight);
        label_46->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_46);

        label_48 = new QLabel(layoutWidget4);
        label_48->setObjectName(QStringLiteral("label_48"));
        sizePolicy.setHeightForWidth(label_48->sizePolicy().hasHeightForWidth());
        label_48->setSizePolicy(sizePolicy);
        label_48->setLayoutDirection(Qt::LeftToRight);
        label_48->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_48);

        label_50 = new QLabel(layoutWidget4);
        label_50->setObjectName(QStringLiteral("label_50"));
        sizePolicy.setHeightForWidth(label_50->sizePolicy().hasHeightForWidth());
        label_50->setSizePolicy(sizePolicy);
        label_50->setLayoutDirection(Qt::LeftToRight);
        label_50->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_50);

        label_49 = new QLabel(layoutWidget4);
        label_49->setObjectName(QStringLiteral("label_49"));
        sizePolicy.setHeightForWidth(label_49->sizePolicy().hasHeightForWidth());
        label_49->setSizePolicy(sizePolicy);
        label_49->setLayoutDirection(Qt::LeftToRight);
        label_49->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_49);

        label_47 = new QLabel(layoutWidget4);
        label_47->setObjectName(QStringLiteral("label_47"));
        sizePolicy.setHeightForWidth(label_47->sizePolicy().hasHeightForWidth());
        label_47->setSizePolicy(sizePolicy);
        label_47->setLayoutDirection(Qt::LeftToRight);
        label_47->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_47);

        label_98 = new QLabel(layoutWidget4);
        label_98->setObjectName(QStringLiteral("label_98"));
        sizePolicy.setHeightForWidth(label_98->sizePolicy().hasHeightForWidth());
        label_98->setSizePolicy(sizePolicy);
        label_98->setLayoutDirection(Qt::LeftToRight);
        label_98->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_98);

        label_102 = new QLabel(layoutWidget4);
        label_102->setObjectName(QStringLiteral("label_102"));
        sizePolicy.setHeightForWidth(label_102->sizePolicy().hasHeightForWidth());
        label_102->setSizePolicy(sizePolicy);
        label_102->setLayoutDirection(Qt::LeftToRight);
        label_102->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_102);

        label_99 = new QLabel(layoutWidget4);
        label_99->setObjectName(QStringLiteral("label_99"));
        sizePolicy.setHeightForWidth(label_99->sizePolicy().hasHeightForWidth());
        label_99->setSizePolicy(sizePolicy);
        label_99->setLayoutDirection(Qt::LeftToRight);
        label_99->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_99);

        label_104 = new QLabel(layoutWidget4);
        label_104->setObjectName(QStringLiteral("label_104"));
        sizePolicy.setHeightForWidth(label_104->sizePolicy().hasHeightForWidth());
        label_104->setSizePolicy(sizePolicy);
        label_104->setLayoutDirection(Qt::LeftToRight);
        label_104->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_104);

        label_100 = new QLabel(layoutWidget4);
        label_100->setObjectName(QStringLiteral("label_100"));
        sizePolicy.setHeightForWidth(label_100->sizePolicy().hasHeightForWidth());
        label_100->setSizePolicy(sizePolicy);
        label_100->setLayoutDirection(Qt::LeftToRight);
        label_100->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_100);

        label_105 = new QLabel(layoutWidget4);
        label_105->setObjectName(QStringLiteral("label_105"));
        sizePolicy.setHeightForWidth(label_105->sizePolicy().hasHeightForWidth());
        label_105->setSizePolicy(sizePolicy);
        label_105->setLayoutDirection(Qt::LeftToRight);
        label_105->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_105);

        label_107 = new QLabel(layoutWidget4);
        label_107->setObjectName(QStringLiteral("label_107"));
        sizePolicy.setHeightForWidth(label_107->sizePolicy().hasHeightForWidth());
        label_107->setSizePolicy(sizePolicy);
        label_107->setLayoutDirection(Qt::LeftToRight);
        label_107->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_107);

        label_106 = new QLabel(layoutWidget4);
        label_106->setObjectName(QStringLiteral("label_106"));
        sizePolicy.setHeightForWidth(label_106->sizePolicy().hasHeightForWidth());
        label_106->setSizePolicy(sizePolicy);
        label_106->setLayoutDirection(Qt::LeftToRight);
        label_106->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_106);

        label_103 = new QLabel(layoutWidget4);
        label_103->setObjectName(QStringLiteral("label_103"));
        sizePolicy.setHeightForWidth(label_103->sizePolicy().hasHeightForWidth());
        label_103->setSizePolicy(sizePolicy);
        label_103->setLayoutDirection(Qt::LeftToRight);
        label_103->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_103);

        label_101 = new QLabel(layoutWidget4);
        label_101->setObjectName(QStringLiteral("label_101"));
        sizePolicy.setHeightForWidth(label_101->sizePolicy().hasHeightForWidth());
        label_101->setSizePolicy(sizePolicy);
        label_101->setLayoutDirection(Qt::LeftToRight);
        label_101->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_101);

        label_109 = new QLabel(layoutWidget4);
        label_109->setObjectName(QStringLiteral("label_109"));
        sizePolicy.setHeightForWidth(label_109->sizePolicy().hasHeightForWidth());
        label_109->setSizePolicy(sizePolicy);
        label_109->setLayoutDirection(Qt::LeftToRight);
        label_109->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_109);

        label_108 = new QLabel(layoutWidget4);
        label_108->setObjectName(QStringLiteral("label_108"));
        sizePolicy.setHeightForWidth(label_108->sizePolicy().hasHeightForWidth());
        label_108->setSizePolicy(sizePolicy);
        label_108->setLayoutDirection(Qt::LeftToRight);
        label_108->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_108);

        layoutWidget5 = new QWidget(tab_3);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(570, 30, 20, 111));
        verticalLayout_19 = new QVBoxLayout(layoutWidget5);
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setContentsMargins(11, 11, 11, 11);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        label_83 = new QLabel(layoutWidget5);
        label_83->setObjectName(QStringLiteral("label_83"));

        verticalLayout_19->addWidget(label_83);

        label_82 = new QLabel(layoutWidget5);
        label_82->setObjectName(QStringLiteral("label_82"));

        verticalLayout_19->addWidget(label_82);

        label_81 = new QLabel(layoutWidget5);
        label_81->setObjectName(QStringLiteral("label_81"));

        verticalLayout_19->addWidget(label_81);

        tabWidget_2->addTab(tab_3, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        layoutWidget_8 = new QWidget(tab_10);
        layoutWidget_8->setObjectName(QStringLiteral("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(100, 10, 191, 131));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        joystickFBWGases = new QSlider(layoutWidget_8);
        joystickFBWGases->setObjectName(QStringLiteral("joystickFBWGases"));
        joystickFBWGases->setMinimum(0);
        joystickFBWGases->setMaximum(100);
        joystickFBWGases->setOrientation(Qt::Vertical);

        horizontalLayout_7->addWidget(joystickFBWGases);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        joystickFBWAleron = new QSlider(layoutWidget_8);
        joystickFBWAleron->setObjectName(QStringLiteral("joystickFBWAleron"));
        joystickFBWAleron->setMinimum(-100);
        joystickFBWAleron->setMaximum(100);
        joystickFBWAleron->setOrientation(Qt::Horizontal);

        verticalLayout_15->addWidget(joystickFBWAleron);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_5 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);

        joystickFBWProfundidad = new QSlider(layoutWidget_8);
        joystickFBWProfundidad->setObjectName(QStringLiteral("joystickFBWProfundidad"));
        joystickFBWProfundidad->setMinimum(-100);
        joystickFBWProfundidad->setMaximum(100);
        joystickFBWProfundidad->setOrientation(Qt::Vertical);

        horizontalLayout_8->addWidget(joystickFBWProfundidad);

        horizontalSpacer_6 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);


        verticalLayout_15->addLayout(horizontalLayout_8);

        joystickFBWRudder = new QSlider(layoutWidget_8);
        joystickFBWRudder->setObjectName(QStringLiteral("joystickFBWRudder"));
        joystickFBWRudder->setMinimum(-100);
        joystickFBWRudder->setMaximum(100);
        joystickFBWRudder->setOrientation(Qt::Horizontal);

        verticalLayout_15->addWidget(joystickFBWRudder);


        horizontalLayout_7->addLayout(verticalLayout_15);

        tabWidget_2->addTab(tab_10, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        spinBoxRateParam = new QSpinBox(tab_5);
        spinBoxRateParam->setObjectName(QStringLiteral("spinBoxRateParam"));
        spinBoxRateParam->setGeometry(QRect(90, 30, 61, 22));
        spinBoxRateParam->setMinimum(50);
        spinBoxRateParam->setMaximum(10000);
        spinBoxRateParam->setSingleStep(10);
        spinBoxRateParam->setValue(100);
        label_56 = new QLabel(tab_5);
        label_56->setObjectName(QStringLiteral("label_56"));
        label_56->setGeometry(QRect(10, 30, 71, 21));
        label_57 = new QLabel(tab_5);
        label_57->setObjectName(QStringLiteral("label_57"));
        label_57->setGeometry(QRect(10, 70, 71, 21));
        spinBoxRateFMS = new QSpinBox(tab_5);
        spinBoxRateFMS->setObjectName(QStringLiteral("spinBoxRateFMS"));
        spinBoxRateFMS->setGeometry(QRect(90, 70, 61, 22));
        spinBoxRateFMS->setMinimum(50);
        spinBoxRateFMS->setMaximum(10000);
        spinBoxRateFMS->setSingleStep(10);
        spinBoxRateFMS->setValue(100);
        spinBoxRateServos = new QSpinBox(tab_5);
        spinBoxRateServos->setObjectName(QStringLiteral("spinBoxRateServos"));
        spinBoxRateServos->setGeometry(QRect(90, 110, 61, 22));
        spinBoxRateServos->setMinimum(20);
        spinBoxRateServos->setMaximum(10000);
        spinBoxRateServos->setSingleStep(10);
        spinBoxRateServos->setValue(20);
        label_58 = new QLabel(tab_5);
        label_58->setObjectName(QStringLiteral("label_58"));
        label_58->setGeometry(QRect(10, 110, 71, 21));
        label_59 = new QLabel(tab_5);
        label_59->setObjectName(QStringLiteral("label_59"));
        label_59->setGeometry(QRect(160, 30, 71, 21));
        label_60 = new QLabel(tab_5);
        label_60->setObjectName(QStringLiteral("label_60"));
        label_60->setGeometry(QRect(160, 70, 71, 21));
        label_61 = new QLabel(tab_5);
        label_61->setObjectName(QStringLiteral("label_61"));
        label_61->setGeometry(QRect(160, 110, 71, 21));
        tabWidget_2->addTab(tab_5, QString());
        groupBox_34 = new QGroupBox(tab_flightdata);
        groupBox_34->setObjectName(QStringLiteral("groupBox_34"));
        groupBox_34->setGeometry(QRect(260, 160, 321, 91));
        lcdAnalogTemp = new QLCDNumber(groupBox_34);
        lcdAnalogTemp->setObjectName(QStringLiteral("lcdAnalogTemp"));
        lcdAnalogTemp->setGeometry(QRect(50, 20, 64, 23));
        label_122 = new QLabel(groupBox_34);
        label_122->setObjectName(QStringLiteral("label_122"));
        label_122->setGeometry(QRect(10, 20, 31, 21));
        lcdAnalogVbatt = new QLCDNumber(groupBox_34);
        lcdAnalogVbatt->setObjectName(QStringLiteral("lcdAnalogVbatt"));
        lcdAnalogVbatt->setGeometry(QRect(50, 50, 64, 23));
        label_123 = new QLabel(groupBox_34);
        label_123->setObjectName(QStringLiteral("label_123"));
        label_123->setGeometry(QRect(10, 50, 31, 21));
        lcdAnalogBaro = new QLCDNumber(groupBox_34);
        lcdAnalogBaro->setObjectName(QStringLiteral("lcdAnalogBaro"));
        lcdAnalogBaro->setGeometry(QRect(150, 20, 64, 23));
        label_124 = new QLabel(groupBox_34);
        label_124->setObjectName(QStringLiteral("label_124"));
        label_124->setGeometry(QRect(120, 20, 31, 21));
        lcdAnalogAltura = new QLCDNumber(groupBox_34);
        lcdAnalogAltura->setObjectName(QStringLiteral("lcdAnalogAltura"));
        lcdAnalogAltura->setGeometry(QRect(150, 50, 64, 23));
        label_125 = new QLabel(groupBox_34);
        label_125->setObjectName(QStringLiteral("label_125"));
        label_125->setGeometry(QRect(120, 50, 31, 21));
        lcdAnalogPitot = new QLCDNumber(groupBox_34);
        lcdAnalogPitot->setObjectName(QStringLiteral("lcdAnalogPitot"));
        lcdAnalogPitot->setGeometry(QRect(250, 20, 64, 23));
        label_126 = new QLabel(groupBox_34);
        label_126->setObjectName(QStringLiteral("label_126"));
        label_126->setGeometry(QRect(220, 20, 31, 21));
        lcdAnalogSpeed = new QLCDNumber(groupBox_34);
        lcdAnalogSpeed->setObjectName(QStringLiteral("lcdAnalogSpeed"));
        lcdAnalogSpeed->setGeometry(QRect(250, 50, 64, 23));
        label_127 = new QLabel(groupBox_34);
        label_127->setObjectName(QStringLiteral("label_127"));
        label_127->setGeometry(QRect(220, 50, 31, 21));
        tabWidget_3 = new QTabWidget(tab_flightdata);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(10, 240, 581, 71));
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        lcdGPSFastRumbo = new QLCDNumber(tab_7);
        lcdGPSFastRumbo->setObjectName(QStringLiteral("lcdGPSFastRumbo"));
        lcdGPSFastRumbo->setGeometry(QRect(500, 10, 64, 23));
        lcdGPSFastLongitud = new QLCDNumber(tab_7);
        lcdGPSFastLongitud->setObjectName(QStringLiteral("lcdGPSFastLongitud"));
        lcdGPSFastLongitud->setGeometry(QRect(170, 10, 64, 23));
        label_129 = new QLabel(tab_7);
        label_129->setObjectName(QStringLiteral("label_129"));
        label_129->setGeometry(QRect(120, 10, 51, 21));
        label_131 = new QLabel(tab_7);
        label_131->setObjectName(QStringLiteral("label_131"));
        label_131->setGeometry(QRect(350, 10, 41, 21));
        lcdGPSFastAltura = new QLCDNumber(tab_7);
        lcdGPSFastAltura->setObjectName(QStringLiteral("lcdGPSFastAltura"));
        lcdGPSFastAltura->setGeometry(QRect(280, 10, 64, 23));
        label_130 = new QLabel(tab_7);
        label_130->setObjectName(QStringLiteral("label_130"));
        label_130->setGeometry(QRect(240, 10, 41, 21));
        label_128 = new QLabel(tab_7);
        label_128->setObjectName(QStringLiteral("label_128"));
        label_128->setGeometry(QRect(10, 10, 41, 21));
        lcdGPSFastLatitud = new QLCDNumber(tab_7);
        lcdGPSFastLatitud->setObjectName(QStringLiteral("lcdGPSFastLatitud"));
        lcdGPSFastLatitud->setGeometry(QRect(50, 10, 64, 23));
        label_132 = new QLabel(tab_7);
        label_132->setObjectName(QStringLiteral("label_132"));
        label_132->setGeometry(QRect(460, 10, 41, 21));
        lcdGPSFastSpeed = new QLCDNumber(tab_7);
        lcdGPSFastSpeed->setObjectName(QStringLiteral("lcdGPSFastSpeed"));
        lcdGPSFastSpeed->setGeometry(QRect(390, 10, 64, 23));
        tabWidget_3->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        layoutWidget6 = new QWidget(tab_8);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(20, 10, 321, 25));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        checkBoxFastPositionFix = new QCheckBox(layoutWidget6);
        checkBoxFastPositionFix->setObjectName(QStringLiteral("checkBoxFastPositionFix"));
        checkBoxFastPositionFix->setCheckable(true);

        horizontalLayout_15->addWidget(checkBoxFastPositionFix);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_7);

        label_133 = new QLabel(layoutWidget6);
        label_133->setObjectName(QStringLiteral("label_133"));

        horizontalLayout_15->addWidget(label_133);

        lcdGPSFastSatelitesUsed = new QLCDNumber(layoutWidget6);
        lcdGPSFastSatelitesUsed->setObjectName(QStringLiteral("lcdGPSFastSatelitesUsed"));
        lcdGPSFastSatelitesUsed->setDigitCount(2);

        horizontalLayout_15->addWidget(lcdGPSFastSatelitesUsed);

        tabWidget_3->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        layoutWidget7 = new QWidget(tab_9);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(20, 10, 521, 31));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        label_134 = new QLabel(layoutWidget7);
        label_134->setObjectName(QStringLiteral("label_134"));
        QFont font2;
        font2.setPointSize(12);
        label_134->setFont(font2);

        horizontalLayout_16->addWidget(label_134);

        lcdStatSensorDSC = new QLCDNumber(layoutWidget7);
        lcdStatSensorDSC->setObjectName(QStringLiteral("lcdStatSensorDSC"));
        lcdStatSensorDSC->setDigitCount(4);

        horizontalLayout_16->addWidget(lcdStatSensorDSC);

        label_142 = new QLabel(layoutWidget7);
        label_142->setObjectName(QStringLiteral("label_142"));
        label_142->setFont(font2);

        horizontalLayout_16->addWidget(label_142);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_8);

        label_135 = new QLabel(layoutWidget7);
        label_135->setObjectName(QStringLiteral("label_135"));
        label_135->setFont(font2);

        horizontalLayout_16->addWidget(label_135);

        lcdStatControlDSC = new QLCDNumber(layoutWidget7);
        lcdStatControlDSC->setObjectName(QStringLiteral("lcdStatControlDSC"));
        lcdStatControlDSC->setDigitCount(4);

        horizontalLayout_16->addWidget(lcdStatControlDSC);

        label_143 = new QLabel(layoutWidget7);
        label_143->setObjectName(QStringLiteral("label_143"));
        label_143->setFont(font2);

        horizontalLayout_16->addWidget(label_143);

        tabWidget_3->addTab(tab_9, QString());
        tabWidget->addTab(tab_flightdata, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox_19 = new QGroupBox(tab);
        groupBox_19->setObjectName(QStringLiteral("groupBox_19"));
        groupBox_19->setGeometry(QRect(30, 40, 401, 101));
        doubleSpinBox_k_elev = new QDoubleSpinBox(groupBox_19);
        doubleSpinBox_k_elev->setObjectName(QStringLiteral("doubleSpinBox_k_elev"));
        doubleSpinBox_k_elev->setGeometry(QRect(210, 30, 81, 22));
        doubleSpinBox_k_elev->setDecimals(9);
        doubleSpinBox_k_elev->setSingleStep(1e-05);
        label_62 = new QLabel(groupBox_19);
        label_62->setObjectName(QStringLiteral("label_62"));
        label_62->setGeometry(QRect(215, 10, 71, 20));
        label_63 = new QLabel(groupBox_19);
        label_63->setObjectName(QStringLiteral("label_63"));
        label_63->setGeometry(QRect(310, 11, 81, 20));
        doubleSpinBox_k_div_Q_init = new QDoubleSpinBox(groupBox_19);
        doubleSpinBox_k_div_Q_init->setObjectName(QStringLiteral("doubleSpinBox_k_div_Q_init"));
        doubleSpinBox_k_div_Q_init->setGeometry(QRect(210, 70, 81, 22));
        doubleSpinBox_k_div_Q_init->setDecimals(9);
        doubleSpinBox_k_div_Q_init->setMinimum(0.1);
        doubleSpinBox_k_div_Q_init->setSingleStep(0.1);
        doubleSpinBox_k_div_Q_init->setValue(0.5);
        label_64 = new QLabel(groupBox_19);
        label_64->setObjectName(QStringLiteral("label_64"));
        label_64->setGeometry(QRect(210, 50, 81, 20));
        label_65 = new QLabel(groupBox_19);
        label_65->setObjectName(QStringLiteral("label_65"));
        label_65->setGeometry(QRect(310, 50, 81, 20));
        doubleSpinBox_k_div_Q_speed = new QDoubleSpinBox(groupBox_19);
        doubleSpinBox_k_div_Q_speed->setObjectName(QStringLiteral("doubleSpinBox_k_div_Q_speed"));
        doubleSpinBox_k_div_Q_speed->setGeometry(QRect(310, 70, 81, 22));
        doubleSpinBox_k_div_Q_speed->setDecimals(9);
        doubleSpinBox_k_div_Q_speed->setMinimum(10);
        doubleSpinBox_k_div_Q_speed->setSingleStep(1);
        doubleSpinBox_k_div_Q_speed->setValue(20);
        doubleSpinBox_k_int_pitch = new QDoubleSpinBox(groupBox_19);
        doubleSpinBox_k_int_pitch->setObjectName(QStringLiteral("doubleSpinBox_k_int_pitch"));
        doubleSpinBox_k_int_pitch->setGeometry(QRect(310, 30, 81, 22));
        doubleSpinBox_k_int_pitch->setDecimals(9);
        doubleSpinBox_k_int_pitch->setSingleStep(1e-05);
        label_66 = new QLabel(groupBox_19);
        label_66->setObjectName(QStringLiteral("label_66"));
        label_66->setGeometry(QRect(110, 10, 71, 20));
        doubleSpinBox_k_pitch = new QDoubleSpinBox(groupBox_19);
        doubleSpinBox_k_pitch->setObjectName(QStringLiteral("doubleSpinBox_k_pitch"));
        doubleSpinBox_k_pitch->setGeometry(QRect(110, 30, 81, 22));
        doubleSpinBox_k_pitch->setDecimals(9);
        doubleSpinBox_k_pitch->setSingleStep(1e-05);
        label_67 = new QLabel(groupBox_19);
        label_67->setObjectName(QStringLiteral("label_67"));
        label_67->setGeometry(QRect(20, 10, 71, 20));
        doubleSpinBox_k_altura = new QDoubleSpinBox(groupBox_19);
        doubleSpinBox_k_altura->setObjectName(QStringLiteral("doubleSpinBox_k_altura"));
        doubleSpinBox_k_altura->setGeometry(QRect(15, 30, 81, 22));
        doubleSpinBox_k_altura->setDecimals(9);
        doubleSpinBox_k_altura->setSingleStep(1e-05);
        label_68 = new QLabel(groupBox_19);
        label_68->setObjectName(QStringLiteral("label_68"));
        label_68->setGeometry(QRect(20, 50, 71, 20));
        doubleSpinBox_k_int_altura = new QDoubleSpinBox(groupBox_19);
        doubleSpinBox_k_int_altura->setObjectName(QStringLiteral("doubleSpinBox_k_int_altura"));
        doubleSpinBox_k_int_altura->setGeometry(QRect(15, 70, 81, 22));
        doubleSpinBox_k_int_altura->setDecimals(9);
        doubleSpinBox_k_int_altura->setSingleStep(1e-05);
        doubleSpinBox_k_VVI = new QDoubleSpinBox(groupBox_19);
        doubleSpinBox_k_VVI->setObjectName(QStringLiteral("doubleSpinBox_k_VVI"));
        doubleSpinBox_k_VVI->setGeometry(QRect(110, 70, 81, 22));
        doubleSpinBox_k_VVI->setDecimals(9);
        doubleSpinBox_k_VVI->setSingleStep(1e-05);
        label_69 = new QLabel(groupBox_19);
        label_69->setObjectName(QStringLiteral("label_69"));
        label_69->setGeometry(QRect(110, 50, 71, 20));
        pushButtonAutopilotParamLoad = new QPushButton(tab);
        pushButtonAutopilotParamLoad->setObjectName(QStringLiteral("pushButtonAutopilotParamLoad"));
        pushButtonAutopilotParamLoad->setGeometry(QRect(410, 10, 75, 23));
        pushButtonAutopilotParamStore = new QPushButton(tab);
        pushButtonAutopilotParamStore->setObjectName(QStringLiteral("pushButtonAutopilotParamStore"));
        pushButtonAutopilotParamStore->setGeometry(QRect(490, 10, 75, 23));
        groupBox_20 = new QGroupBox(tab);
        groupBox_20->setObjectName(QStringLiteral("groupBox_20"));
        groupBox_20->setGeometry(QRect(30, 150, 401, 101));
        doubleSpinBox_k_airln = new QDoubleSpinBox(groupBox_20);
        doubleSpinBox_k_airln->setObjectName(QStringLiteral("doubleSpinBox_k_airln"));
        doubleSpinBox_k_airln->setGeometry(QRect(210, 30, 81, 22));
        doubleSpinBox_k_airln->setDecimals(9);
        doubleSpinBox_k_airln->setSingleStep(1e-05);
        label_70 = new QLabel(groupBox_20);
        label_70->setObjectName(QStringLiteral("label_70"));
        label_70->setGeometry(QRect(215, 10, 71, 20));
        doubleSpinBox_k_div_P_init = new QDoubleSpinBox(groupBox_20);
        doubleSpinBox_k_div_P_init->setObjectName(QStringLiteral("doubleSpinBox_k_div_P_init"));
        doubleSpinBox_k_div_P_init->setGeometry(QRect(210, 70, 81, 22));
        doubleSpinBox_k_div_P_init->setDecimals(9);
        doubleSpinBox_k_div_P_init->setMinimum(0.1);
        doubleSpinBox_k_div_P_init->setSingleStep(0.1);
        doubleSpinBox_k_div_P_init->setValue(0.5);
        label_72 = new QLabel(groupBox_20);
        label_72->setObjectName(QStringLiteral("label_72"));
        label_72->setGeometry(QRect(210, 50, 81, 20));
        label_73 = new QLabel(groupBox_20);
        label_73->setObjectName(QStringLiteral("label_73"));
        label_73->setGeometry(QRect(310, 50, 81, 20));
        doubleSpinBox_k_div_P_speed = new QDoubleSpinBox(groupBox_20);
        doubleSpinBox_k_div_P_speed->setObjectName(QStringLiteral("doubleSpinBox_k_div_P_speed"));
        doubleSpinBox_k_div_P_speed->setGeometry(QRect(310, 70, 81, 22));
        doubleSpinBox_k_div_P_speed->setDecimals(9);
        doubleSpinBox_k_div_P_speed->setMinimum(10);
        doubleSpinBox_k_div_P_speed->setSingleStep(1);
        doubleSpinBox_k_div_P_speed->setValue(20);
        label_74 = new QLabel(groupBox_20);
        label_74->setObjectName(QStringLiteral("label_74"));
        label_74->setGeometry(QRect(110, 10, 71, 20));
        doubleSpinBox_k_roll = new QDoubleSpinBox(groupBox_20);
        doubleSpinBox_k_roll->setObjectName(QStringLiteral("doubleSpinBox_k_roll"));
        doubleSpinBox_k_roll->setGeometry(QRect(110, 30, 81, 22));
        doubleSpinBox_k_roll->setDecimals(9);
        doubleSpinBox_k_roll->setSingleStep(1e-05);
        label_75 = new QLabel(groupBox_20);
        label_75->setObjectName(QStringLiteral("label_75"));
        label_75->setGeometry(QRect(20, 10, 71, 20));
        doubleSpinBox_k_heading = new QDoubleSpinBox(groupBox_20);
        doubleSpinBox_k_heading->setObjectName(QStringLiteral("doubleSpinBox_k_heading"));
        doubleSpinBox_k_heading->setGeometry(QRect(15, 30, 81, 22));
        doubleSpinBox_k_heading->setDecimals(9);
        doubleSpinBox_k_heading->setSingleStep(1e-05);
        groupBox_21 = new QGroupBox(tab);
        groupBox_21->setObjectName(QStringLiteral("groupBox_21"));
        groupBox_21->setGeometry(QRect(30, 260, 401, 101));
        doubleSpinBox_k_rudder = new QDoubleSpinBox(groupBox_21);
        doubleSpinBox_k_rudder->setObjectName(QStringLiteral("doubleSpinBox_k_rudder"));
        doubleSpinBox_k_rudder->setGeometry(QRect(210, 30, 81, 22));
        doubleSpinBox_k_rudder->setDecimals(9);
        doubleSpinBox_k_rudder->setSingleStep(1e-05);
        label_71 = new QLabel(groupBox_21);
        label_71->setObjectName(QStringLiteral("label_71"));
        label_71->setGeometry(QRect(215, 10, 71, 20));
        doubleSpinBox_k_div_R_init = new QDoubleSpinBox(groupBox_21);
        doubleSpinBox_k_div_R_init->setObjectName(QStringLiteral("doubleSpinBox_k_div_R_init"));
        doubleSpinBox_k_div_R_init->setGeometry(QRect(210, 70, 81, 22));
        doubleSpinBox_k_div_R_init->setDecimals(9);
        doubleSpinBox_k_div_R_init->setMinimum(0.1);
        doubleSpinBox_k_div_R_init->setSingleStep(0.1);
        doubleSpinBox_k_div_R_init->setValue(0.5);
        label_76 = new QLabel(groupBox_21);
        label_76->setObjectName(QStringLiteral("label_76"));
        label_76->setGeometry(QRect(210, 50, 81, 20));
        label_77 = new QLabel(groupBox_21);
        label_77->setObjectName(QStringLiteral("label_77"));
        label_77->setGeometry(QRect(310, 50, 81, 20));
        doubleSpinBox_k_div_R_speed = new QDoubleSpinBox(groupBox_21);
        doubleSpinBox_k_div_R_speed->setObjectName(QStringLiteral("doubleSpinBox_k_div_R_speed"));
        doubleSpinBox_k_div_R_speed->setGeometry(QRect(310, 70, 81, 22));
        doubleSpinBox_k_div_R_speed->setDecimals(9);
        doubleSpinBox_k_div_R_speed->setMinimum(10);
        doubleSpinBox_k_div_R_speed->setSingleStep(1);
        doubleSpinBox_k_div_R_speed->setValue(20);
        groupBox_22 = new QGroupBox(tab);
        groupBox_22->setObjectName(QStringLiteral("groupBox_22"));
        groupBox_22->setGeometry(QRect(30, 370, 401, 101));
        label_87 = new QLabel(groupBox_22);
        label_87->setObjectName(QStringLiteral("label_87"));
        label_87->setGeometry(QRect(310, 11, 81, 20));
        spinBox_k_div_velocidad = new QSpinBox(groupBox_22);
        spinBox_k_div_velocidad->setObjectName(QStringLiteral("spinBox_k_div_velocidad"));
        spinBox_k_div_velocidad->setEnabled(true);
        spinBox_k_div_velocidad->setGeometry(QRect(310, 30, 81, 22));
        spinBox_k_div_velocidad->setMinimum(10);
        spinBox_k_div_velocidad->setMaximum(10000);
        spinBox_k_div_velocidad->setSingleStep(10);
        spinBox_k_div_velocidad->setValue(700);
        horizontalSlider_k_div_velocidad = new QSlider(groupBox_22);
        horizontalSlider_k_div_velocidad->setObjectName(QStringLiteral("horizontalSlider_k_div_velocidad"));
        horizontalSlider_k_div_velocidad->setGeometry(QRect(20, 70, 361, 20));
        horizontalSlider_k_div_velocidad->setMinimum(10);
        horizontalSlider_k_div_velocidad->setMaximum(10000);
        horizontalSlider_k_div_velocidad->setSingleStep(10);
        horizontalSlider_k_div_velocidad->setValue(700);
        horizontalSlider_k_div_velocidad->setOrientation(Qt::Horizontal);
        tabWidget->addTab(tab, QString());
        tab_HIL = new QWidget();
        tab_HIL->setObjectName(QStringLiteral("tab_HIL"));
        groupBox_3 = new QGroupBox(tab_HIL);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 10, 211, 191));
        layoutWidget_3 = new QWidget(groupBox_3);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 10, 68, 171));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        verticalLayout_7->addWidget(label_6);

        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        verticalLayout_7->addWidget(label_7);

        label_8 = new QLabel(layoutWidget_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        verticalLayout_7->addWidget(label_8);

        layoutWidget_2 = new QWidget(groupBox_3);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(90, 10, 111, 171));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        lcdHILRumbo = new QLCDNumber(layoutWidget_2);
        lcdHILRumbo->setObjectName(QStringLiteral("lcdHILRumbo"));
        lcdHILRumbo->setFont(font1);
        lcdHILRumbo->setDigitCount(4);
        lcdHILRumbo->setProperty("intValue", QVariant(0));

        verticalLayout_6->addWidget(lcdHILRumbo);

        lcdHILPitch = new QLCDNumber(layoutWidget_2);
        lcdHILPitch->setObjectName(QStringLiteral("lcdHILPitch"));
        lcdHILPitch->setDigitCount(4);
        lcdHILPitch->setProperty("intValue", QVariant(0));

        verticalLayout_6->addWidget(lcdHILPitch);

        lcdHILRoll = new QLCDNumber(layoutWidget_2);
        lcdHILRoll->setObjectName(QStringLiteral("lcdHILRoll"));
        lcdHILRoll->setDigitCount(4);
        lcdHILRoll->setProperty("intValue", QVariant(0));

        verticalLayout_6->addWidget(lcdHILRoll);

        groupBox_4 = new QGroupBox(tab_HIL);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 200, 211, 141));
        layoutWidget8 = new QWidget(groupBox_4);
        layoutWidget8->setObjectName(QStringLiteral("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(10, 20, 92, 111));
        verticalLayout_8 = new QVBoxLayout(layoutWidget8);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget8);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font2);

        verticalLayout_8->addWidget(label_9);

        label_10 = new QLabel(layoutWidget8);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font);

        verticalLayout_8->addWidget(label_10);

        layoutWidget9 = new QWidget(groupBox_4);
        layoutWidget9->setObjectName(QStringLiteral("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(90, 20, 111, 111));
        verticalLayout_9 = new QVBoxLayout(layoutWidget9);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        lcdHILVind = new QLCDNumber(layoutWidget9);
        lcdHILVind->setObjectName(QStringLiteral("lcdHILVind"));
        lcdHILVind->setDigitCount(4);
        lcdHILVind->setProperty("intValue", QVariant(0));

        verticalLayout_9->addWidget(lcdHILVind);

        lcdHILAltitude = new QLCDNumber(layoutWidget9);
        lcdHILAltitude->setObjectName(QStringLiteral("lcdHILAltitude"));
        lcdHILAltitude->setDigitCount(5);
        lcdHILAltitude->setProperty("intValue", QVariant(0));

        verticalLayout_9->addWidget(lcdHILAltitude);

        groupBox_5 = new QGroupBox(tab_HIL);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(230, 10, 161, 101));
        lcdHILLatitud = new QLCDNumber(groupBox_5);
        lcdHILLatitud->setObjectName(QStringLiteral("lcdHILLatitud"));
        lcdHILLatitud->setGeometry(QRect(60, 10, 91, 23));
        lcdHILLatitud->setDigitCount(8);
        lcdHILLongitud = new QLCDNumber(groupBox_5);
        lcdHILLongitud->setObjectName(QStringLiteral("lcdHILLongitud"));
        lcdHILLongitud->setGeometry(QRect(60, 40, 91, 23));
        lcdHILLongitud->setDigitCount(8);
        lcdHILAltura = new QLCDNumber(groupBox_5);
        lcdHILAltura->setObjectName(QStringLiteral("lcdHILAltura"));
        lcdHILAltura->setGeometry(QRect(60, 70, 91, 23));
        lcdHILAltura->setDigitCount(8);
        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 10, 46, 31));
        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 40, 46, 21));
        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 70, 46, 21));
        groupBox_6 = new QGroupBox(tab_HIL);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 340, 211, 151));
        layoutWidget_4 = new QWidget(groupBox_6);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(20, 20, 151, 121));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        joystickHILFBWGases = new QSlider(layoutWidget_4);
        joystickHILFBWGases->setObjectName(QStringLiteral("joystickHILFBWGases"));
        joystickHILFBWGases->setMinimum(0);
        joystickHILFBWGases->setMaximum(100);
        joystickHILFBWGases->setOrientation(Qt::Vertical);

        horizontalLayout_3->addWidget(joystickHILFBWGases);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        joystickHILFBWAleron = new QSlider(layoutWidget_4);
        joystickHILFBWAleron->setObjectName(QStringLiteral("joystickHILFBWAleron"));
        joystickHILFBWAleron->setMinimum(-100);
        joystickHILFBWAleron->setMaximum(100);
        joystickHILFBWAleron->setOrientation(Qt::Horizontal);

        verticalLayout_10->addWidget(joystickHILFBWAleron);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        joystickHILFBWProfundidad = new QSlider(layoutWidget_4);
        joystickHILFBWProfundidad->setObjectName(QStringLiteral("joystickHILFBWProfundidad"));
        joystickHILFBWProfundidad->setMinimum(-100);
        joystickHILFBWProfundidad->setMaximum(100);
        joystickHILFBWProfundidad->setOrientation(Qt::Vertical);

        horizontalLayout_4->addWidget(joystickHILFBWProfundidad);

        horizontalSpacer_4 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_10->addLayout(horizontalLayout_4);

        joystickHILFBWRudder = new QSlider(layoutWidget_4);
        joystickHILFBWRudder->setObjectName(QStringLiteral("joystickHILFBWRudder"));
        joystickHILFBWRudder->setMinimum(-100);
        joystickHILFBWRudder->setMaximum(100);
        joystickHILFBWRudder->setOrientation(Qt::Horizontal);

        verticalLayout_10->addWidget(joystickHILFBWRudder);


        horizontalLayout_3->addLayout(verticalLayout_10);

        groupBox_10 = new QGroupBox(tab_HIL);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(230, 110, 341, 91));
        lcdHILAoA = new QLCDNumber(groupBox_10);
        lcdHILAoA->setObjectName(QStringLiteral("lcdHILAoA"));
        lcdHILAoA->setGeometry(QRect(60, 20, 91, 23));
        lcdHILAoA->setDigitCount(8);
        lcdHILbeta = new QLCDNumber(groupBox_10);
        lcdHILbeta->setObjectName(QStringLiteral("lcdHILbeta"));
        lcdHILbeta->setGeometry(QRect(60, 50, 91, 23));
        lcdHILbeta->setDigitCount(8);
        lcdHILhding = new QLCDNumber(groupBox_10);
        lcdHILhding->setObjectName(QStringLiteral("lcdHILhding"));
        lcdHILhding->setGeometry(QRect(230, 20, 91, 23));
        lcdHILhding->setDigitCount(8);
        label_14 = new QLabel(groupBox_10);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 20, 46, 21));
        label_15 = new QLabel(groupBox_10);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 50, 46, 21));
        label_16 = new QLabel(groupBox_10);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(180, 20, 46, 21));
        lcdHILvpath = new QLCDNumber(groupBox_10);
        lcdHILvpath->setObjectName(QStringLiteral("lcdHILvpath"));
        lcdHILvpath->setGeometry(QRect(230, 50, 91, 23));
        lcdHILvpath->setDigitCount(8);
        label_17 = new QLabel(groupBox_10);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(180, 50, 46, 21));
        groupBox_11 = new QGroupBox(tab_HIL);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(410, 10, 161, 101));
        lcdHILQ = new QLCDNumber(groupBox_11);
        lcdHILQ->setObjectName(QStringLiteral("lcdHILQ"));
        lcdHILQ->setGeometry(QRect(40, 10, 111, 23));
        lcdHILQ->setDigitCount(8);
        lcdHILP = new QLCDNumber(groupBox_11);
        lcdHILP->setObjectName(QStringLiteral("lcdHILP"));
        lcdHILP->setGeometry(QRect(40, 40, 111, 23));
        lcdHILP->setDigitCount(8);
        lcdHILR = new QLCDNumber(groupBox_11);
        lcdHILR->setObjectName(QStringLiteral("lcdHILR"));
        lcdHILR->setGeometry(QRect(40, 70, 111, 23));
        lcdHILR->setDigitCount(8);
        label_18 = new QLabel(groupBox_11);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 10, 46, 31));
        label_19 = new QLabel(groupBox_11);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 40, 46, 21));
        label_20 = new QLabel(groupBox_11);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(10, 70, 46, 21));
        groupBox_12 = new QGroupBox(tab_HIL);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        groupBox_12->setGeometry(QRect(230, 200, 341, 91));
        lcdHILMach = new QLCDNumber(groupBox_12);
        lcdHILMach->setObjectName(QStringLiteral("lcdHILMach"));
        lcdHILMach->setGeometry(QRect(60, 20, 91, 23));
        lcdHILMach->setDigitCount(8);
        lcdHILGnorml = new QLCDNumber(groupBox_12);
        lcdHILGnorml->setObjectName(QStringLiteral("lcdHILGnorml"));
        lcdHILGnorml->setGeometry(QRect(60, 50, 51, 23));
        lcdHILGnorml->setDigitCount(5);
        lcdHILVVI = new QLCDNumber(groupBox_12);
        lcdHILVVI->setObjectName(QStringLiteral("lcdHILVVI"));
        lcdHILVVI->setGeometry(QRect(230, 20, 91, 23));
        lcdHILVVI->setDigitCount(8);
        label_21 = new QLabel(groupBox_12);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(10, 20, 46, 21));
        label_22 = new QLabel(groupBox_12);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(10, 50, 46, 21));
        label_23 = new QLabel(groupBox_12);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(180, 20, 46, 21));
        label_24 = new QLabel(groupBox_12);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(130, 50, 46, 21));
        lcdHILGaxial = new QLCDNumber(groupBox_12);
        lcdHILGaxial->setObjectName(QStringLiteral("lcdHILGaxial"));
        lcdHILGaxial->setGeometry(QRect(170, 50, 51, 23));
        lcdHILGaxial->setDigitCount(5);
        lcdHILGside = new QLCDNumber(groupBox_12);
        lcdHILGside->setObjectName(QStringLiteral("lcdHILGside"));
        lcdHILGside->setGeometry(QRect(270, 50, 51, 23));
        lcdHILGside->setDigitCount(5);
        label_25 = new QLabel(groupBox_12);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(230, 50, 46, 21));
        groupBox_13 = new QGroupBox(tab_HIL);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        groupBox_13->setGeometry(QRect(230, 300, 341, 181));
        lcdHILFMSRumbo = new QLCDNumber(groupBox_13);
        lcdHILFMSRumbo->setObjectName(QStringLiteral("lcdHILFMSRumbo"));
        lcdHILFMSRumbo->setGeometry(QRect(20, 50, 111, 31));
        lcdHILFMSRumbo->setFont(font1);
        lcdHILFMSRumbo->setDigitCount(7);
        lcdHILFMSRumbo->setProperty("value", QVariant(0));
        lcdHILFMSRumbo->setProperty("intValue", QVariant(0));
        label_26 = new QLabel(groupBox_13);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(60, 20, 61, 31));
        label_26->setFont(font);
        lcdHILFMSAltura = new QLCDNumber(groupBox_13);
        lcdHILFMSAltura->setObjectName(QStringLiteral("lcdHILFMSAltura"));
        lcdHILFMSAltura->setGeometry(QRect(150, 50, 81, 31));
        lcdHILFMSAltura->setFont(font1);
        lcdHILFMSAltura->setDigitCount(5);
        lcdHILFMSAltura->setProperty("value", QVariant(0));
        lcdHILFMSAltura->setProperty("intValue", QVariant(0));
        label_27 = new QLabel(groupBox_13);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(170, 20, 51, 31));
        label_27->setFont(font);
        lcdHILFMSSpeed = new QLCDNumber(groupBox_13);
        lcdHILFMSSpeed->setObjectName(QStringLiteral("lcdHILFMSSpeed"));
        lcdHILFMSSpeed->setGeometry(QRect(250, 50, 51, 31));
        lcdHILFMSSpeed->setFont(font1);
        lcdHILFMSSpeed->setDigitCount(3);
        lcdHILFMSSpeed->setProperty("value", QVariant(0));
        lcdHILFMSSpeed->setProperty("intValue", QVariant(0));
        label_28 = new QLabel(groupBox_13);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(250, 20, 51, 31));
        label_28->setFont(font);
        pushButtonHILFMSPrevious = new QPushButton(groupBox_13);
        pushButtonHILFMSPrevious->setObjectName(QStringLiteral("pushButtonHILFMSPrevious"));
        pushButtonHILFMSPrevious->setEnabled(false);
        pushButtonHILFMSPrevious->setGeometry(QRect(170, 140, 75, 23));
        pushButtonHILFMSNext = new QPushButton(groupBox_13);
        pushButtonHILFMSNext->setObjectName(QStringLiteral("pushButtonHILFMSNext"));
        pushButtonHILFMSNext->setEnabled(false);
        pushButtonHILFMSNext->setGeometry(QRect(250, 140, 75, 23));
        label_29 = new QLabel(groupBox_13);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(170, 90, 81, 41));
        label_29->setFont(font);
        lcdHILFMSWaypoint = new QLCDNumber(groupBox_13);
        lcdHILFMSWaypoint->setObjectName(QStringLiteral("lcdHILFMSWaypoint"));
        lcdHILFMSWaypoint->setGeometry(QRect(250, 90, 71, 41));
        lcdHILFMSWaypoint->setFont(font1);
        lcdHILFMSWaypoint->setDigitCount(3);
        lcdHILFMSWaypoint->setProperty("value", QVariant(0));
        lcdHILFMSWaypoint->setProperty("intValue", QVariant(0));
        lcdHILFMSDistancia = new QLCDNumber(groupBox_13);
        lcdHILFMSDistancia->setObjectName(QStringLiteral("lcdHILFMSDistancia"));
        lcdHILFMSDistancia->setGeometry(QRect(20, 120, 111, 31));
        lcdHILFMSDistancia->setFont(font1);
        lcdHILFMSDistancia->setDigitCount(7);
        lcdHILFMSDistancia->setProperty("value", QVariant(0));
        lcdHILFMSDistancia->setProperty("intValue", QVariant(0));
        label_30 = new QLabel(groupBox_13);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(40, 90, 71, 31));
        label_30->setFont(font);
        tabWidget->addTab(tab_HIL, QString());
        tab_setup = new QWidget();
        tab_setup->setObjectName(QStringLiteral("tab_setup"));
        autopilotCommunication = new QGroupBox(tab_setup);
        autopilotCommunication->setObjectName(QStringLiteral("autopilotCommunication"));
        autopilotCommunication->setGeometry(QRect(10, 10, 251, 111));
        comboBoxBaudSerie = new QComboBox(autopilotCommunication);
        comboBoxBaudSerie->setObjectName(QStringLiteral("comboBoxBaudSerie"));
        comboBoxBaudSerie->setGeometry(QRect(130, 20, 111, 22));
        comboBoxPuertoSerie = new QComboBox(autopilotCommunication);
        comboBoxPuertoSerie->setObjectName(QStringLiteral("comboBoxPuertoSerie"));
        comboBoxPuertoSerie->setGeometry(QRect(10, 20, 111, 22));
        pushButtonSerialOpen = new QPushButton(autopilotCommunication);
        pushButtonSerialOpen->setObjectName(QStringLiteral("pushButtonSerialOpen"));
        pushButtonSerialOpen->setGeometry(QRect(10, 60, 75, 23));
        pushButtonSerialClose = new QPushButton(autopilotCommunication);
        pushButtonSerialClose->setObjectName(QStringLiteral("pushButtonSerialClose"));
        pushButtonSerialClose->setGeometry(QRect(90, 60, 75, 23));
        groupBox = new QGroupBox(tab_setup);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 130, 581, 80));
        lineEditSerialCommand = new QLineEdit(groupBox);
        lineEditSerialCommand->setObjectName(QStringLiteral("lineEditSerialCommand"));
        lineEditSerialCommand->setEnabled(true);
        lineEditSerialCommand->setGeometry(QRect(10, 20, 241, 20));
        lineEditSerialReceived = new QLineEdit(groupBox);
        lineEditSerialReceived->setObjectName(QStringLiteral("lineEditSerialReceived"));
        lineEditSerialReceived->setEnabled(true);
        lineEditSerialReceived->setGeometry(QRect(10, 50, 561, 20));
        pushButtonSerialSend = new QPushButton(groupBox);
        pushButtonSerialSend->setObjectName(QStringLiteral("pushButtonSerialSend"));
        pushButtonSerialSend->setEnabled(false);
        pushButtonSerialSend->setGeometry(QRect(260, 20, 75, 23));
        pushButtonSerialSend->setCheckable(false);
        groupBox_2 = new QGroupBox(tab_setup);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(270, 10, 311, 111));
        lineEditXPlaneNumTramas = new QLineEdit(groupBox_2);
        lineEditXPlaneNumTramas->setObjectName(QStringLiteral("lineEditXPlaneNumTramas"));
        lineEditXPlaneNumTramas->setGeometry(QRect(70, 20, 221, 20));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 20, 51, 21));
        lineEditXPlaneIPTx = new QLineEdit(groupBox_2);
        lineEditXPlaneIPTx->setObjectName(QStringLiteral("lineEditXPlaneIPTx"));
        lineEditXPlaneIPTx->setGeometry(QRect(70, 50, 91, 20));
        spinBoxXPlaneUDPTxPort = new QSpinBox(groupBox_2);
        spinBoxXPlaneUDPTxPort->setObjectName(QStringLiteral("spinBoxXPlaneUDPTxPort"));
        spinBoxXPlaneUDPTxPort->setGeometry(QRect(230, 50, 61, 22));
        spinBoxXPlaneUDPTxPort->setMaximum(65535);
        spinBoxXPlaneUDPTxPort->setValue(49000);
        label_84 = new QLabel(groupBox_2);
        label_84->setObjectName(QStringLiteral("label_84"));
        label_84->setGeometry(QRect(10, 50, 51, 21));
        label_85 = new QLabel(groupBox_2);
        label_85->setObjectName(QStringLiteral("label_85"));
        label_85->setGeometry(QRect(170, 50, 51, 21));
        pushButtonXPlaneClose = new QPushButton(groupBox_2);
        pushButtonXPlaneClose->setObjectName(QStringLiteral("pushButtonXPlaneClose"));
        pushButtonXPlaneClose->setEnabled(false);
        pushButtonXPlaneClose->setGeometry(QRect(220, 80, 75, 23));
        spinBoxXPlaneUDPPort = new QSpinBox(groupBox_2);
        spinBoxXPlaneUDPPort->setObjectName(QStringLiteral("spinBoxXPlaneUDPPort"));
        spinBoxXPlaneUDPPort->setGeometry(QRect(70, 80, 61, 22));
        spinBoxXPlaneUDPPort->setMaximum(65535);
        spinBoxXPlaneUDPPort->setValue(49003);
        pushButtonXPlaneOpen = new QPushButton(groupBox_2);
        pushButtonXPlaneOpen->setObjectName(QStringLiteral("pushButtonXPlaneOpen"));
        pushButtonXPlaneOpen->setGeometry(QRect(140, 80, 75, 23));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(15, 80, 51, 21));
        tableViewXPlaneReceived = new QTableView(tab_setup);
        tableViewXPlaneReceived->setObjectName(QStringLiteral("tableViewXPlaneReceived"));
        tableViewXPlaneReceived->setGeometry(QRect(10, 220, 581, 271));
        tabWidget->addTab(tab_setup, QString());
        groupBox_7 = new QGroupBox(centralWidget);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(100, 410, 111, 131));
        layoutWidget10 = new QWidget(groupBox_7);
        layoutWidget10->setObjectName(QStringLiteral("layoutWidget10"));
        layoutWidget10->setGeometry(QRect(10, 10, 91, 111));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget10);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        joystickGases = new QSlider(layoutWidget10);
        joystickGases->setObjectName(QStringLiteral("joystickGases"));
        joystickGases->setMinimum(0);
        joystickGases->setMaximum(100);
        joystickGases->setOrientation(Qt::Vertical);

        horizontalLayout_2->addWidget(joystickGases);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        joystickAleron = new QSlider(layoutWidget10);
        joystickAleron->setObjectName(QStringLiteral("joystickAleron"));
        joystickAleron->setMinimum(-100);
        joystickAleron->setMaximum(100);
        joystickAleron->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(joystickAleron);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        joystickProfundidad = new QSlider(layoutWidget10);
        joystickProfundidad->setObjectName(QStringLiteral("joystickProfundidad"));
        joystickProfundidad->setMinimum(-100);
        joystickProfundidad->setMaximum(100);
        joystickProfundidad->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(joystickProfundidad);

        horizontalSpacer_2 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        joystickRudder = new QSlider(layoutWidget10);
        joystickRudder->setObjectName(QStringLiteral("joystickRudder"));
        joystickRudder->setMinimum(-100);
        joystickRudder->setMaximum(100);
        joystickRudder->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(joystickRudder);


        horizontalLayout_2->addLayout(verticalLayout);

        groupBox_8 = new QGroupBox(centralWidget);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(0, 410, 101, 131));
        layoutWidget11 = new QWidget(groupBox_8);
        layoutWidget11->setObjectName(QStringLiteral("layoutWidget11"));
        layoutWidget11->setGeometry(QRect(10, 20, 87, 42));
        verticalLayout_5 = new QVBoxLayout(layoutWidget11);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        radioButtonAutopilotOn = new QRadioButton(layoutWidget11);
        radioButtonAutopilotOn->setObjectName(QStringLiteral("radioButtonAutopilotOn"));

        verticalLayout_5->addWidget(radioButtonAutopilotOn);

        radioButtonAutopilotOff = new QRadioButton(layoutWidget11);
        radioButtonAutopilotOff->setObjectName(QStringLiteral("radioButtonAutopilotOff"));
        radioButtonAutopilotOff->setChecked(true);

        verticalLayout_5->addWidget(radioButtonAutopilotOff);

        layoutWidget12 = new QWidget(groupBox_8);
        layoutWidget12->setObjectName(QStringLiteral("layoutWidget12"));
        layoutWidget12->setGeometry(QRect(10, 80, 85, 42));
        verticalLayout_4 = new QVBoxLayout(layoutWidget12);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        radioButtonAutotrimOn = new QRadioButton(layoutWidget12);
        radioButtonAutotrimOn->setObjectName(QStringLiteral("radioButtonAutotrimOn"));
        radioButtonAutotrimOn->setChecked(false);

        verticalLayout_4->addWidget(radioButtonAutotrimOn);

        radioButtonAutotrimOff = new QRadioButton(layoutWidget12);
        radioButtonAutotrimOff->setObjectName(QStringLiteral("radioButtonAutotrimOff"));
        radioButtonAutotrimOff->setChecked(true);

        verticalLayout_4->addWidget(radioButtonAutotrimOff);

        groupBox_9 = new QGroupBox(centralWidget);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(10, 210, 201, 201));
        layoutWidget13 = new QWidget(groupBox_9);
        layoutWidget13->setObjectName(QStringLiteral("layoutWidget13"));
        layoutWidget13->setGeometry(QRect(80, 20, 111, 171));
        verticalLayout_2 = new QVBoxLayout(layoutWidget13);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lcdRumbo = new QLCDNumber(layoutWidget13);
        lcdRumbo->setObjectName(QStringLiteral("lcdRumbo"));
        lcdRumbo->setFont(font1);
        lcdRumbo->setDigitCount(4);
        lcdRumbo->setProperty("intValue", QVariant(0));

        verticalLayout_2->addWidget(lcdRumbo);

        lcdPitch = new QLCDNumber(layoutWidget13);
        lcdPitch->setObjectName(QStringLiteral("lcdPitch"));
        lcdPitch->setDigitCount(4);
        lcdPitch->setProperty("intValue", QVariant(0));

        verticalLayout_2->addWidget(lcdPitch);

        lcdRoll = new QLCDNumber(layoutWidget13);
        lcdRoll->setObjectName(QStringLiteral("lcdRoll"));
        lcdRoll->setDigitCount(4);
        lcdRoll->setProperty("intValue", QVariant(0));

        verticalLayout_2->addWidget(lcdRoll);

        layoutWidget14 = new QWidget(groupBox_9);
        layoutWidget14->setObjectName(QStringLiteral("layoutWidget14"));
        layoutWidget14->setGeometry(QRect(10, 20, 68, 171));
        verticalLayout_3 = new QVBoxLayout(layoutWidget14);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget14);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        verticalLayout_3->addWidget(label);

        label_2 = new QLabel(layoutWidget14);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout_3->addWidget(label_2);

        label_3 = new QLabel(layoutWidget14);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout_3->addWidget(label_3);

        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 200, 200));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 840, 21));
        menuEPF = new QMenu(menuBar);
        menuEPF->setObjectName(QStringLiteral("menuEPF"));
        menuSelector_de_velocidad = new QMenu(menuEPF);
        menuSelector_de_velocidad->setObjectName(QStringLiteral("menuSelector_de_velocidad"));
        menuSelector_de_altura = new QMenu(menuEPF);
        menuSelector_de_altura->setObjectName(QStringLiteral("menuSelector_de_altura"));
        menuAyuda = new QMenu(menuBar);
        menuAyuda->setObjectName(QStringLiteral("menuAyuda"));
        menuGoogle_Earth = new QMenu(menuBar);
        menuGoogle_Earth->setObjectName(QStringLiteral("menuGoogle_Earth"));
        menuPar_metros = new QMenu(menuBar);
        menuPar_metros->setObjectName(QStringLiteral("menuPar_metros"));
        menuSensores_Anal_gicos = new QMenu(menuPar_metros);
        menuSensores_Anal_gicos->setObjectName(QStringLiteral("menuSensores_Anal_gicos"));
        menuSensores_Inerciales = new QMenu(menuPar_metros);
        menuSensores_Inerciales->setObjectName(QStringLiteral("menuSensores_Inerciales"));
        menuAHRS = new QMenu(menuPar_metros);
        menuAHRS->setObjectName(QStringLiteral("menuAHRS"));
        menuADS = new QMenu(menuPar_metros);
        menuADS->setObjectName(QStringLiteral("menuADS"));
        menuGPS = new QMenu(menuPar_metros);
        menuGPS->setObjectName(QStringLiteral("menuGPS"));
        menuServosIn = new QMenu(menuPar_metros);
        menuServosIn->setObjectName(QStringLiteral("menuServosIn"));
        menuFly_By_Wire = new QMenu(menuPar_metros);
        menuFly_By_Wire->setObjectName(QStringLiteral("menuFly_By_Wire"));
        menuFMS_Fly_Plan = new QMenu(menuPar_metros);
        menuFMS_Fly_Plan->setObjectName(QStringLiteral("menuFMS_Fly_Plan"));
        menuFMS_HIL_Fly_Plan = new QMenu(menuPar_metros);
        menuFMS_HIL_Fly_Plan->setObjectName(QStringLiteral("menuFMS_HIL_Fly_Plan"));
        menuControl = new QMenu(menuBar);
        menuControl->setObjectName(QStringLiteral("menuControl"));
        menuXPlane = new QMenu(menuBar);
        menuXPlane->setObjectName(QStringLiteral("menuXPlane"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        Control_toolBar = new QToolBar(MainWindow);
        Control_toolBar->setObjectName(QStringLiteral("Control_toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, Control_toolBar);

        menuBar->addAction(menuEPF->menuAction());
        menuBar->addAction(menuPar_metros->menuAction());
        menuBar->addAction(menuGoogle_Earth->menuAction());
        menuBar->addAction(menuControl->menuAction());
        menuBar->addAction(menuXPlane->menuAction());
        menuBar->addAction(menuAyuda->menuAction());
        menuEPF->addAction(actionAutopilot_On);
        menuEPF->addAction(actionAutopilot_off);
        menuEPF->addAction(actionAutotrim_On);
        menuEPF->addAction(actionAutotrim_Off);
        menuEPF->addAction(menuSelector_de_velocidad->menuAction());
        menuEPF->addAction(menuSelector_de_altura->menuAction());
        menuEPF->addAction(actionAutopilotReset);
        menuSelector_de_velocidad->addAction(actionSelectorSpeedGPS);
        menuSelector_de_velocidad->addAction(actionSelectorSpeedTubo_Pitot);
        menuSelector_de_altura->addAction(actionSelectorAlturaGPS);
        menuSelector_de_altura->addAction(actionSelectorAlturaBaro);
        menuAyuda->addAction(actionAbout);
        menuGoogle_Earth->addAction(actionGoogleReset);
        menuPar_metros->addAction(actionParamStart);
        menuPar_metros->addAction(actionParamStop);
        menuPar_metros->addSeparator();
        menuPar_metros->addAction(menuSensores_Anal_gicos->menuAction());
        menuPar_metros->addAction(menuSensores_Inerciales->menuAction());
        menuPar_metros->addAction(menuAHRS->menuAction());
        menuPar_metros->addSeparator();
        menuPar_metros->addAction(menuADS->menuAction());
        menuPar_metros->addAction(menuGPS->menuAction());
        menuPar_metros->addSeparator();
        menuPar_metros->addAction(menuServosIn->menuAction());
        menuPar_metros->addAction(menuFly_By_Wire->menuAction());
        menuPar_metros->addSeparator();
        menuPar_metros->addAction(menuFMS_Fly_Plan->menuAction());
        menuPar_metros->addAction(menuFMS_HIL_Fly_Plan->menuAction());
        menuPar_metros->addSeparator();
        menuPar_metros->addAction(actionEmulaci_n);
        menuSensores_Anal_gicos->addAction(actionAnalogOn);
        menuSensores_Anal_gicos->addAction(actionAnalogOff);
        menuSensores_Inerciales->addAction(actionInercialOn);
        menuSensores_Inerciales->addAction(actionInercialOff);
        menuAHRS->addAction(actionAHRSOn);
        menuAHRS->addAction(actionAHRSOff);
        menuADS->addAction(actionSTATOn);
        menuADS->addAction(actionSTATOff);
        menuGPS->addAction(actionGPSOn);
        menuGPS->addAction(actionGPSOff);
        menuServosIn->addAction(actionServosOn);
        menuServosIn->addAction(actionServosOff);
        menuFly_By_Wire->addAction(actionFBWOn);
        menuFly_By_Wire->addAction(actionFBWOff);
        menuFMS_Fly_Plan->addAction(actionFMSFlyPlanOn);
        menuFMS_Fly_Plan->addAction(actionFMSFlyPlanOff);
        menuFMS_HIL_Fly_Plan->addAction(actionFMSHILFlyPlanOn);
        menuFMS_HIL_Fly_Plan->addAction(actionFMSHILFlyPlanOff);
        menuControl->addAction(actionPlane_RC);
        menuControl->addAction(actionPlane_Joystick);
        menuXPlane->addAction(actionHIL_Load_Gando);
        menuXPlane->addAction(actionHIL_Load_Ruta_Isla);
        menuXPlane->addAction(actionHIL_Load_Alternativa);
        menuXPlane->addAction(actionHIL_Load_Vuelo);
        menuXPlane->addAction(actionHIL_NEXT_WAYPOINT);
        menuXPlane->addAction(actionHIL_PREV_WAYPOINT);
        menuXPlane->addSeparator();
        menuXPlane->addAction(actionHILControlJoystick);
        menuXPlane->addAction(actionHILControlRC);
        menuXPlane->addAction(actionTest);
        mainToolBar->addAction(actionAutopilot_On);
        mainToolBar->addAction(actionAutopilot_off);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAutotrim_On);
        mainToolBar->addAction(actionAutotrim_Off);
        mainToolBar->addSeparator();
        Control_toolBar->addAction(actionHILControlJoystick);
        Control_toolBar->addAction(actionHILControlRC);
        Control_toolBar->addSeparator();
        Control_toolBar->addAction(actionPlane_Joystick);
        Control_toolBar->addAction(actionPlane_RC);
        Control_toolBar->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider_k_div_velocidad, SIGNAL(valueChanged(int)), spinBox_k_div_velocidad, SLOT(setValue(int)));
        QObject::connect(spinBox_k_div_velocidad, SIGNAL(valueChanged(int)), horizontalSlider_k_div_velocidad, SLOT(setValue(int)));

        tabWidget->setCurrentIndex(3);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "EPF Ground Control Station", 0));
        actionAutopilot_On->setText(QApplication::translate("MainWindow", "Autopilot On", 0));
        actionAutopilot_off->setText(QApplication::translate("MainWindow", "Autopilot Off", 0));
        actionAutotrim_On->setText(QApplication::translate("MainWindow", "Autotrim On", 0));
        actionAutotrim_Off->setText(QApplication::translate("MainWindow", "Autotrim Off", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        actionGoogleReset->setText(QApplication::translate("MainWindow", "Reset", 0));
        actionAnalogOn->setText(QApplication::translate("MainWindow", "On", 0));
        actionAnalogOff->setText(QApplication::translate("MainWindow", "Off", 0));
        actionInercialOn->setText(QApplication::translate("MainWindow", "On", 0));
        actionInercialOff->setText(QApplication::translate("MainWindow", "Off", 0));
        actionAHRSOn->setText(QApplication::translate("MainWindow", "On", 0));
        actionAHRSOff->setText(QApplication::translate("MainWindow", "Off", 0));
        actionSTATOn->setText(QApplication::translate("MainWindow", "On", 0));
        actionSTATOff->setText(QApplication::translate("MainWindow", "Off", 0));
        actionGPSOn->setText(QApplication::translate("MainWindow", "On", 0));
        actionGPSOff->setText(QApplication::translate("MainWindow", "Off", 0));
        actionServosOn->setText(QApplication::translate("MainWindow", "On", 0));
        actionServosOff->setText(QApplication::translate("MainWindow", "Off", 0));
        actionParamStop->setText(QApplication::translate("MainWindow", "Stop", 0));
        actionHILControlJoystick->setText(QApplication::translate("MainWindow", "Joystick", 0));
#ifndef QT_NO_TOOLTIP
        actionHILControlJoystick->setToolTip(QApplication::translate("MainWindow", "Control manual del XPlane", 0));
#endif // QT_NO_TOOLTIP
        actionHILControlRC->setText(QApplication::translate("MainWindow", "Fly-by-wire", 0));
#ifndef QT_NO_TOOLTIP
        actionHILControlRC->setToolTip(QApplication::translate("MainWindow", "Control del XPlane con el ordenador de abordo", 0));
#endif // QT_NO_TOOLTIP
        actionVelocidad->setText(QApplication::translate("MainWindow", "Velocidad", 0));
        actionSelectorSpeedGPS->setText(QApplication::translate("MainWindow", "GPS", 0));
        actionSelectorSpeedTubo_Pitot->setText(QApplication::translate("MainWindow", "Tubo Pitot", 0));
        actionParamStart->setText(QApplication::translate("MainWindow", "Start", 0));
        actionAutopilotReset->setText(QApplication::translate("MainWindow", "Reset", 0));
        actionSelectorAlturaGPS->setText(QApplication::translate("MainWindow", "GPS", 0));
        actionSelectorAlturaBaro->setText(QApplication::translate("MainWindow", "Baro", 0));
        actionEmulaci_n->setText(QApplication::translate("MainWindow", "Emulaci\303\263n", 0));
        actionFBWOn->setText(QApplication::translate("MainWindow", "On", 0));
        actionFBWOff->setText(QApplication::translate("MainWindow", "Off", 0));
        actionHIL_Load_Gando->setText(QApplication::translate("MainWindow", "HIL Load Gando", 0));
        actionHIL_Load_Ruta_Isla->setText(QApplication::translate("MainWindow", "HIL Load Ruta Isla", 0));
        actionHIL_Load_Alternativa->setText(QApplication::translate("MainWindow", "HIL Load Alternativa", 0));
        actionHIL_Load_Vuelo->setText(QApplication::translate("MainWindow", "HIL Load Vuelo", 0));
        actionHIL_NEXT_WAYPOINT->setText(QApplication::translate("MainWindow", "HIL NEXT WAYPOINT", 0));
        actionHIL_PREV_WAYPOINT->setText(QApplication::translate("MainWindow", "HIL PREV WAYPOINT", 0));
        actionFMSFlyPlanOn->setText(QApplication::translate("MainWindow", "On", 0));
        actionFMSFlyPlanOff->setText(QApplication::translate("MainWindow", "Off", 0));
        actionFMSHILFlyPlanOn->setText(QApplication::translate("MainWindow", "On", 0));
        actionFMSHILFlyPlanOff->setText(QApplication::translate("MainWindow", "Off", 0));
        actionPlane_Joystick->setText(QApplication::translate("MainWindow", "Plane Joystick", 0));
        actionPlane_RC->setText(QApplication::translate("MainWindow", "Plane RC", 0));
        actionTest->setText(QApplication::translate("MainWindow", "test", 0));
        groupBox_14->setTitle(QApplication::translate("MainWindow", "AHRS Board", 0));
        label_31->setText(QApplication::translate("MainWindow", "Heading:", 0));
        label_32->setText(QApplication::translate("MainWindow", "Pitch:", 0));
        label_33->setText(QApplication::translate("MainWindow", "Roll:", 0));
        groupBox_15->setTitle(QApplication::translate("MainWindow", "State Report", 0));
        checkBoxStatusAnalog->setText(QApplication::translate("MainWindow", "Analog", 0));
        checkBoxStatusInerciales->setText(QApplication::translate("MainWindow", "Inerciales", 0));
        checkBoxStatusAHRS->setText(QApplication::translate("MainWindow", "AHRS", 0));
        checkBoxStatusStat->setText(QApplication::translate("MainWindow", "Stat", 0));
        checkBoxStatusGPS->setText(QApplication::translate("MainWindow", "GPS", 0));
        checkBoxStatusServos->setText(QApplication::translate("MainWindow", "Servos", 0));
        checkBoxStatusAutotrim->setText(QApplication::translate("MainWindow", "Autotrim", 0));
        checkBoxStatusAutopilot->setText(QApplication::translate("MainWindow", "Autopilot", 0));
        pushButtonParamReadAll->setText(QApplication::translate("MainWindow", "Read All", 0));
        groupBox_16->setTitle(QApplication::translate("MainWindow", "Gyros", 0));
        label_34->setText(QApplication::translate("MainWindow", "Q", 0));
        label_35->setText(QApplication::translate("MainWindow", "P", 0));
        label_36->setText(QApplication::translate("MainWindow", "R", 0));
        groupBox_17->setTitle(QApplication::translate("MainWindow", "Aceler\303\263metros", 0));
        label_37->setText(QApplication::translate("MainWindow", "X", 0));
        label_38->setText(QApplication::translate("MainWindow", "Y", 0));
        label_39->setText(QApplication::translate("MainWindow", "Z", 0));
        groupBox_18->setTitle(QApplication::translate("MainWindow", "Magnet\303\263metros", 0));
        label_40->setText(QApplication::translate("MainWindow", "X", 0));
        label_41->setText(QApplication::translate("MainWindow", "Y", 0));
        label_42->setText(QApplication::translate("MainWindow", "Z", 0));
        label_51->setText(QApplication::translate("MainWindow", "Rumbo", 0));
        label_52->setText(QApplication::translate("MainWindow", "Altura(ft)", 0));
        label_53->setText(QApplication::translate("MainWindow", "Speed", 0));
        label_54->setText(QApplication::translate("MainWindow", "Distancia (m)", 0));
        label_55->setText(QApplication::translate("MainWindow", "Waypoint", 0));
        pushButtonFMSPrevious->setText(QApplication::translate("MainWindow", "Previous", 0));
        pushButtonFMSNext->setText(QApplication::translate("MainWindow", "Next", 0));
        radioButtonAutopilotRCOn->setText(QApplication::translate("MainWindow", "Autopilot On", 0));
        radioButtonAutopilotRCOff->setText(QApplication::translate("MainWindow", "Autopilot Off", 0));
        radioButtonAutotrimRCOn->setText(QApplication::translate("MainWindow", "Autotrim On", 0));
        radioButtonAutotrimRCOff->setText(QApplication::translate("MainWindow", "Autotrim Off", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "FMS", 0));
        label_136->setText(QApplication::translate("MainWindow", "Altura", 0));
        label_137->setText(QApplication::translate("MainWindow", "Rumbo", 0));
        label_138->setText(QApplication::translate("MainWindow", "Speed", 0));
        label_139->setText(QApplication::translate("MainWindow", "Latitud", 0));
        label_140->setText(QApplication::translate("MainWindow", "Longitud", 0));
        checkBoxGPSPositionFix->setText(QApplication::translate("MainWindow", "GPSPositionFix", 0));
        label_141->setText(QApplication::translate("MainWindow", "SatellitesUsed", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("MainWindow", "GPS", 0));
        label_110->setText(QApplication::translate("MainWindow", "1", 0));
        label_111->setText(QApplication::translate("MainWindow", "2", 0));
        label_112->setText(QApplication::translate("MainWindow", "3", 0));
        label_113->setText(QApplication::translate("MainWindow", "4", 0));
        label_114->setText(QApplication::translate("MainWindow", "5", 0));
        label_115->setText(QApplication::translate("MainWindow", "6", 0));
        label_116->setText(QApplication::translate("MainWindow", "7", 0));
        label_117->setText(QApplication::translate("MainWindow", "8", 0));
        label_118->setText(QApplication::translate("MainWindow", "9", 0));
        label_119->setText(QApplication::translate("MainWindow", "10", 0));
        label_120->setText(QApplication::translate("MainWindow", "11", 0));
        label_121->setText(QApplication::translate("MainWindow", "12", 0));
        label_78->setText(QApplication::translate("MainWindow", "+1", 0));
        label_79->setText(QApplication::translate("MainWindow", "0", 0));
        label_80->setText(QApplication::translate("MainWindow", "-1", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2), QApplication::translate("MainWindow", "ServosIn", 0));
        label_43->setText(QApplication::translate("MainWindow", "1", 0));
        label_44->setText(QApplication::translate("MainWindow", "2", 0));
        label_45->setText(QApplication::translate("MainWindow", "3", 0));
        label_46->setText(QApplication::translate("MainWindow", "4", 0));
        label_48->setText(QApplication::translate("MainWindow", "5", 0));
        label_50->setText(QApplication::translate("MainWindow", "6", 0));
        label_49->setText(QApplication::translate("MainWindow", "7", 0));
        label_47->setText(QApplication::translate("MainWindow", "8", 0));
        label_98->setText(QApplication::translate("MainWindow", "9", 0));
        label_102->setText(QApplication::translate("MainWindow", "10", 0));
        label_99->setText(QApplication::translate("MainWindow", "11", 0));
        label_104->setText(QApplication::translate("MainWindow", "12", 0));
        label_100->setText(QApplication::translate("MainWindow", "13", 0));
        label_105->setText(QApplication::translate("MainWindow", "14", 0));
        label_107->setText(QApplication::translate("MainWindow", "15", 0));
        label_106->setText(QApplication::translate("MainWindow", "16", 0));
        label_103->setText(QApplication::translate("MainWindow", "17", 0));
        label_101->setText(QApplication::translate("MainWindow", "18", 0));
        label_109->setText(QApplication::translate("MainWindow", "19", 0));
        label_108->setText(QApplication::translate("MainWindow", "20", 0));
        label_83->setText(QApplication::translate("MainWindow", "+1", 0));
        label_82->setText(QApplication::translate("MainWindow", "0", 0));
        label_81->setText(QApplication::translate("MainWindow", "-1", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("MainWindow", "ServosOut", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_10), QApplication::translate("MainWindow", "Fly-by-wire", 0));
        label_56->setText(QApplication::translate("MainWindow", "Par\303\241metros", 0));
        label_57->setText(QApplication::translate("MainWindow", "FMS", 0));
        label_58->setText(QApplication::translate("MainWindow", "Servos", 0));
        label_59->setText(QApplication::translate("MainWindow", "milisegundos", 0));
        label_60->setText(QApplication::translate("MainWindow", "milisegundos", 0));
        label_61->setText(QApplication::translate("MainWindow", "milisegundos", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("MainWindow", "Refresco", 0));
        groupBox_34->setTitle(QApplication::translate("MainWindow", "Analog", 0));
        label_122->setText(QApplication::translate("MainWindow", "temp", 0));
        label_123->setText(QApplication::translate("MainWindow", "Vbatt", 0));
        label_124->setText(QApplication::translate("MainWindow", "baro", 0));
        label_125->setText(QApplication::translate("MainWindow", "Altura", 0));
        label_126->setText(QApplication::translate("MainWindow", "pitot", 0));
        label_127->setText(QApplication::translate("MainWindow", "Speed", 0));
        label_129->setText(QApplication::translate("MainWindow", "Longitud", 0));
        label_131->setText(QApplication::translate("MainWindow", "Speed", 0));
        label_130->setText(QApplication::translate("MainWindow", "Altura", 0));
        label_128->setText(QApplication::translate("MainWindow", "Latitud", 0));
        label_132->setText(QApplication::translate("MainWindow", "Rumbo", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QApplication::translate("MainWindow", "Fast GPS", 0));
        checkBoxFastPositionFix->setText(QApplication::translate("MainWindow", "GPSPositionFixIndicator", 0));
        label_133->setText(QApplication::translate("MainWindow", "GPSSatellitesUsed", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_8), QApplication::translate("MainWindow", "GPS status", 0));
        label_134->setText(QApplication::translate("MainWindow", "SensorDSC", 0));
        label_142->setText(QApplication::translate("MainWindow", "%", 0));
        label_135->setText(QApplication::translate("MainWindow", "ControlDSC", 0));
        label_143->setText(QApplication::translate("MainWindow", "%", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_9), QApplication::translate("MainWindow", "Uso de la CPU", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_flightdata), QApplication::translate("MainWindow", "Datos de vuelo", 0));
        groupBox_19->setTitle(QApplication::translate("MainWindow", "Control de altura", 0));
        label_62->setText(QApplication::translate("MainWindow", "k_elev", 0));
        label_63->setText(QApplication::translate("MainWindow", "k_int_pitch", 0));
        label_64->setText(QApplication::translate("MainWindow", "k_div_Q_init", 0));
        label_65->setText(QApplication::translate("MainWindow", "k_div_Q_speed", 0));
        label_66->setText(QApplication::translate("MainWindow", "k_pitch", 0));
        label_67->setText(QApplication::translate("MainWindow", "k_altura", 0));
        label_68->setText(QApplication::translate("MainWindow", "k_int_altura", 0));
        label_69->setText(QApplication::translate("MainWindow", "k_VVI", 0));
        pushButtonAutopilotParamLoad->setText(QApplication::translate("MainWindow", "Load", 0));
        pushButtonAutopilotParamStore->setText(QApplication::translate("MainWindow", "Store", 0));
        groupBox_20->setTitle(QApplication::translate("MainWindow", "Control de rumbo", 0));
        label_70->setText(QApplication::translate("MainWindow", "k_airln", 0));
        label_72->setText(QApplication::translate("MainWindow", "k_div_P_init", 0));
        label_73->setText(QApplication::translate("MainWindow", "k_div_P_speed", 0));
        label_74->setText(QApplication::translate("MainWindow", "k_roll", 0));
        label_75->setText(QApplication::translate("MainWindow", "k_heading", 0));
        groupBox_21->setTitle(QApplication::translate("MainWindow", "Control de rudder", 0));
        label_71->setText(QApplication::translate("MainWindow", "k_rudder", 0));
        label_76->setText(QApplication::translate("MainWindow", "k_div_R_init", 0));
        label_77->setText(QApplication::translate("MainWindow", "k_div_R_speed", 0));
        groupBox_22->setTitle(QApplication::translate("MainWindow", "Control de Velocidad", 0));
        label_87->setText(QApplication::translate("MainWindow", "k_div_velocidad", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Autopilot Param", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "AHRS", 0));
        label_6->setText(QApplication::translate("MainWindow", "Heading:", 0));
        label_7->setText(QApplication::translate("MainWindow", "Pitch:", 0));
        label_8->setText(QApplication::translate("MainWindow", "Roll:", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "ADS", 0));
        label_9->setText(QApplication::translate("MainWindow", "Vind (kias):", 0));
        label_10->setText(QApplication::translate("MainWindow", "Altura (ft):", 0));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "GPS", 0));
        label_11->setText(QApplication::translate("MainWindow", "Latitud", 0));
        label_12->setText(QApplication::translate("MainWindow", "Longitud", 0));
        label_13->setText(QApplication::translate("MainWindow", "Altura", 0));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Fly-by-wire", 0));
        groupBox_10->setTitle(QApplication::translate("MainWindow", "AoA, paths", 0));
        label_14->setText(QApplication::translate("MainWindow", "AoA", 0));
        label_15->setText(QApplication::translate("MainWindow", "beta", 0));
        label_16->setText(QApplication::translate("MainWindow", "hding", 0));
        label_17->setText(QApplication::translate("MainWindow", "vpath", 0));
        groupBox_11->setTitle(QApplication::translate("MainWindow", "Gyros", 0));
        label_18->setText(QApplication::translate("MainWindow", "Q", 0));
        label_19->setText(QApplication::translate("MainWindow", "P", 0));
        label_20->setText(QApplication::translate("MainWindow", "R", 0));
        groupBox_12->setTitle(QApplication::translate("MainWindow", "Mach, VVI, Gload", 0));
        label_21->setText(QApplication::translate("MainWindow", "Mach", 0));
        label_22->setText(QApplication::translate("MainWindow", "Gnorml", 0));
        label_23->setText(QApplication::translate("MainWindow", "VVI", 0));
        label_24->setText(QApplication::translate("MainWindow", "Gaxial", 0));
        label_25->setText(QApplication::translate("MainWindow", "Gside", 0));
        groupBox_13->setTitle(QApplication::translate("MainWindow", "Par\303\241metros del Flight Management System", 0));
        label_26->setText(QApplication::translate("MainWindow", "Rumbo", 0));
        label_27->setText(QApplication::translate("MainWindow", "Altura", 0));
        label_28->setText(QApplication::translate("MainWindow", "Speed", 0));
        pushButtonHILFMSPrevious->setText(QApplication::translate("MainWindow", "Previous", 0));
        pushButtonHILFMSNext->setText(QApplication::translate("MainWindow", "Next", 0));
        label_29->setText(QApplication::translate("MainWindow", "Waypoint", 0));
        label_30->setText(QApplication::translate("MainWindow", "Distancia", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_HIL), QApplication::translate("MainWindow", "HIL", 0));
        autopilotCommunication->setTitle(QApplication::translate("MainWindow", "Comunicaci\303\263n con el Piloto Autom\303\241tico", 0));
        pushButtonSerialOpen->setText(QApplication::translate("MainWindow", "Open", 0));
        pushButtonSerialClose->setText(QApplication::translate("MainWindow", "Close", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Env\303\255o y recepcion de mensajes por el puerto serie", 0));
        pushButtonSerialSend->setText(QApplication::translate("MainWindow", "Send", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "XPlane", 0));
        label_5->setText(QApplication::translate("MainWindow", "#n Tramas:", 0));
        lineEditXPlaneIPTx->setText(QApplication::translate("MainWindow", "127.0.0.1", 0));
        label_84->setText(QApplication::translate("MainWindow", "IP XPlane:", 0));
        label_85->setText(QApplication::translate("MainWindow", "Puerto Tx:", 0));
        pushButtonXPlaneClose->setText(QApplication::translate("MainWindow", "Close", 0));
        pushButtonXPlaneOpen->setText(QApplication::translate("MainWindow", "Open", 0));
        label_4->setText(QApplication::translate("MainWindow", "Puerto Rx:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_setup), QApplication::translate("MainWindow", "Setup", 0));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Joystick", 0));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Controles", 0));
        radioButtonAutopilotOn->setText(QApplication::translate("MainWindow", "Autopilot On", 0));
        radioButtonAutopilotOff->setText(QApplication::translate("MainWindow", "Autopilot Off", 0));
        radioButtonAutotrimOn->setText(QApplication::translate("MainWindow", "Autotrim On", 0));
        radioButtonAutotrimOff->setText(QApplication::translate("MainWindow", "Autotrim Off", 0));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "AHRS Board", 0));
        label->setText(QApplication::translate("MainWindow", "Heading:", 0));
        label_2->setText(QApplication::translate("MainWindow", "Pitch:", 0));
        label_3->setText(QApplication::translate("MainWindow", "Roll:", 0));
        menuEPF->setTitle(QApplication::translate("MainWindow", "Autopilot", 0));
        menuSelector_de_velocidad->setTitle(QApplication::translate("MainWindow", "Selector de velocidad", 0));
        menuSelector_de_altura->setTitle(QApplication::translate("MainWindow", "Selector de altura", 0));
        menuAyuda->setTitle(QApplication::translate("MainWindow", "Ayuda", 0));
        menuGoogle_Earth->setTitle(QApplication::translate("MainWindow", "Google Earth", 0));
        menuPar_metros->setTitle(QApplication::translate("MainWindow", "Par\303\241metros", 0));
        menuSensores_Anal_gicos->setTitle(QApplication::translate("MainWindow", "Sensores Anal\303\263gicos", 0));
        menuSensores_Inerciales->setTitle(QApplication::translate("MainWindow", "Sensores Inerciales", 0));
        menuAHRS->setTitle(QApplication::translate("MainWindow", "AHRS", 0));
        menuADS->setTitle(QApplication::translate("MainWindow", "Estad\303\255sticas", 0));
        menuGPS->setTitle(QApplication::translate("MainWindow", "GPS", 0));
        menuServosIn->setTitle(QApplication::translate("MainWindow", "ServosIn", 0));
        menuFly_By_Wire->setTitle(QApplication::translate("MainWindow", "Fly-By-Wire", 0));
        menuFMS_Fly_Plan->setTitle(QApplication::translate("MainWindow", "FMS Fly Plan", 0));
        menuFMS_HIL_Fly_Plan->setTitle(QApplication::translate("MainWindow", "FMS HIL Fly Plan", 0));
        menuControl->setTitle(QApplication::translate("MainWindow", "Control Aeronave", 0));
        menuXPlane->setTitle(QApplication::translate("MainWindow", "XPlane", 0));
        mainToolBar->setWindowTitle(QApplication::translate("MainWindow", "Autopilot Control", 0));
        Control_toolBar->setWindowTitle(QApplication::translate("MainWindow", "Control Surfaces", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
