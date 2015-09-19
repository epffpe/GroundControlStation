#ifndef SPEEDCOMMUNICATIONS_H
#define SPEEDCOMMUNICATIONS_H

#include <QObject>
#include <QTimer>

class SpeedCommunications : public QObject
{
    Q_OBJECT
public:
    explicit SpeedCommunications(QObject *parent = 0);
    
signals:
    void usoUDP(int);
    void usoSerialRX(int);
    void usoSerialTX(int);
    void serialLost(int);
public slots:
    void timeout();
    void udpctr(int);
    void rxserialctr(int ctr);
    void txserialctr(int ctr);
    void fallopaquete(int ctr);
private:
    QTimer *timer;
    int SerialCtrReceived;
    int SerialCtrTransmited;
    int SerialCtrMax;
    int UDPCtr;
    int packetLostCtr;
    int UDPCtrMax;

    int UDPUsage;
    int SerialRXUsage;
    int SerialTXUsage;
    int packetLostUsage;
};

#endif // SPEEDCOMMUNICATIONS_H
