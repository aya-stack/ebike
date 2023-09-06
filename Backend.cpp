// backend.cpp
#include "backend.h"
#include <cstdlib>
#include <QRandomGenerator>

Backend::Backend(QObject *parent) : QObject(parent), m_speedValue(0), m_rpmValue(100),
    m_batteryLevel(20), m_inclinationValue(30), m_assistLevel(0)
{
    m_timer = new QTimer(this);
    connect(m_timer, &QTimer::timeout, this, &Backend::updateTime);
    m_timer->start(1000); // 1 second interval for updating time
    updateTime();
}

qreal Backend::speedValue() const
{
    return m_speedValue;
}

qreal Backend::rpmValue() const
{
    return m_rpmValue;
}

int Backend::batteryLevel() const
{
    return m_batteryLevel;
}

int Backend::inclinationValue() const
{
    return m_inclinationValue;
}

QString Backend::currentTime() const
{
    return m_currentTime;
}

QString Backend::currentDate() const
{
    return m_currentDate;
}



void Backend::updateTime()
{
    QDateTime currentTime = QDateTime::currentDateTime();
    m_currentTime = currentTime.toString("hh:mm:ss");
    m_currentDate = currentTime.toString("dd MMM yyyy");
    emit currentTimeChanged(m_currentTime);
    emit currentDateChanged(m_currentDate);
    updateBatteryLevel();
    updateInclinationValue();
    updateSpeedValue();
    updateRPMValue();
}

void Backend::updateBatteryLevel()
{

    emit batteryLevelChanged(m_batteryLevel);
}

void Backend::updateInclinationValue()
{

    m_inclinationValue = QRandomGenerator::global()->bounded(-90, 91);
    emit inclinationValueChanged(m_inclinationValue);
}

void Backend::updateSpeedValue()
{


    emit speedValueChanged(m_speedValue);
}

void Backend::updateRPMValue()
{

    emit rpmValueChanged(m_rpmValue);
}
