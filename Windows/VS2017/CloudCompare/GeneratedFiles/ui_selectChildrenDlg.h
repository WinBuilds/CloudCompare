/********************************************************************************
** Form generated from reading UI file 'selectChildrenDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTCHILDRENDLG_H
#define UI_SELECTCHILDRENDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SelectChildrenDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QCheckBox *typeCheckBox;
    QCheckBox *nameCheckBox;
    QFrame *nameFrame;
    QHBoxLayout *horizontalLayout;
    QLineEdit *nameLineEdit;
    QCheckBox *checkBoxRegex;
    QFrame *typeFrame;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *typeComboBox;
    QCheckBox *typeStrictCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SelectChildrenDialog)
    {
        if (SelectChildrenDialog->objectName().isEmpty())
            SelectChildrenDialog->setObjectName(QString::fromUtf8("SelectChildrenDialog"));
        SelectChildrenDialog->resize(500, 175);
        verticalLayout = new QVBoxLayout(SelectChildrenDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(SelectChildrenDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        typeCheckBox = new QCheckBox(groupBox);
        typeCheckBox->setObjectName(QString::fromUtf8("typeCheckBox"));
        typeCheckBox->setChecked(true);

        formLayout->setWidget(1, QFormLayout::LabelRole, typeCheckBox);

        nameCheckBox = new QCheckBox(groupBox);
        nameCheckBox->setObjectName(QString::fromUtf8("nameCheckBox"));

        formLayout->setWidget(2, QFormLayout::LabelRole, nameCheckBox);

        nameFrame = new QFrame(groupBox);
        nameFrame->setObjectName(QString::fromUtf8("nameFrame"));
        nameFrame->setEnabled(false);
        nameFrame->setFrameShape(QFrame::StyledPanel);
        nameFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(nameFrame);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        nameLineEdit = new QLineEdit(nameFrame);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        horizontalLayout->addWidget(nameLineEdit);

        checkBoxRegex = new QCheckBox(nameFrame);
        checkBoxRegex->setObjectName(QString::fromUtf8("checkBoxRegex"));

        horizontalLayout->addWidget(checkBoxRegex);


        formLayout->setWidget(2, QFormLayout::FieldRole, nameFrame);

        typeFrame = new QFrame(groupBox);
        typeFrame->setObjectName(QString::fromUtf8("typeFrame"));
        typeFrame->setEnabled(true);
        typeFrame->setFrameShape(QFrame::StyledPanel);
        typeFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(typeFrame);
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        typeComboBox = new QComboBox(typeFrame);
        typeComboBox->setObjectName(QString::fromUtf8("typeComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(typeComboBox->sizePolicy().hasHeightForWidth());
        typeComboBox->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(typeComboBox);

        typeStrictCheckBox = new QCheckBox(typeFrame);
        typeStrictCheckBox->setObjectName(QString::fromUtf8("typeStrictCheckBox"));
        typeStrictCheckBox->setChecked(true);

        horizontalLayout_6->addWidget(typeStrictCheckBox);


        formLayout->setWidget(1, QFormLayout::FieldRole, typeFrame);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SelectChildrenDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SelectChildrenDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SelectChildrenDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SelectChildrenDialog, SLOT(reject()));
        QObject::connect(typeCheckBox, SIGNAL(toggled(bool)), typeFrame, SLOT(setEnabled(bool)));
        QObject::connect(nameCheckBox, SIGNAL(toggled(bool)), nameFrame, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(SelectChildrenDialog);
    } // setupUi

    void retranslateUi(QDialog *SelectChildrenDialog)
    {
        SelectChildrenDialog->setWindowTitle(QApplication::translate("SelectChildrenDialog", "Select children by type and/or name", nullptr));
        groupBox->setTitle(QApplication::translate("SelectChildrenDialog", "Select children...", nullptr));
        typeCheckBox->setText(QApplication::translate("SelectChildrenDialog", "of type", nullptr));
        nameCheckBox->setText(QApplication::translate("SelectChildrenDialog", "with name", nullptr));
        checkBoxRegex->setText(QApplication::translate("SelectChildrenDialog", "regex", nullptr));
        typeStrictCheckBox->setText(QApplication::translate("SelectChildrenDialog", "strict", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectChildrenDialog: public Ui_SelectChildrenDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTCHILDRENDLG_H
