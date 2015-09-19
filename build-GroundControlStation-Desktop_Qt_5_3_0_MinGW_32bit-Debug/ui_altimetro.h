/********************************************************************************
** Form generated from reading UI file 'altimetro.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALTIMETRO_H
#define UI_ALTIMETRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Altimetro
{
public:

    void setupUi(QWidget *Altimetro)
    {
        if (Altimetro->objectName().isEmpty())
            Altimetro->setObjectName(QStringLiteral("Altimetro"));
        Altimetro->resize(146, 146);

        retranslateUi(Altimetro);

        QMetaObject::connectSlotsByName(Altimetro);
    } // setupUi

    void retranslateUi(QWidget *Altimetro)
    {
        Altimetro->setWindowTitle(QApplication::translate("Altimetro", "Altimetro", 0));
    } // retranslateUi

};

namespace Ui {
    class Altimetro: public Ui_Altimetro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALTIMETRO_H
