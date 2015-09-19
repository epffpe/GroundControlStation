#ifndef HORIZONTE_ARTIFICIAL_H
#define HORIZONTE_ARTIFICIAL_H

#include <QWidget>
#include <QtGui>


namespace Ui {
class Horizonte_Artificial;
}

class Horizonte_Artificial : public QWidget
{
    Q_OBJECT
    
public:
    explicit Horizonte_Artificial(QWidget *parent = 0);
    ~Horizonte_Artificial();
    void setAttitude(const qreal &qpitch, const qreal &qroll);
    
    qreal getRoll() const;
    void setRoll(const qreal &value);

    qreal getPitch() const;
    void setPitch(const qreal &value);

private:
    Ui::Horizonte_Artificial *ui;
protected:
    void paintEvent(QPaintEvent *e);
private:
    qreal roll;
    qreal pitch;
};

#endif // HORIZONTE_ARTIFICIAL_H
