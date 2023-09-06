import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("ebike")


    Loader {
        id:mainLoader
         anchors.fill:parent
         source: "qrc:/UI/HomeScreen/HomeScreen.qml"


   }

    function loadSecondScreen() {
            mainLoader.source = "SecondScreen.qml";
        }





}
