#include "sjmainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    sjMainWindow w;
    w.show();
    return a.exec();
}
