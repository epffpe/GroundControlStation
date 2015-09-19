#ifndef MAGNETIC_HEADING_H
#define MAGNETIC_HEADING_H

#include <QWidget>
#include <QtGui>


namespace Ui {
class Magnetic_Heading;
}

class Magnetic_Heading : public QWidget
{
    Q_OBJECT
    
public:
    explicit Magnetic_Heading(QWidget *parent = 0);
    ~Magnetic_Heading();
    
    qreal getHeading() const;
    void setHeading(const qreal &value);

    qreal getHeadinghold() const;
    void setHeadinghold(const qreal &value);
protected:
    void paintEvent(QPaintEvent *e);

private:
    Ui::Magnetic_Heading *ui;
    qreal heading;
    qreal headinghold;
};

#endif // MAGNETIC_HEADING_H
