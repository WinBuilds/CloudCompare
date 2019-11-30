#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CloudCompare.h"

class CloudCompare : public QMainWindow
{
    Q_OBJECT

public:
    CloudCompare(QWidget *parent = Q_NULLPTR);

private:
    Ui::CloudCompareClass ui;
};
