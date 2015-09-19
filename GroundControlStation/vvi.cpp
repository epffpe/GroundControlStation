#include "vvi.h"
#include "ui_vvi.h"

VVI::VVI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VVI)
{
    ui->setupUi(this);
    verticalspeed = 0;
}

VVI::~VVI()
{
    delete ui;
}



qreal VVI::getVerticalspeed() const
{
    return verticalspeed;
}

void VVI::setVerticalspeed(const qreal &value)
{
    verticalspeed = value;
    update();
}


void VVI::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::SmoothPixmapTransform);

    painter.translate(width()/2,height()/2);

    QRectF target1(-73,-73,146,146);
    QImage image1(":/images/cockpit/verticalspeed/VVI_2000_GA.png");


    QRectF target2(-6, -56, 18, 112);
    QRectF source2(0, 0, 18, 112);
    QImage image2(":/images/cockpit/verticalspeed/VVI_2000_GA-2.png");

    // 160º = 20
    qreal agujacorta = 160 * verticalspeed /2000;

    painter.drawImage(target1,image1);

    painter.rotate(agujacorta -90);
    painter.drawImage(target2,image2,source2);

}

