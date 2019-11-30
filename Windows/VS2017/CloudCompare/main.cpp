#include "CloudCompare.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CloudCompare w;
    w.show();
    return a.exec();
}
