/********************************************************************************
** Form generated from reading UI file 'airspeed.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AIRSPEED_H
#define UI_AIRSPEED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AirSpeed
{
public:

    void setupUi(QWidget *AirSpeed)
    {
        if (AirSpeed->objectName().isEmpty())
            AirSpeed->setObjectName(QStringLiteral("AirSpeed"));
        AirSpeed->resize(400, 300);

        retranslateUi(AirSpeed);

        QMetaObject::connectSlotsByName(AirSpeed);
    } // setupUi

    void retranslateUi(QWidget *AirSpeed)
    {
        AirSpeed->setWindowTitle(QApplication::translate("AirSpeed", "AirSpeed", 0));
    } // retranslateUi

};

namespace Ui {
    class AirSpeed: public Ui_AirSpeed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AIRSPEED_H
