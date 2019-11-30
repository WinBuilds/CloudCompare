/********************************************************************************
** Form generated from reading UI file 'CloudCompare.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOUDCOMPARE_H
#define UI_CLOUDCOMPARE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CloudCompareClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CloudCompareClass)
    {
        if (CloudCompareClass->objectName().isEmpty())
            CloudCompareClass->setObjectName(QString::fromUtf8("CloudCompareClass"));
        CloudCompareClass->resize(600, 400);
        menuBar = new QMenuBar(CloudCompareClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        CloudCompareClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CloudCompareClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        CloudCompareClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(CloudCompareClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        CloudCompareClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(CloudCompareClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        CloudCompareClass->setStatusBar(statusBar);

        retranslateUi(CloudCompareClass);

        QMetaObject::connectSlotsByName(CloudCompareClass);
    } // setupUi

    void retranslateUi(QMainWindow *CloudCompareClass)
    {
        CloudCompareClass->setWindowTitle(QApplication::translate("CloudCompareClass", "CloudCompare", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CloudCompareClass: public Ui_CloudCompareClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOUDCOMPARE_H
