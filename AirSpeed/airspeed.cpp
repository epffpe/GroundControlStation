#include "airspeed.h"
#include "ui_airspeed.h"

AirSpeed::AirSpeed(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AirSpeed)
{
    ui->setupUi(this);
    calibairspeed = 0.0;
}

AirSpeed::~AirSpeed()
{
    delete ui;
}


qreal AirSpeed::getCalibairspeed() const
{
    return calibairspeed;
}

void AirSpeed::setCalibairspeed(const qreal &value)
{
    calibairspeed = value;
    update();
}

void AirSpeed::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::SmoothPixmapTransform);

    painter.translate(width()/2,height()/2);

    QRectF target1(-73,-73,146,146);
    QImage image1(":/images/cockpit/airspeed/ASI_preset_GA_200.png");
    QRectF target2(-8,-60,16,120);
    QRectF source2(0,0,16,120);
    QImage image2(":/images/cockpit/airspeed/ASI_preset_GA_200-2.png");

    painter.drawImage(target1,image1);
    // 320º corresponde a 200 nudos.
    painter.rotate(getRotation(calibairspeed));
    painter.drawImage(target2, image2, source2);
}

qreal AirSpeed::getRotation(qreal speed)
{
    // 320º corresponde a 200 nudos.
    // 30º = 40nudos
    // 75º = 60nudos
    // 118º = 80
    // 163º = 100

    return speed;
}
