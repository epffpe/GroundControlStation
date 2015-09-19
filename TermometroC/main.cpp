#include "termometroc.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TermometroC w;
    w.show();
    
    return a.exec();
}
