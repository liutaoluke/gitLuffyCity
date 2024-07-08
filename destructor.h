#pragma once

#include <QObject>

class Destructor : public QObject {
    Q_OBJECT
public:
    explicit Destructor(QObject *parent = nullptr);

signals:
};
