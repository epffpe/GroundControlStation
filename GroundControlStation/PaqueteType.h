#ifndef PAQUETETYPE_H
#define PAQUETETYPE_H

/********************************************/
/* Tipos de paquetes comandos PC->board */
#define qComandoDoNothing_t     				0
#define qComandoStop_t          				1
#define qComandoStart_t         				2
#define qComandoReadAll_t       				3
#define qComandoReset_t         				4
#define qComandoAHRSOn_t         				5
#define qComandoAHRSOff_t         			6
#define qComandoSensoresInercialesOn_t	7

#define qComandoSensoresInercialesOff_t	21
#define qComandoSensoresAnalogicosOn_t	22
#define qComandoSensoresAnalogicosOff_t	23
#define qComandoEstadisticasOn_t				24
#define qComandoEstadisticasOff_t				25
#define qComandoGPSOn_t									26
#define qComandoGPSOff_t         				27
#define qComandoServosInOn_t         		28
#define qComandoServosInOff_t         	29
#define qComandoFlyByWireOn_t         	30
#define qComandoFlyByWireOff_t         	31
#define qComandoFMSFlyPlanOn_t					33
#define qComandoFMSFlyPlanOff_t					34
#define qComandoFMSHILFlyPlanOn_t				35
#define qComandoFMSHILFlyPlanOff_t			36
#define qComandoAutopilotOn_t						37
#define qComandoAutopilotOff_t					38
#define qComandoAutoTrimOn_t						39
#define qComandoAutoTrimOff_t						40
#define qComandoFMSNextWaypoint_t				41
#define qComandoFMSPrevWaypoint_t				42
#define qComandoHILFMSNextWaypoint_t		43
#define qComandoHILFMSPrevWaypoint_t		45

#define qComandoSetParamTaskRate_t			46
#define qComandoSetFMSTaskRate_t				47
#define qComandoSetServosTaskRate_t			48
#define qComandoExitQTMode_t						49
#define qComandoxplanInfo2board_t				50

#define qComandoHILLoadGando_t					51
#define qComandoHILLoadRutaIsla_t				52
#define qComandoHILLoadAlternativa_t		53
#define qComandoHILLoadVuelo_t					54

#define qComandoControlModeJoysticRC_t	55

#define qComandoSetServosControlModeFBW_t	56
#define qComandoSetServosControlModeHIL_t	57
#define qComandoSetServosOutPosition_t		58

#define qComandoLoadParametrosAutopilotFBW_t		59

#define qComandoSetAutopilotParam_k_elev_t					60
#define qComandoSetAutopilotParam_k_airln_t					61
#define qComandoSetAutopilotParam_k_rudder_t				62
#define qComandoSetAutopilotParam_k_int_pitch_t			63
#define qComandoSetAutopilotParam_k_div_P_init_t		64
#define qComandoSetAutopilotParam_k_div_P_speed_t		65
#define qComandoSetAutopilotParam_k_div_Q_init_t		66
#define qComandoSetAutopilotParam_k_div_Q_speed_t		67
#define qComandoSetAutopilotParam_k_div_R_init_t		68
#define qComandoSetAutopilotParam_k_div_R_speed_t		69
#define qComandoSetAutopilotParam_k_div_velocidad_t	70
#define qComandoSetAutopilotParam_k_roll_t					71
#define qComandoSetAutopilotParam_k_heading_t				72
#define qComandoSetAutopilotParam_k_pitch_t					73
#define qComandoSetAutopilotParam_k_VVI_t						74
#define qComandoSetAutopilotParam_k_altura_t				75
#define qComandoSetAutopilotParam_k_int_altura_t		76



/********************************************/
/* Tipos de paquetes comandos  board->PC */
#define qPCParamHeartbeat_t  										0
#define qPCPacketParamAHRS_t      							1
#define qPCPacketParamSensoresInerciales_t      2
#define qPCPacketParamSensoresAnalogicos_t			3

#define qPCPacketServosServosIn_t								4
#define qPCPacketServosFlyByWire_t							5

#define qPCPacketFMSFlyPlan_t										6
#define qPCPacketFMSHILFlyPlan_t								7
#define qPCPacketFMSEstadisticas_t							8
#define qPCPacketFMSGPS_t												9
#define qPCPacketHILXPlane_t										10
#define qPCPacketParamAutopilotFBW_t						11


