#ifndef AIRSPEED_H
#define AIRSPEED_H

#include <QWidget>
#include <QtGui>


namespace Ui {
class AirSpeed;
}

class AirSpeed : public QWidget
{
    Q_OBJECT
    
public:
    explicit AirSpeed(QWidget *parent = 0);
    ~AirSpeed();

    qreal getCalibairspeed() const;
    void setCalibairspeed(const qreal &value);

protected:
    void paintEvent(QPaintEvent *);
    
private:
    Ui::AirSpeed *ui;

    qreal getRotation(qreal speed);

    qreal calibairspeed;
};

#endif // AIRSPEED_H
