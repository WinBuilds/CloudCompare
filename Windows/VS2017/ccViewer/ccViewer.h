#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ccViewer.h"

class ccViewer : public QMainWindow
{
    Q_OBJECT

public:
    ccViewer(QWidget *parent = Q_NULLPTR);

private:
    Ui::ccViewerClass ui;
};
