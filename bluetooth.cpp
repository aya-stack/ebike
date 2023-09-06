#include "BluetoothController.h"
#include <QBluetoothDeviceInfo>
#include <QBluetoothDeviceDiscoveryAgent>

DeviceListModel::DeviceListModel(QObject *parent)
    : QAbstractListModel(parent) {}

int DeviceListModel::rowCount(const QModelIndex &parent) const {
    Q_UNUSED(parent);
    return static_cast<int>(m_devices.size());
}

QVariant DeviceListModel::data(const QModelIndex &index, int role) const {
    if (!index.isValid() || index.row() >= static_cast<int>(m_devices.size()))
        return QVariant();

    const Device &device = m_devices[index.row()];
    if (role == NameRole)
        return device.name;
    else if (role == AddressRole)
        return device.address;

    return QVariant();
}

QHash<int, QByteArray> DeviceListModel::roleNames() const {
    QHash<int, QByteArray> roles;
    roles[NameRole] = "name";
    roles[AddressRole] = "address";
    return roles;
}

void DeviceListModel::addDevice(const QString &name, const QString &address) {
    beginInsertRows(QModelIndex(), rowCount(), rowCount());
    DeviceListModel::Device device;
    device.name = name;
    device.address = address;
    m_devices.push_back(device);
    endInsertRows();
}

BluetoothController::BluetoothController(QObject *parent)
    : QObject(parent), m_deviceListModel(new DeviceListModel(this)) {}

void BluetoothController::startDiscovery() {
    // Use QBluetoothDeviceDiscoveryAgent to start Bluetooth device discovery
    QBluetoothDeviceDiscoveryAgent *discoveryAgent = new QBluetoothDeviceDiscoveryAgent(this);

    connect(discoveryAgent, &QBluetoothDeviceDiscoveryAgent::deviceDiscovered,
            [this](const QBluetoothDeviceInfo &info) {
                m_deviceListModel->addDevice(info.name(), info.address().toString());
            });

    discoveryAgent->start();
}

void BluetoothController::stopDiscovery() {
    // Implement code to stop Bluetooth device discovery
}

DeviceListModel *BluetoothController::deviceListModel() const {
    return m_deviceListModel;
}
