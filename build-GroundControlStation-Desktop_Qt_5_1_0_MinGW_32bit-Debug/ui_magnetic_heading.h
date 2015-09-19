/********************************************************************************
** Form generated from reading UI file 'magnetic_heading.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAGNETIC_HEADING_H
#define UI_MAGNETIC_HEADING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Magnetic_Heading
{
public:

    void setupUi(QWidget *Magnetic_Heading)
    {
        if (Magnetic_Heading->objectName().isEmpty())
            Magnetic_Heading->setObjectName(QStringLiteral("Magnetic_Heading"));
        Magnetic_Heading->resize(146, 146);

        retranslateUi(Magnetic_Heading);

        QMetaObject::connectSlotsByName(Magnetic_Heading);
    } // setupUi

    void retranslateUi(QWidget *Magnetic_Heading)
    {
        Magnetic_Heading->setWindowTitle(QApplication::translate("Magnetic_Heading", "Magnetic_Heading", 0));
    } // retranslateUi

};

namespace Ui {
    class Magnetic_Heading: public Ui_Magnetic_Heading {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAGNETIC_HEADING_H
