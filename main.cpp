#include "mainwindow.h"
#include <QApplication>

#include <fstream>

int main(int argc, char *argv[])
{
    std::ofstream outFile("Input.dat");

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
