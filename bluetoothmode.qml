import QtQuick 2.15
import QtQuick.Controls 2.15

Rectangle {
    width: parent.width
    height: parent.height
    color: "black"

    Column {
        spacing: 10
        anchors.centerIn: parent

        Button {
            text: "Start Discovery"
            onClicked: bluetoothController.startDiscovery()
            width: 120
            height: 120

                background: Rectangle {
                    color: "#4caf50" // Green color
                    radius: 60
                }

        }

        Button {
            text: "Stop Discovery"
            onClicked: bluetoothController.stopDiscovery()
            width: 120
            height: 120
            background: Rectangle {
                color: "#4caf50" // Green color
                radius: 60
            }

        }

        ListView {
            width: 300
            height: 150

            model: bluetoothController.deviceListModel

            delegate: Item {
                width: parent.width
                height: 40

                Text {
                    text: model.name
                }

                Text {
                    anchors.right: parent.right
                    text: model.address
                }
            }
        }
    }

    Rectangle {
        width: 120
        height: 40
        color: "#444"
        radius: 10
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 20

        Text {
            text: "Back to Home"
            color: "white"
            font.bold: true
            anchors.centerIn: parent
        }

        MouseArea {
            anchors.fill: parent
            onClicked: {
                // Add code here to navigate back to the home screen
                mainLoader.source = "mainhome.qml"; // Replace with your actual home screen QML file
            }
        }
    }
}
