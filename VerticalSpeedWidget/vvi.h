#ifndef VVI_H
#define VVI_H

#include <QWidget>
#include <QtGui>
namespace Ui {
class VVI;
}

class VVI : public QWidget
{
    Q_OBJECT
    
public:
    explicit VVI(QWidget *parent = 0);
    ~VVI();
    
    qreal getVerticalspeed() const;
    void setVerticalspeed(const qreal &value);
protected:
    void paintEvent(QPaintEvent *);

private:
    Ui::VVI *ui;
    qreal verticalspeed;
};

#endif // VVI_H
