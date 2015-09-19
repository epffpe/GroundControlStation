#include "termometroc.h"
#include "ui_termometroc.h"

TermometroC::TermometroC(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TermometroC)
{
    ui->setupUi(this);
}

TermometroC::~TermometroC()
{
    delete ui;
}

void TermometroC::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::SmoothPixmapTransform);

    painter.translate(width()/2,0);

    QRectF target1(-39.5, 0, 79, 41);
    QImage image1(":/images/cockpit/Termometro/thermo_linear_C.png");
    QRectF target2(-4, -52, 8, 144);
    QImage image2(":/images/cockpit/Termometro/thermo_linear_C-2.png");

    painter.drawImage(target1, image1);

    painter.translate(0,52);
    painter.rotate(35);
    painter.drawImage(target2, image2);


}
