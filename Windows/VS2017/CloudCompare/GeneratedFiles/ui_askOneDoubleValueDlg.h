/********************************************************************************
** Form generated from reading UI file 'askOneDoubleValueDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASKONEDOUBLEVALUEDLG_H
#define UI_ASKONEDOUBLEVALUEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AskOneDoubleValueDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *valueLabel;
    QDoubleSpinBox *dValueSpinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AskOneDoubleValueDialog)
    {
        if (AskOneDoubleValueDialog->objectName().isEmpty())
            AskOneDoubleValueDialog->setObjectName(QString::fromUtf8("AskOneDoubleValueDialog"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AskOneDoubleValueDialog->sizePolicy().hasHeightForWidth());
        AskOneDoubleValueDialog->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(AskOneDoubleValueDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        valueLabel = new QLabel(AskOneDoubleValueDialog);
        valueLabel->setObjectName(QString::fromUtf8("valueLabel"));

        hboxLayout->addWidget(valueLabel);

        dValueSpinBox = new QDoubleSpinBox(AskOneDoubleValueDialog);
        dValueSpinBox->setObjectName(QString::fromUtf8("dValueSpinBox"));

        hboxLayout->addWidget(dValueSpinBox);


        vboxLayout->addLayout(hboxLayout);

        buttonBox = new QDialogButtonBox(AskOneDoubleValueDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(AskOneDoubleValueDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AskOneDoubleValueDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AskOneDoubleValueDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AskOneDoubleValueDialog);
    } // setupUi

    void retranslateUi(QDialog *AskOneDoubleValueDialog)
    {
        AskOneDoubleValueDialog->setWindowTitle(QApplication::translate("AskOneDoubleValueDialog", "Set Value", nullptr));
        valueLabel->setText(QApplication::translate("AskOneDoubleValueDialog", "Value", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AskOneDoubleValueDialog: public Ui_AskOneDoubleValueDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASKONEDOUBLEVALUEDLG_H
