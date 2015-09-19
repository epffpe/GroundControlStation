/********************************************************************************
** Form generated from reading UI file 'termometroc.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TERMOMETROC_H
#define UI_TERMOMETROC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TermometroC
{
public:

    void setupUi(QWidget *TermometroC)
    {
        if (TermometroC->objectName().isEmpty())
            TermometroC->setObjectName(QStringLiteral("TermometroC"));
        TermometroC->resize(79, 41);

        retranslateUi(TermometroC);

        QMetaObject::connectSlotsByName(TermometroC);
    } // setupUi

    void retranslateUi(QWidget *TermometroC)
    {
        TermometroC->setWindowTitle(QApplication::translate("TermometroC", "TermometroC", 0));
    } // retranslateUi

};

namespace Ui {
    class TermometroC: public Ui_TermometroC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TERMOMETROC_H
