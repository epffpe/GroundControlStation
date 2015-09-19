/********************************************************************************
** Form generated from reading UI file 'velocimetro.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VELOCIMETRO_H
#define UI_VELOCIMETRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Velocimetro
{
public:

    void setupUi(QWidget *Velocimetro)
    {
        if (Velocimetro->objectName().isEmpty())
            Velocimetro->setObjectName(QStringLiteral("Velocimetro"));
        Velocimetro->resize(146, 146);

        retranslateUi(Velocimetro);

        QMetaObject::connectSlotsByName(Velocimetro);
    } // setupUi

    void retranslateUi(QWidget *Velocimetro)
    {
        Velocimetro->setWindowTitle(QApplication::translate("Velocimetro", "Velocimetro", 0));
    } // retranslateUi

};

namespace Ui {
    class Velocimetro: public Ui_Velocimetro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VELOCIMETRO_H
