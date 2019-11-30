/********************************************************************************
** Form generated from reading UI file 'geomFeaturesDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEOMFEATURESDLG_H
#define UI_GEOMFEATURESDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GeomFeaturesDialog
{
public:
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QDoubleSpinBox *radiusDoubleSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *roughnessGroupBox;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *roughnessCheckBox;
    QGroupBox *curvatureGroupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *curvMeanCheckBox;
    QCheckBox *curvGaussCheckBox;
    QCheckBox *curvNCRCheckBox;
    QGroupBox *desnityGroupBox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *densityKnnCheckBox;
    QCheckBox *densitySurfCheckBox;
    QCheckBox *densityVolCheckBox;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *featureGroupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *eigSumCheckBox;
    QCheckBox *eigOmnivarianceCheckBox;
    QCheckBox *eigenentropyCheckBox;
    QCheckBox *eigAnisotropyCheckBox;
    QCheckBox *eigPlanarityBox;
    QCheckBox *eigLinearityCheckBox;
    QCheckBox *eigPCA1CheckBox;
    QCheckBox *eigPCA2CheckBox;
    QCheckBox *eigSurfaceVarCheckBox;
    QCheckBox *eigSphericityCheckBox;
    QCheckBox *eigVerticalityCheckBox;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GeomFeaturesDialog)
    {
        if (GeomFeaturesDialog->objectName().isEmpty())
            GeomFeaturesDialog->setObjectName(QString::fromUtf8("GeomFeaturesDialog"));
        GeomFeaturesDialog->resize(400, 420);
        verticalLayout_7 = new QVBoxLayout(GeomFeaturesDialog);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        groupBox = new QGroupBox(GeomFeaturesDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setAlignment(Qt::AlignCenter);
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(101, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        radiusDoubleSpinBox = new QDoubleSpinBox(groupBox);
        radiusDoubleSpinBox->setObjectName(QString::fromUtf8("radiusDoubleSpinBox"));
        radiusDoubleSpinBox->setDecimals(6);
        radiusDoubleSpinBox->setMinimum(0.000001000000000);
        radiusDoubleSpinBox->setMaximum(1000000.000000000000000);
        radiusDoubleSpinBox->setValue(1.000000000000000);

        horizontalLayout_2->addWidget(radiusDoubleSpinBox);

        horizontalSpacer_2 = new QSpacerItem(101, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_7->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        roughnessGroupBox = new QGroupBox(GeomFeaturesDialog);
        roughnessGroupBox->setObjectName(QString::fromUtf8("roughnessGroupBox"));
        verticalLayout_4 = new QVBoxLayout(roughnessGroupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        roughnessCheckBox = new QCheckBox(roughnessGroupBox);
        roughnessCheckBox->setObjectName(QString::fromUtf8("roughnessCheckBox"));

        verticalLayout_4->addWidget(roughnessCheckBox);


        verticalLayout_5->addWidget(roughnessGroupBox);

        curvatureGroupBox = new QGroupBox(GeomFeaturesDialog);
        curvatureGroupBox->setObjectName(QString::fromUtf8("curvatureGroupBox"));
        verticalLayout = new QVBoxLayout(curvatureGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        curvMeanCheckBox = new QCheckBox(curvatureGroupBox);
        curvMeanCheckBox->setObjectName(QString::fromUtf8("curvMeanCheckBox"));

        verticalLayout->addWidget(curvMeanCheckBox);

        curvGaussCheckBox = new QCheckBox(curvatureGroupBox);
        curvGaussCheckBox->setObjectName(QString::fromUtf8("curvGaussCheckBox"));

        verticalLayout->addWidget(curvGaussCheckBox);

        curvNCRCheckBox = new QCheckBox(curvatureGroupBox);
        curvNCRCheckBox->setObjectName(QString::fromUtf8("curvNCRCheckBox"));

        verticalLayout->addWidget(curvNCRCheckBox);


        verticalLayout_5->addWidget(curvatureGroupBox);

        desnityGroupBox = new QGroupBox(GeomFeaturesDialog);
        desnityGroupBox->setObjectName(QString::fromUtf8("desnityGroupBox"));
        verticalLayout_3 = new QVBoxLayout(desnityGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        densityKnnCheckBox = new QCheckBox(desnityGroupBox);
        densityKnnCheckBox->setObjectName(QString::fromUtf8("densityKnnCheckBox"));

        verticalLayout_3->addWidget(densityKnnCheckBox);

        densitySurfCheckBox = new QCheckBox(desnityGroupBox);
        densitySurfCheckBox->setObjectName(QString::fromUtf8("densitySurfCheckBox"));

        verticalLayout_3->addWidget(densitySurfCheckBox);

        densityVolCheckBox = new QCheckBox(desnityGroupBox);
        densityVolCheckBox->setObjectName(QString::fromUtf8("densityVolCheckBox"));

        verticalLayout_3->addWidget(densityVolCheckBox);


        verticalLayout_5->addWidget(desnityGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        featureGroupBox = new QGroupBox(GeomFeaturesDialog);
        featureGroupBox->setObjectName(QString::fromUtf8("featureGroupBox"));
        verticalLayout_2 = new QVBoxLayout(featureGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        eigSumCheckBox = new QCheckBox(featureGroupBox);
        eigSumCheckBox->setObjectName(QString::fromUtf8("eigSumCheckBox"));

        verticalLayout_2->addWidget(eigSumCheckBox);

        eigOmnivarianceCheckBox = new QCheckBox(featureGroupBox);
        eigOmnivarianceCheckBox->setObjectName(QString::fromUtf8("eigOmnivarianceCheckBox"));

        verticalLayout_2->addWidget(eigOmnivarianceCheckBox);

        eigenentropyCheckBox = new QCheckBox(featureGroupBox);
        eigenentropyCheckBox->setObjectName(QString::fromUtf8("eigenentropyCheckBox"));

        verticalLayout_2->addWidget(eigenentropyCheckBox);

        eigAnisotropyCheckBox = new QCheckBox(featureGroupBox);
        eigAnisotropyCheckBox->setObjectName(QString::fromUtf8("eigAnisotropyCheckBox"));

        verticalLayout_2->addWidget(eigAnisotropyCheckBox);

        eigPlanarityBox = new QCheckBox(featureGroupBox);
        eigPlanarityBox->setObjectName(QString::fromUtf8("eigPlanarityBox"));

        verticalLayout_2->addWidget(eigPlanarityBox);

        eigLinearityCheckBox = new QCheckBox(featureGroupBox);
        eigLinearityCheckBox->setObjectName(QString::fromUtf8("eigLinearityCheckBox"));

        verticalLayout_2->addWidget(eigLinearityCheckBox);

        eigPCA1CheckBox = new QCheckBox(featureGroupBox);
        eigPCA1CheckBox->setObjectName(QString::fromUtf8("eigPCA1CheckBox"));

        verticalLayout_2->addWidget(eigPCA1CheckBox);

        eigPCA2CheckBox = new QCheckBox(featureGroupBox);
        eigPCA2CheckBox->setObjectName(QString::fromUtf8("eigPCA2CheckBox"));

        verticalLayout_2->addWidget(eigPCA2CheckBox);

        eigSurfaceVarCheckBox = new QCheckBox(featureGroupBox);
        eigSurfaceVarCheckBox->setObjectName(QString::fromUtf8("eigSurfaceVarCheckBox"));

        verticalLayout_2->addWidget(eigSurfaceVarCheckBox);

        eigSphericityCheckBox = new QCheckBox(featureGroupBox);
        eigSphericityCheckBox->setObjectName(QString::fromUtf8("eigSphericityCheckBox"));

        verticalLayout_2->addWidget(eigSphericityCheckBox);

        eigVerticalityCheckBox = new QCheckBox(featureGroupBox);
        eigVerticalityCheckBox->setObjectName(QString::fromUtf8("eigVerticalityCheckBox"));

        verticalLayout_2->addWidget(eigVerticalityCheckBox);


        verticalLayout_6->addWidget(featureGroupBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_6);


        verticalLayout_7->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        buttonBox = new QDialogButtonBox(GeomFeaturesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset);

        verticalLayout_7->addWidget(buttonBox);


        retranslateUi(GeomFeaturesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GeomFeaturesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GeomFeaturesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(GeomFeaturesDialog);
    } // setupUi

    void retranslateUi(QDialog *GeomFeaturesDialog)
    {
        GeomFeaturesDialog->setWindowTitle(QApplication::translate("GeomFeaturesDialog", "Geometric features", nullptr));
        groupBox->setTitle(QApplication::translate("GeomFeaturesDialog", "Local neighborhood radius", nullptr));
        label->setText(QApplication::translate("GeomFeaturesDialog", "radius", nullptr));
        roughnessGroupBox->setTitle(QApplication::translate("GeomFeaturesDialog", "Roughness", nullptr));
        roughnessCheckBox->setText(QApplication::translate("GeomFeaturesDialog", "Roughness", nullptr));
        curvatureGroupBox->setTitle(QApplication::translate("GeomFeaturesDialog", "Curvature", nullptr));
#ifndef QT_NO_TOOLTIP
        curvMeanCheckBox->setToolTip(QApplication::translate("GeomFeaturesDialog", "Mean curvature (unsigned)", nullptr));
#endif // QT_NO_TOOLTIP
        curvMeanCheckBox->setText(QApplication::translate("GeomFeaturesDialog", "Mean", nullptr));
#ifndef QT_NO_TOOLTIP
        curvGaussCheckBox->setToolTip(QApplication::translate("GeomFeaturesDialog", "Gaussian curvature (unsigned)", nullptr));
#endif // QT_NO_TOOLTIP
        curvGaussCheckBox->setText(QApplication::translate("GeomFeaturesDialog", "Gaussian", nullptr));
#ifndef QT_NO_TOOLTIP
        curvNCRCheckBox->setToolTip(QApplication::translate("GeomFeaturesDialog", "'Speed' of orientation change", nullptr));
#endif // QT_NO_TOOLTIP
        curvNCRCheckBox->setText(QApplication::translate("GeomFeaturesDialog", "Normal change rate", nullptr));
        desnityGroupBox->setTitle(QApplication::translate("GeomFeaturesDialog", "Density", nullptr));
#ifndef QT_NO_TOOLTIP
        densityKnnCheckBox->setToolTip(QApplication::translate("GeomFeaturesDialog", "Number of neighbors", nullptr));
#endif // QT_NO_TOOLTIP
        densityKnnCheckBox->setText(QApplication::translate("GeomFeaturesDialog", "Number of neighbors", nullptr));
#ifndef QT_NO_TOOLTIP
        densitySurfCheckBox->setToolTip(QApplication::translate("GeomFeaturesDialog", "Number of neighbors / neighborhood area", nullptr));
#endif // QT_NO_TOOLTIP
        densitySurfCheckBox->setText(QApplication::translate("GeomFeaturesDialog", "Surface density", nullptr));
#ifndef QT_NO_TOOLTIP
        densityVolCheckBox->setToolTip(QApplication::translate("GeomFeaturesDialog", "Number of neighbors / neighborhood volume", nullptr));
#endif // QT_NO_TOOLTIP
        densityVolCheckBox->setText(QApplication::translate("GeomFeaturesDialog", "Volume density", nullptr));
#ifndef QT_NO_TOOLTIP
        featureGroupBox->setToolTip(QApplication::translate("GeomFeaturesDialog", "Geometric features (based on local eigenvalues: (L1, L2, L3))", nullptr));
#endif // QT_NO_TOOLTIP
        featureGroupBox->setTitle(QApplication::translate("GeomFeaturesDialog", "Feature", nullptr));
#ifndef QT_NO_TOOLTIP
        eigSumCheckBox->setToolTip(QApplication::translate("GeomFeaturesDialog", "L1 + L2 + L3", nullptr));
#endif // QT_NO_TOOLTIP
        eigSumCheckBox->setText(QApplication::translate("GeomFeaturesDialog", "Sum of eigenvalues", nullptr));
#ifndef QT_NO_TOOLTIP
        eigOmnivarianceCheckBox->setToolTip(QApplication::translate("GeomFeaturesDialog", "(L1 * L2 * L3)^(1/3)", nullptr));
#endif // QT_NO_TOOLTIP
        eigOmnivarianceCheckBox->setText(QApplication::translate("GeomFeaturesDialog", "Ominvariance", nullptr));
#ifndef QT_NO_TOOLTIP
        eigenentropyCheckBox->setToolTip(QApplication::translate("GeomFeaturesDialog", "-( L1*ln(L1) + L2*ln(L2) + L3*ln(L3) )", nullptr));
#endif // QT_NO_TOOLTIP
        eigenentropyCheckBox->setText(QApplication::translate("GeomFeaturesDialog", "Eigenentropy", nullptr));
#ifndef QT_NO_TOOLTIP
        eigAnisotropyCheckBox->setToolTip(QApplication::translate("GeomFeaturesDialog", "(L1 - L3)/L1", nullptr));
#endif // QT_NO_TOOLTIP
        eigAnisotropyCheckBox->setText(QApplication::translate("GeomFeaturesDialog", "Anisotropy", nullptr));
#ifndef QT_NO_TOOLTIP
        eigPlanarityBox->setToolTip(QApplication::translate("GeomFeaturesDialog", "(L2 - L3)/L1", nullptr));
#endif // QT_NO_TOOLTIP
        eigPlanarityBox->setText(QApplication::translate("GeomFeaturesDialog", "Planarity", nullptr));
#ifndef QT_NO_TOOLTIP
        eigLinearityCheckBox->setToolTip(QApplication::translate("GeomFeaturesDialog", "(L1 - L2)/L1", nullptr));
#endif // QT_NO_TOOLTIP
        eigLinearityCheckBox->setText(QApplication::translate("GeomFeaturesDialog", "Linearity", nullptr));
#ifndef QT_NO_TOOLTIP
        eigPCA1CheckBox->setToolTip(QApplication::translate("GeomFeaturesDialog", "L1 / (L1 + L2 + L3)", nullptr));
#endif // QT_NO_TOOLTIP
        eigPCA1CheckBox->setText(QApplication::translate("GeomFeaturesDialog", "PCA1", nullptr));
#ifndef QT_NO_TOOLTIP
        eigPCA2CheckBox->setToolTip(QApplication::translate("GeomFeaturesDialog", "L2 / (L1 + L2 + L3)", nullptr));
#endif // QT_NO_TOOLTIP
        eigPCA2CheckBox->setText(QApplication::translate("GeomFeaturesDialog", "PCA2", nullptr));
#ifndef QT_NO_TOOLTIP
        eigSurfaceVarCheckBox->setToolTip(QApplication::translate("GeomFeaturesDialog", "L3 / (L1 + L2 + L3)", nullptr));
#endif // QT_NO_TOOLTIP
        eigSurfaceVarCheckBox->setText(QApplication::translate("GeomFeaturesDialog", "Surface variation", nullptr));
#ifndef QT_NO_TOOLTIP
        eigSphericityCheckBox->setToolTip(QApplication::translate("GeomFeaturesDialog", "L3 / L1", nullptr));
#endif // QT_NO_TOOLTIP
        eigSphericityCheckBox->setText(QApplication::translate("GeomFeaturesDialog", "Sphericity", nullptr));
#ifndef QT_NO_TOOLTIP
        eigVerticalityCheckBox->setToolTip(QApplication::translate("GeomFeaturesDialog", "1 - |Z.N|", nullptr));
#endif // QT_NO_TOOLTIP
        eigVerticalityCheckBox->setText(QApplication::translate("GeomFeaturesDialog", "Verticality", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GeomFeaturesDialog: public Ui_GeomFeaturesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEOMFEATURESDLG_H
