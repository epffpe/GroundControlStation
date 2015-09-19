/********************************************************************************
** Form generated from reading UI file 'vvi.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVI_H
#define UI_VVI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VVI
{
public:

    void setupUi(QWidget *VVI)
    {
        if (VVI->objectName().isEmpty())
            VVI->setObjectName(QStringLiteral("VVI"));
        VVI->resize(146, 146);

        retranslateUi(VVI);

        QMetaObject::connectSlotsByName(VVI);
    } // setupUi

    void retranslateUi(QWidget *VVI)
    {
        VVI->setWindowTitle(QApplication::translate("VVI", "VVI", 0));
    } // retranslateUi

};

namespace Ui {
    class VVI: public Ui_VVI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVI_H
