/********************************************************************************
** Form generated from reading UI file 'stereoModeDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STEREOMODEDLG_H
#define UI_STEREOMODEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StereoModeDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *glassTypeComboBox;
    QTextEdit *warningTextEdit;
    QGroupBox *paramsGroupBox;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *gridLayout;
    QDoubleSpinBox *eyeSepDoubleSpinBox;
    QLabel *label_3;
    QLabel *label_2;
    QCheckBox *autoFocalCheckBox;
    QDoubleSpinBox *focalDoubleSpinBox;
    QLabel *autoFocusLabel;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *StereoModeDialog)
    {
        if (StereoModeDialog->objectName().isEmpty())
            StereoModeDialog->setObjectName(QString::fromUtf8("StereoModeDialog"));
        StereoModeDialog->resize(455, 332);
        verticalLayout_2 = new QVBoxLayout(StereoModeDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(StereoModeDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        glassTypeComboBox = new QComboBox(StereoModeDialog);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/images/ccStereo.png"), QSize(), QIcon::Normal, QIcon::Off);
        glassTypeComboBox->addItem(icon, QString());
        glassTypeComboBox->addItem(icon, QString());
        glassTypeComboBox->addItem(icon, QString());
        glassTypeComboBox->addItem(icon, QString());
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CC/images/nvidia.png"), QSize(), QIcon::Normal, QIcon::Off);
        glassTypeComboBox->addItem(icon1, QString());
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/CC/images/oculus.png"), QSize(), QIcon::Normal, QIcon::Off);
        glassTypeComboBox->addItem(icon2, QString());
        glassTypeComboBox->setObjectName(QString::fromUtf8("glassTypeComboBox"));

        horizontalLayout->addWidget(glassTypeComboBox);


        verticalLayout_2->addLayout(horizontalLayout);

        warningTextEdit = new QTextEdit(StereoModeDialog);
        warningTextEdit->setObjectName(QString::fromUtf8("warningTextEdit"));

        verticalLayout_2->addWidget(warningTextEdit);

        paramsGroupBox = new QGroupBox(StereoModeDialog);
        paramsGroupBox->setObjectName(QString::fromUtf8("paramsGroupBox"));
        verticalLayout = new QVBoxLayout(paramsGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(paramsGroupBox);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        eyeSepDoubleSpinBox = new QDoubleSpinBox(frame);
        eyeSepDoubleSpinBox->setObjectName(QString::fromUtf8("eyeSepDoubleSpinBox"));
        eyeSepDoubleSpinBox->setSuffix(QString::fromUtf8("%"));
        eyeSepDoubleSpinBox->setDecimals(1);
        eyeSepDoubleSpinBox->setMinimum(0.100000000000000);
        eyeSepDoubleSpinBox->setSingleStep(0.100000000000000);
        eyeSepDoubleSpinBox->setValue(3.300000000000000);

        gridLayout->addWidget(eyeSepDoubleSpinBox, 0, 1, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        autoFocalCheckBox = new QCheckBox(frame);
        autoFocalCheckBox->setObjectName(QString::fromUtf8("autoFocalCheckBox"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(autoFocalCheckBox->sizePolicy().hasHeightForWidth());
        autoFocalCheckBox->setSizePolicy(sizePolicy);
        autoFocalCheckBox->setChecked(true);

        gridLayout->addWidget(autoFocalCheckBox, 1, 2, 1, 1);

        focalDoubleSpinBox = new QDoubleSpinBox(frame);
        focalDoubleSpinBox->setObjectName(QString::fromUtf8("focalDoubleSpinBox"));
        focalDoubleSpinBox->setEnabled(false);
        focalDoubleSpinBox->setDecimals(3);
        focalDoubleSpinBox->setMinimum(0.000000000000000);
        focalDoubleSpinBox->setMaximum(1000000.000000000000000);
        focalDoubleSpinBox->setValue(0.500000000000000);

        gridLayout->addWidget(focalDoubleSpinBox, 1, 1, 1, 1);


        verticalLayout->addWidget(frame);

        autoFocusLabel = new QLabel(paramsGroupBox);
        autoFocusLabel->setObjectName(QString::fromUtf8("autoFocusLabel"));
        QFont font;
        font.setItalic(true);
        autoFocusLabel->setFont(font);
        autoFocusLabel->setStyleSheet(QString::fromUtf8("color: blue;"));

        verticalLayout->addWidget(autoFocusLabel);


        verticalLayout_2->addWidget(paramsGroupBox);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(StereoModeDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(StereoModeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), StereoModeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), StereoModeDialog, SLOT(reject()));
        QObject::connect(autoFocalCheckBox, SIGNAL(toggled(bool)), focalDoubleSpinBox, SLOT(setDisabled(bool)));
        QObject::connect(autoFocalCheckBox, SIGNAL(toggled(bool)), autoFocusLabel, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(StereoModeDialog);
    } // setupUi

    void retranslateUi(QDialog *StereoModeDialog)
    {
        StereoModeDialog->setWindowTitle(QApplication::translate("StereoModeDialog", "Stereo mode", nullptr));
        label->setText(QApplication::translate("StereoModeDialog", "Glasses", nullptr));
        glassTypeComboBox->setItemText(0, QApplication::translate("StereoModeDialog", "Red-Blue", nullptr));
        glassTypeComboBox->setItemText(1, QApplication::translate("StereoModeDialog", "Blue-Red", nullptr));
        glassTypeComboBox->setItemText(2, QApplication::translate("StereoModeDialog", "Red-Cyan", nullptr));
        glassTypeComboBox->setItemText(3, QApplication::translate("StereoModeDialog", "Cyan-Red", nullptr));
        glassTypeComboBox->setItemText(4, QApplication::translate("StereoModeDialog", "NVidia Vision", nullptr));
        glassTypeComboBox->setItemText(5, QApplication::translate("StereoModeDialog", "Oculus", nullptr));

        warningTextEdit->setHtml(QApplication::translate("StereoModeDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">To make this mode work properly make sure that:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">- the NVidia Vision IR emitter is plugged and enabled (dim green light)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">- 3D stereo mode is activated in the NVidia Control Pannel</span></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">- the screen frequency is set to 120Hz</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">- the glasses are switched on</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Note: the current 3D view will be automatically displayed in exclusive full screen mode - press F11 to quit this mode</span></p></body></html>", nullptr));
        paramsGroupBox->setTitle(QApplication::translate("StereoModeDialog", "Parameters", nullptr));
        label_3->setText(QApplication::translate("StereoModeDialog", "Eyes separation", nullptr));
        label_2->setText(QApplication::translate("StereoModeDialog", "Focal distance", nullptr));
        autoFocalCheckBox->setText(QApplication::translate("StereoModeDialog", "auto", nullptr));
        autoFocusLabel->setText(QApplication::translate("StereoModeDialog", "Note: the focus will depend on the distance to the rotation center", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StereoModeDialog: public Ui_StereoModeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STEREOMODEDLG_H
