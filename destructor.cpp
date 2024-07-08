#include "destructor.h"

Destructor::Destructor(QObject *parent)
    : QObject{parent} {}

void Destructor::testQModbusReply() {
    bool isDestructible = std::is_destructible<QModbusReply>::value;

    qDebug() << "QModbusReply destructible: " << isDestructible;
}

void Destructor::testQModbusDataUnit() {
    bool isDestructible = std::is_destructible<QModbusDataUnit>::value;

    qDebug() << "QModbusDataUnit destructible: " << isDestructible;
}
