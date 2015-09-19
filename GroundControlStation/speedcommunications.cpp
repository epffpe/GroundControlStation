#include "speedcommunications.h"
#include <QDebug>


SpeedCommunications::SpeedCommunications(QObject *parent) :
    QObject(parent)
{

    SerialCtrReceived = 0;
    SerialCtrTransmited = 0;
    SerialCtrMax = 115200/10 /2;
    UDPCtr = 0;
    UDPCtrMax = 36500;

    packetLostCtr = 0;

    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timeout()));
    timer->start(500);
    qDebug() << "Estadisticas inicializadas";
}

void SpeedCommunications::timeout()
{
    int actualUDPCtr = UDPCtr;
    UDPCtr = 0;
    int actualSerialRxCtr = SerialCtrReceived;
    SerialCtrReceived = 0;
    int actualSerialTxCtr = SerialCtrTransmited;
    SerialCtrTransmited = 0;
    int actualSerialLostCtr = packetLostCtr;
    packetLostCtr = 0;

    UDPUsage = (100 * actualUDPCtr / UDPCtrMax);
    if (UDPUsage > 100) {
        UDPUsage = 100;
    }else if (UDPUsage < 0){
        UDPUsage = 0;
    }else{

    }
    emit usoUDP(UDPUsage);

    SerialRXUsage = (100 * actualSerialRxCtr / SerialCtrMax);
    if (SerialRXUsage > 100) {
        SerialRXUsage = 100;
    }else if (SerialRXUsage < 0){
        SerialRXUsage = 0;
    }else{

    }
    emit usoSerialRX(SerialRXUsage);

    SerialTXUsage = (100 * actualSerialTxCtr / SerialCtrMax);
    if (SerialTXUsage > 100) {
        SerialTXUsage = 100;
    }else if (SerialTXUsage < 0){
        SerialTXUsage = 0;
    }else{

    }
    emit usoSerialTX(SerialTXUsage);


    packetLostUsage = 10 * (100 * actualSerialLostCtr / SerialCtrMax);
    if (packetLostUsage > 100) {
        packetLostUsage = 100;
    }else if (packetLostUsage < 0){
        packetLostUsage = 0;
    }else{

    }
    emit serialLost(actualSerialLostCtr);
}

void SpeedCommunications::udpctr(int ctr)
{
    UDPCtr += ctr;
}

void SpeedCommunications::rxserialctr(int ctr)
{
    SerialCtrReceived += ctr;
}

void SpeedCommunications::txserialctr(int ctr)
{
    SerialCtrTransmited += ctr;
}

void SpeedCommunications::fallopaquete(int ctr)
{
    packetLostCtr += ctr;
}
