#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); // "a" = application
    MainWindow w; // "w" = window
    w.show();

    return a.exec();
}
