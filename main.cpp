#include "mainwindow.h"

#include <QApplication>

#include "constructorassignment.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    ConstructorAssignment constructorAssignment;
    constructorAssignment.testQModbusReply();
    constructorAssignment.testQModbusDataUnit();
    constructorAssignment.testQVector();
    constructorAssignment.testQQueue();

    MainWindow w;
    w.show();
    return a.exec();
}
