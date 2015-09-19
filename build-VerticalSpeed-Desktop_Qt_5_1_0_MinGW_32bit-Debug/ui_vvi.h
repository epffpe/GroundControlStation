/********************************************************************************
** Form generated from reading UI file 'vvi.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VVI
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VVI)
    {
        if (VVI->objectName().isEmpty())
            VVI->setObjectName(QStringLiteral("VVI"));
        VVI->resize(146, 146);
        centralWidget = new QWidget(VVI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        VVI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VVI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 146, 21));
        VVI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VVI);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        VVI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(VVI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        VVI->setStatusBar(statusBar);

        retranslateUi(VVI);

        QMetaObject::connectSlotsByName(VVI);
    } // setupUi

    void retranslateUi(QMainWindow *VVI)
    {
        VVI->setWindowTitle(QApplication::translate("VVI", "VVI", 0));
    } // retranslateUi

};

namespace Ui {
    class VVI: public Ui_VVI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVI_H
