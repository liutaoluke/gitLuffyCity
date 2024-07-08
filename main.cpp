#include "mainwindow.h"

#include <QApplication>

#include "constructorassignment.h"
#include "destructor.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    ConstructorAssignment constructorAssignment;
    Destructor destructor;

    constructorAssignment.testQModbusReply();
    destructor.testQModbusReply();

    constructorAssignment.testQModbusDataUnit();
    destructor.testQModbusDataUnit();

    constructorAssignment.testQVector();
    constructorAssignment.testQQueue();

    MainWindow w;
    w.show();
    return a.exec();
}
