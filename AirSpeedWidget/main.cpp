#include "velocimetro.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Velocimetro w;
    w.show();
    w.setIndspeed(35);
    return a.exec();
}
