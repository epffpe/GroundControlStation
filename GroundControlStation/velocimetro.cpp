#include "velocimetro.h"
#include "ui_velocimetro.h"

Velocimetro::Velocimetro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Velocimetro)
{
    ui->setupUi(this);
    indspeed = 0;
}

Velocimetro::~Velocimetro()
{
    delete ui;
}



qreal Velocimetro::getIndspeed() const
{
    return indspeed;
}

void Velocimetro::setIndspeed(const qreal &value)
{
    indspeed = value;
    update();
}

void Velocimetro::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHints(QPainter::TextAntialiasing|QPainter::Antialiasing|QPainter::SmoothPixmapTransform);

    painter.translate(width()/2,height()/2);

    QRectF target1(-73,-73,146,146);
    QImage image1(":/images/cockpit/airspeed/ASI_adap_GA.png");
    QRectF target2(-8,-60,16,120);
    QRectF source2(0,0,16,120);
    QImage image2(":/images/cockpit/airspeed/ASI_adap_GA-2 (2).png");
    QPen penblanco(Qt::white);
    penblanco.setWidth(1);
    QPen penblanco2(Qt::white);
    penblanco2.setWidth(2);
    QPen penblanco3(Qt::white);
    penblanco3.setWidth(4);
    QPen penverde(Qt::green);
    penverde.setWidth(4);
    QPen penamarilla(Qt::yellow);
    penamarilla.setWidth(4);
    QPen penrojo(Qt::red);
    penrojo.setWidth(8);

    painter.drawImage(target1,image1);
// Linea blanca
    painter.setPen(penblanco3);
    painter.rotate(15*3.6);
    for (int i=0;i<15;i++){
        painter.rotate(3.6);
        painter.drawPoint(0,-56);
    }
    painter.rotate(-30*3.6);
// Linea verde
    painter.setPen(penverde);
    painter.rotate(18*3.6);
    for (int i=0;i<28;i++){
        painter.rotate(3.6);
        painter.drawPoint(0,-53);
    }
    painter.rotate(-46*3.6);
// Linea amarilla
    painter.setPen(penamarilla);
    painter.rotate(46*3.6);
    for (int i=0;i<24;i++){
        painter.rotate(3.6);
        painter.drawPoint(0,-53);
    }
    painter.rotate(-70*3.6);
// Linea roja
    painter.setPen(penrojo);
    painter.rotate(70*3.6);
    for (int i=0;i<2;i++){
        painter.rotate(3.6);
        painter.drawPoint(0,-54);
    }
    painter.rotate(-72*3.6);


// Lineas pequeñas
    painter.setPen(penblanco);
    painter.drawLine(0,-50,0,-58);

    for (int i=0;i<45;i++){
        painter.rotate(2*3.6);
        painter.drawLine(0,-50,0,-55);
    }
    painter.rotate(-324);

    painter.setPen(penblanco2);
    painter.drawLine(0,-50,0,-58);
    for (int i=0;i<9;i++){
        painter.rotate(10*3.6);
        painter.drawLine(0,-50,0,-58);
    }
    painter.rotate(-324);

    QRectF texto(-8,-5,16,10);

    for (int i=0;i<10;i++){
        painter.translate(0,-35);
        painter.rotate(-i * 10 * 3.6);
        painter.drawText(texto, Qt::AlignCenter, QString::number(i*10));
        //painter.drawRect(texto);
        painter.rotate(i * 10 * 3.6);
        painter.translate(0,35);
        painter.rotate(10 * 3.6);
    }

    painter.rotate(indspeed * 3.6);
    painter.drawImage(target2, image2, source2);

}
