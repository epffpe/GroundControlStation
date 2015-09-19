#include "horizonte_artificial.h"
#include "ui_horizonte_artificial.h"

Horizonte_Artificial::Horizonte_Artificial(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Horizonte_Artificial)
{
    ui->setupUi(this);
    roll = 0.0;
    pitch = 0.0;
}

Horizonte_Artificial::~Horizonte_Artificial()
{
    delete ui;
}

void Horizonte_Artificial::setAttitude(const qreal &qpitch, const qreal &qroll)
{
    pitch = qpitch;
    roll = qroll;
    update();
}

qreal Horizonte_Artificial::getRoll() const
{
    return roll;
}

void Horizonte_Artificial::setRoll(const qreal &value)
{
    roll = value;
    update();
}



qreal Horizonte_Artificial::getPitch() const
{
    return pitch;
}

void Horizonte_Artificial::setPitch(const qreal &value)
{
    pitch = value;
    update();
}

void Horizonte_Artificial::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::SmoothPixmapTransform);

    painter.translate(width()/2,height()/2);
    int altura = 98;
    QRectF target1(-84.0, -altura/2, 168, altura);
    QRectF source1(0.0, (128 - altura/2), 168, altura);
    QImage image1(":/images/cockpit/HorizonteArtificial/horizon_GA_vac_flag-1.png");
    QRectF target2(-68.0, -68, 136, 136);
    QImage image2(":/images/cockpit/HorizonteArtificial/horizon_GA_vac_flag-3.png");
    QRectF target3(-42.0, -42, 84, 84);
    QRectF source3(0.0, 0, 84, 84);
    QImage image3(":/images/cockpit/HorizonteArtificial/horizon_GA_vac_flag-2.png");
    QRectF target4(-84.0, -84, 168, 168);
    QImage image4(":/images/cockpit/HorizonteArtificial/horizon_GA_vac_flag.png");


    source1.translate(0,-qRound(pitch));
    painter.rotate(-qRound(roll));
    painter.drawImage(target1, image1, source1);
    painter.drawImage(target2,image2);
    painter.rotate(qRound(roll));

    painter.drawImage(target3, image3, source3);
    painter.drawImage(target4, image4);
}


