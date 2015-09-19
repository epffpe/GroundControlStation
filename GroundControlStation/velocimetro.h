#ifndef VELOCIMETRO_H
#define VELOCIMETRO_H

#include <QWidget>
#include <QtGui>
namespace Ui {
class Velocimetro;
}

class Velocimetro : public QWidget
{
    Q_OBJECT
    
public:
    explicit Velocimetro(QWidget *parent = 0);
    ~Velocimetro();
    
    qreal getIndspeed() const;
    void setIndspeed(const qreal &value);

protected:
    void paintEvent(QPaintEvent *);

private:
    Ui::Velocimetro *ui;

    qreal indspeed;
};

#endif // VELOCIMETRO_H
