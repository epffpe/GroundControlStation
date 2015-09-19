#include "magnetic_heading.h"
#include "ui_magnetic_heading.h"

Magnetic_Heading::Magnetic_Heading(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Magnetic_Heading)
{
    ui->setupUi(this);

    heading = 0.0;
    headinghold = 0.0;
}

Magnetic_Heading::~Magnetic_Heading()
{
    delete ui;
}


qreal Magnetic_Heading::getHeading() const
{
    return heading;
}

void Magnetic_Heading::setHeading(const qreal &value)
{
    heading = value;
    update();
}

qreal Magnetic_Heading::getHeadinghold() const
{
    return headinghold;
}

void Magnetic_Heading::setHeadinghold(const qreal &value)
{
    headinghold = value;
    update();
}

void Magnetic_Heading::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::SmoothPixmapTransform);

    painter.translate(width()/2,height()/2);

    QRectF target1(-73.0, -73.0, 146, 146);
    QImage image1(":/images/cockpit/DGs/DG.png");
    QRectF target2(-58.0, -58, 116, 116);
    QImage image2(":/images/cockpit/DGs/DG-1.png");
    QRectF target3(-10.0, -59, 20, 118);
    QImage image3(":/images/cockpit/DGs/DG-2.png");
    QRectF target4(-60.0, -60, 120, 120);
    QImage image4(":/images/cockpit/DGs/DG-3.png");

    painter.drawImage(target1,image1);
    painter.rotate(-heading);
    painter.drawImage(target2, image2);
    painter.rotate(headinghold);
    painter.drawImage(target3,image3);
    painter.rotate(-headinghold);
    painter.rotate(heading);
    painter.drawImage(target4,image4);
}



