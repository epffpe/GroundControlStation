#include "horizonte_artificial.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Horizonte_Artificial w;
    w.show();
    
    return a.exec();
}
