import QtQuick 2.15
import QtQuick.Controls 2.15



    Rectangle {
        width: parent.width
        height: parent.height
        color: "#000000" // Black background


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

        Column {
            spacing: 20 // Increased spacing
            anchors.centerIn: parent
            width: parent.width * 0.8


            Text {
                text: "E-Bike Battery Information"
                font.pixelSize: 20
                color: "white"
                horizontalAlignment: Text.AlignHCenter
            }

            Rectangle {
                width: parent.width * 0.7
                height: 5
                color: "white"
            }


            // Left Motor Battery Info
            Rectangle {
                width: parent.width * 0.7
                height: parent.height * 0.2 // Smaller height
                color: "#222"
                radius: 10

                Column {
                    spacing: 5 // Smaller spacing
                    padding: 5  // Smaller padding

                    Text {
                        text: "Left Motor Battery"
                        color: "white"
                        font.bold: true
                    }

                    ProgressBar {
                        value: 60 // Replace with actual battery level
                        width: parent.width * 0.5
                        height: 5  // Smaller height
                        background: Rectangle {
                            radius: 2.5  // Smaller radius
                            color: "#444"
                        }
                        contentItem: Rectangle {
                            radius: 2.5  // Smaller radius
                            color: "#00CC66"
                        }
                    }

                    Text {
                        text: "Capacity: 5000 mAh" // Replace with actual capacity
                        color: "white"
                    }

                    Text {
                        text: "Charging: Discharging" // Replace with actual status
                        color: "#00CC66"
                    }
                }
            }

            // Add some additional spacing here
            Rectangle {
                width: 1
                height: 10
                color: "transparent"
            }

            // Right Motor Battery Info
            Rectangle {
                width: parent.width * 0.7
                height: parent.height * 0.2 // Smaller height
                color: "#222"
                radius: 10

                Column {
                    spacing: 5 // Smaller spacing
                    padding: 5  // Smaller padding

                    Text {
                        text: "Right Motor Battery"
                        color: "white"
                        font.bold: true
                    }

                    ProgressBar {
                        value: 75 // Replace with actual battery level
                        width: parent.width * 0.5
                        height: 5  // Smaller height
                        background: Rectangle {
                            radius: 2.5  // Smaller radius
                            color: "#444"
                        }
                        contentItem: Rectangle {
                            radius: 2.5  // Smaller radius
                            color: "#00CC66"
                        }
                    }

                    Text {
                        text: "Capacity: 4500 mAh" // Replace with actual capacity
                        color: "white"
                    }

                    Text {
                        text: "Charging: Charging" // Replace with actual status
                        color: "#FF6666"
                    }
                }
            }

            // Add some additional spacing here
            Rectangle {
                width: 1
                height: 10
                color: "transparent"
            }

            // PV Contribution Rectangle
            Rectangle {
                width: parent.width * 0.7
                height: parent.height * 0.15 // Smaller height
                color: "#222"
                radius: 10

                Column {
                    spacing: 5 // Smaller spacing
                    padding: 5  // Smaller padding

                    Text {
                        text: "PV Contribution"
                        color: "white"
                        font.bold: true
                    }

                    ProgressBar {
                        value: 30 // Replace with actual PV contribution percentage
                        width: parent.width * 0.5
                        height: 5  // Smaller height
                        background: Rectangle {
                            radius: 2.5  // Smaller radius
                            color: "#444"
                        }
                        contentItem: Rectangle {
                            radius: 2.5  // Smaller radius
                            color: "#FFCC33"
                        }
                    }

                    Text {
                        text: "Contribution: 30%" // Replace with actual PV contribution percentage
                        color: "white"
                    }
                }
            }
        }
    }

