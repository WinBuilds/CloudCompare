#include "ccViewer.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ccViewer w;
    w.show();
    return a.exec();
}
