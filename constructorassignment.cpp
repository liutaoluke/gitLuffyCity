#include "constructorassignment.h"

#include <type_traits>

ConstructorAssignment::ConstructorAssignment(QObject *parent)
    : QObject{parent} {}

void ConstructorAssignment::testQModbusReply() {
    bool isCopyConstructible = std::is_copy_constructible<QModbusReply>::value;
    bool isCopyAssignable = std::is_copy_assignable<QModbusReply>::value;

    bool isMoveConstructible = std::is_move_constructible<QModbusReply>::value;
    bool isMoveAssignable = std::is_move_assignable<QModbusReply>::value;

    qDebug() << "QModbusReply copy constructible: " << isCopyConstructible;
    qDebug() << "QModbusReply copy assignable: " << isCopyAssignable;

    qDebug() << "QModbusReply move constructible: " << isMoveConstructible;
    qDebug() << "QModbusReply move assignable: " << isMoveAssignable;
}

void ConstructorAssignment::testQModbusDataUnit() {
    bool isCopyConstructible = std::is_copy_constructible<QModbusDataUnit>::value;
    bool isCopyAssignable = std::is_copy_assignable<QModbusDataUnit>::value;

    bool isMoveConstructible = std::is_move_constructible<QModbusDataUnit>::value;
    bool isMoveAssignable = std::is_move_assignable<QModbusDataUnit>::value;

    qDebug() << "QModbusDataUnit copy constructible: " << isCopyConstructible;
    qDebug() << "QModbusDataUnit copy assignable: " << isCopyAssignable;

    qDebug() << "QModbusReply move constructible: " << isMoveConstructible;
    qDebug() << "QModbusReply move assignable: " << isMoveAssignable;
}

void ConstructorAssignment::testQVector() {
    bool isCopyConstructible = std::is_copy_constructible<QVector<quint16>>::value;
    bool isCopyAssignable = std::is_copy_assignable<QVector<quint16>>::value;

    bool isMoveConstructible = std::is_move_constructible<QVector<quint16>>::value;
    bool isMoveAssignable = std::is_move_assignable<QVector<quint16>>::value;

    qDebug() << "QVector<quint16> copy constructible: " << isCopyConstructible;
    qDebug() << "QVector<quint16> copy assignable: " << isCopyAssignable;

    qDebug() << "QVector<quint16> move constructible: " << isMoveConstructible;
    qDebug() << "QVector<quint16> move assignable: " << isMoveAssignable;
}

void ConstructorAssignment::testQQueue() {
    bool isCopyConstructible = std::is_copy_constructible<QQueue<QModbusReply>>::value;
    bool isCopyAssignable = std::is_copy_assignable<QQueue<QModbusReply>>::value;

    bool isMoveConstructible = std::is_move_constructible<QQueue<QModbusReply>>::value;
    bool isMoveAssignable = std::is_move_assignable<QQueue<QModbusReply>>::value;

    qDebug() << "QQueue<QModbusReply> copy constructible: " << isCopyConstructible;
    qDebug() << "QQueue<QModbusReply> copy assignable: " << isCopyAssignable;

    qDebug() << "QQueue<QModbusReply> move constructible: " << isMoveConstructible;
    qDebug() << "QQueue<QModbusReply> move assignable: " << isMoveAssignable;
}