/********************************************/
/* Tipos de paquetes en qParamTask  */
#define qPacketParamAHRS_n      							0
#define qPacketParamSensoresInerciales_n      1
#define qPacketParamSensoresAnalogicos_n			2


/********************************************/
/* Tipos de paquetes en qFMSTask */
#define qPacketFMSFlyPlan_n									0
#define qPacketFMSHILFlyPlan_n							1
#define qPacketFMSEstadisticas_n						2
#define qPacketFMSGPS_n											3

/********************************************/
/* Tipos de paquetes en qServosTask */
#define qPacketServosServosIn_n							0
#define qPacketServosFlyByWire_n						1

/********************************************/
typedef struct {
    int header;
    int tipo;
    int CRC;
}qComandoSimple_t;

typedef struct {
    int header;
    int tipo;
    int variable1;
    int CRC;
}qComando1var_t;

typedef struct {
    int header;
    int tipo;
    float variable1;
    int CRC;
}qComando1float_t;

/* Tipos de paquetes recibidos*/

typedef struct {
  char autopilotStatus;
    char autotrimStatus;
    char conmutadorAutomaticoStatus;
    char servosStatus;

    char gpsStatus;
    char estadisticasStatus;
    char ahrsStatus;
    char inercialesStatus;

    char analogStatus;
    char flybywireStatus;
    char autopilotHILStatus;
    char autotrimHILStatus;
}qPacketParameHeartbeat_t;

typedef struct {
    float yaw;
    float pitch;
    float roll;
}qPacketParamAHRS_t;

typedef struct {
    float gx;
    float gy;
    float gz;
    float accx;
    float accy;
    float accz;
    float magx;
    float magy;
    float magz;
}qPacketParamSensoresInerciales_t;

typedef struct {
    float baro;
        float altitud;
        float altitud_externa;
        float pitot;
        float calibratedSpeed;
        float alpha; // Angulo de incidencia del viento en el plano vertical x-z
        float beta;  // Angulo de incidencia del viento en el plano horizontal x-y
        float temperatura;
        float bateria;
        float VVI;
}qPacketParamensoresAnalogicos_t;

typedef struct {
    float Servo[12];
}qPacketServosIn_t;

typedef struct {
    float Servo[4];
}qPacketServosFlyByWire_t;

typedef struct {
  float brng;
    float altura;
    float velocidad;
    int distancia;
    int actualWaypoint;
}qPacketFMSFlyPath_t;

typedef struct {
  short SensorDSC;
    short ControlDSC;
}qPacketFMSEstadisticas_t;

typedef struct {
  float latitud;
    float longitud;
    float altura;
    float velocidad;
    float rumbo;
    int GPSSatellitesUsed;
    int GPSPositionFixIndicator;
    int GPSStatus;
}qPacketFMSGPS_t;

typedef struct {
    float elevator;
    float alerones;
    float rudder;
    float throttle;
    float gx;
    float gy;
    float gz;
    float yaw;
    float pitch;
    float roll;
    float altitud;
    float VVI;
    float velocidad;
    float latitud;
    float longitud;
}qHILXPlaneInfo_t;

typedef struct {
    float elevator;
    float alerones;
    float rudder;
    float throttle;
}qPacketSurfacesFlightControl_t;


typedef struct {
    int DataRef;
    float var[8];
}qXPlanePacket_t;

typedef struct {
    int servoNum;
    float value;
}qServosOut_t;

typedef struct {
    // Parametros para el control de altura
    float k_int_altura;
    float k_altura;
    float k_VVI;
    float k_pitch;
// Parametros para el control de rumbo
    float k_heading;
    float k_roll;
// Parametros para el control de velocidad
    int k_div_velocidad;
// Parametros del fly-by-wire
    float k_div_P_init;
    float k_div_P_speed;
    float k_div_Q_init;
    float k_div_Q_speed;
    float k_div_R_init;
    float k_div_R_speed;
    float k_int_pitch;
    float k_elev;
    float k_airln;
    float k_rudder;
}qPacketParamAutopilotFBW_t;

#endif // PAQUETETYPE_H
