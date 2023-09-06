// backend.h
#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include <QDateTime>
#include <QTimer>

class Backend : public QObject
{
    Q_OBJECT
    Q_PROPERTY(qreal speedValue READ speedValue NOTIFY speedValueChanged)
    Q_PROPERTY(qreal rpmValue READ rpmValue NOTIFY rpmValueChanged)
    Q_PROPERTY(int batteryLevel READ batteryLevel NOTIFY batteryLevelChanged)
    Q_PROPERTY(int inclinationValue READ inclinationValue NOTIFY inclinationValueChanged)
    Q_PROPERTY(QString currentTime READ currentTime NOTIFY currentTimeChanged)
    Q_PROPERTY(QString currentDate READ currentDate NOTIFY currentDateChanged)

public:
    explicit Backend(QObject *parent = nullptr);

    qreal speedValue() const;
    qreal rpmValue() const;
    int batteryLevel() const;
    int inclinationValue() const;
    QString currentTime() const;
    QString currentDate() const;

public slots:
    void increaseAssistLevel();
    void decreaseAssistLevel();

private slots:
    void updateTime();

signals:
    void speedValueChanged(qreal value);
    void rpmValueChanged(qreal value);
    void batteryLevelChanged(int level);
    void inclinationValueChanged(int value);
    void currentTimeChanged(const QString& time);
    void currentDateChanged(const QString& date);

private:
    qreal m_speedValue;
    qreal m_rpmValue;
    int m_batteryLevel;
    int m_inclinationValue;
    int m_assistLevel;
    QString m_currentTime;
    QString m_currentDate;
    QTimer* m_timer;

    void updateBatteryLevel();
    void updateInclinationValue();
    void updateSpeedValue();
    void updateRPMValue();
};

#endif // BACKEND_H
