#include "airspeed.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AirSpeed w;
    w.show();
    
    return a.exec();
}
