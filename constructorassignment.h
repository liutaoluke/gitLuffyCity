#pragma once

#include <QObject>

#include <QDebug>
#include <QModbusDataUnit>
#include <QModbusReply>
#include <QQueue>
#include <QVector>

class ConstructorAssignment : public QObject {
    Q_OBJECT
public:
    explicit ConstructorAssignment(QObject *parent = nullptr);

    void testQModbusReply();
    void testQModbusDataUnit();
    void testQVector();
    void testQQueue();

signals:
};
