#include "altimetro.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Altimetro w;
    w.show();
    
    return a.exec();
}
