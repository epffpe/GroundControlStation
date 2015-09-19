#include "altimetro.h"
#include "ui_altimetro.h"

Altimetro::Altimetro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Altimetro)
{
    ui->setupUi(this);
    altura = 0;
}

Altimetro::~Altimetro()
{
    delete ui;
}



qreal Altimetro::getAltura() const
{
    return altura;
}

void Altimetro::setAltura(const qreal &value)
{
    altura = value;
    update();
}

void Altimetro::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::SmoothPixmapTransform);

    painter.translate(width()/2,height()/2);

    QRectF target1(-73,-73,146,146);
    QImage image1(":/images/cockpit/altimetro/alt_GA.png");


    QRectF target2(32, -10, 24, 20);
    QRectF source2(24, 60, 24, 20);
    QImage image2(":/images/cockpit/altimetro/alt_GA-1.png");

    QRectF target3(-36,-58,72,116);
    QRectF source31(0,0,72,116);
    QRectF source32(72,0,72,116);
    QRectF source33(144,0,72,116);
    QImage image3(":/images/cockpit/altimetro/alt_GA-2.png");

    qreal agujacorta = 360 * (altura / 10000);
    int alt = altura;
    qreal agujalarga = 360.0 * (alt % 1000) / 1000;

    painter.drawImage(target1,image1);

    painter.drawImage(target2,image2,source2);

    painter.drawImage(target3,image3,source33);

    painter.rotate(agujacorta);
    painter.drawImage(target3,image3,source32);
    painter.rotate(-agujacorta);

    painter.rotate(agujalarga);
    painter.drawImage(target3,image3,source31);
    painter.rotate(-agujalarga);
}
