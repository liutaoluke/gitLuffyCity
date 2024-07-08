#pragma once

#include <QDebug>
#include <QModbusDataUnit>
#include <QModbusReply>
#include <QObject>
#include <type_traits>

class Destructor : public QObject {
    Q_OBJECT
public:
    explicit Destructor(QObject *parent = nullptr);

    void testQModbusReply();
    void testQModbusDataUnit();

signals:
};
