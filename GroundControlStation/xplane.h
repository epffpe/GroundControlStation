#ifndef XPLANE_H
#define XPLANE_H

#include <QObject>
#include <QUdpSocket>
#include "PaqueteType.h"

class XPlane : public QObject
{
    Q_OBJECT
public:
    explicit XPlane(QObject *parent = 0);
    void initSocket(qint16 port);
    void close();
    QByteArray &flightSpeedControl(float alerones, float elevator, float rudder, float throttle );

signals:
    void processTheDatagram(QByteArray datagram);
public slots:
    void on_readyRead();

    void on_processTheDatagram(QByteArray datagram);
    void on_Control_XPlane(float alerones, float elevator, float rudder, float throttle );
private:
    QUdpSocket *udpSocket;

    QHostAddress hostSender;
    quint16 hostSenderPort;

    QHostAddress XPlaneAddress;
    quint16 XPlanePort;
public:
    qint16 puerto;

    quint16 getXPlanePort() const;
    void setXPlanePort(const quint16 &value);
};

#endif // XPLANE_H
