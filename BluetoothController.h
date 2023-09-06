#ifndef BLUETOOTHCONTROLLER_H
#define BLUETOOTHCONTROLLER_H

#include <QObject>
#include <QAbstractListModel>
#include <vector>

class DeviceListModel : public QAbstractListModel {
    Q_OBJECT
public:
    enum DeviceRoles {
        NameRole = Qt::UserRole + 1,
        AddressRole
    };

    DeviceListModel(QObject *parent = nullptr);

    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

protected:
    QHash<int, QByteArray> roleNames() const override;

public slots:
    void addDevice(const QString &name, const QString &address);

private:
    struct Device {
        QString name;
        QString address;
    };

    std::vector<Device> m_devices;
};

class BluetoothController : public QObject {
    Q_OBJECT

public:
    BluetoothController(QObject *parent = nullptr);
    Q_INVOKABLE void startDiscovery();
    Q_INVOKABLE void stopDiscovery();
    DeviceListModel *deviceListModel() const;

private:
    DeviceListModel *m_deviceListModel;
};

#endif // BLUETOOTHCONTROLLER_H
