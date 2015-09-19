#ifndef TERMOMETROC_H
#define TERMOMETROC_H

#include <QWidget>
#include <QtGui>

namespace Ui {
class TermometroC;
}

class TermometroC : public QWidget
{
    Q_OBJECT
    
public:
    explicit TermometroC(QWidget *parent = 0);
    ~TermometroC();
protected:
    void paintEvent(QPaintEvent *e);
    
private:
    Ui::TermometroC *ui;

    qreal temperatura;
};

#endif // TERMOMETROC_H
