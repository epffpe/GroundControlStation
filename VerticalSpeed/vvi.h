#ifndef VVI_H
#define VVI_H

#include <QMainWindow>
#include <QtGui>
namespace Ui {
class VVI;
}

class VVI : public QMainWindow
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
