/********************************************************************************
** Form generated from reading UI file 'commandLineDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMANDLINEDLG_H
#define UI_COMMANDLINEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_commandLineDlg
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *consoleWidget;

    void setupUi(QDialog *commandLineDlg)
    {
        if (commandLineDlg->objectName().isEmpty())
            commandLineDlg->setObjectName(QString::fromUtf8("commandLineDlg"));
        commandLineDlg->resize(800, 250);
        verticalLayout = new QVBoxLayout(commandLineDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        consoleWidget = new QListWidget(commandLineDlg);
        consoleWidget->setObjectName(QString::fromUtf8("consoleWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(consoleWidget->sizePolicy().hasHeightForWidth());
        consoleWidget->setSizePolicy(sizePolicy);
        consoleWidget->setMinimumSize(QSize(0, 80));
        consoleWidget->setAlternatingRowColors(true);
        consoleWidget->setSelectionMode(QAbstractItemView::SingleSelection);

        verticalLayout->addWidget(consoleWidget);


        retranslateUi(commandLineDlg);

        QMetaObject::connectSlotsByName(commandLineDlg);
    } // setupUi

    void retranslateUi(QDialog *commandLineDlg)
    {
        commandLineDlg->setWindowTitle(QApplication::translate("commandLineDlg", "CloudCompare - command line mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class commandLineDlg: public Ui_commandLineDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMANDLINEDLG_H
