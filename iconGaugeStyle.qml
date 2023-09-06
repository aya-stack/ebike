import QtQuick 2.15

Item {
    property real speedValue: your_speed_value_here

    Rectangle {
        width: parent.width
        height: parent.height

        Image {
            source: "./UI/assets/gauge.jpg"
            anchors.centerIn: parent
            width: parent.width * 0.8
            height: width // To maintain aspect ratio
        }

        Rectangle {
            id: needle
            width: 5
            height: parent.height * 0.4
            color: "red"
            anchors.centerIn: parent
            transformOrigin: Item.Bottom

            // Rotate the needle based on the speed value
            rotation: -120 + (240 * (10/ 50)) // Assumes speed range from 0 to 50

            // Smooth animation for the needle movement (optional but looks nice)
            Behavior on rotation {
                NumberAnimation {
                    duration: 300 // Change this value for faster or slower animation
                }
            }
        }

        Text {
            text: "Speed: " + speedValue.toFixed(1) + " km/h"
            font.pixelSize: 20
            color: "white"
            anchors.centerIn: parent
        }
        Image {
            source: "./UI/assets/home.png.png"
            width: 32
            height: 32
            anchors.bottom: parent.bottom // Adjust the position as needed
            anchors.horizontalCenter: parent.horizontalCenter // Adjust the position as needed
        }
    }
}


}
