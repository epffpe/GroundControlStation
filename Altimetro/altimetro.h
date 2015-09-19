#ifndef ALTIMETRO_H
#define ALTIMETRO_H

#include <QWidget>
#include <QtGui>


namespace Ui {
class Altimetro;
}

class Altimetro : public QWidget
{
    Q_OBJECT
    
public:
    explicit Altimetro(QWidget *parent = 0);
    ~Altimetro();

    qreal getAltura() const;
    void setAltura(const qreal &value);

protected:
    void paintEvent(QPaintEvent *);
    
private:
    Ui::Altimetro *ui;

    qreal altura;
};

#endif // ALTIMETRO_H
