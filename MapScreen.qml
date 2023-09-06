import QtQuick 2.15
import QtLocation 5.15
import QtCharts 2.15

Item {
    width: 800
    height: 600

    Rectangle {
        width: parent.width
        height: parent.height
        color: "#000000" // Black background

        Map {
            width: parent.width
            height: parent.height
            center: QtPositioning.coordinate(37.7749, -122.4194)
            zoomLevel: 12
            plugin: Plugin {
                name: "osm"
                property string apiKey: "YOUR_GOOGLE_MAPS_API_KEY"
            }
        }

        Rectangle {
            width: 100
            height: 60
            color: "#333" // Modified color
            radius: 10
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 20

            Image {
                source: "lefti.png"
                width: 10
                height: 10 // Adjust the height as needed
                anchors.top: parent.top
                anchors.left: parent.left
            }

            Text {
                text: "Back to Home"
                color: "#FFCC33" // Modified color
                font.bold: true
                anchors.centerIn: parent
            }

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    mainLoader.source = "mainhome.qml";
                    // Add code here to navigate back to the home screen
                    console.log("Navigating back to home screen");
                }
            }
        }
    }
}
