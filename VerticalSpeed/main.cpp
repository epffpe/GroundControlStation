#include "vvi.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VVI w;
    w.show();
    
    return a.exec();
}
