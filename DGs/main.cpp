#include "magnetic_heading.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Magnetic_Heading w;
    w.show();
    
    return a.exec();
}
