import QtQuick 2.12
import QtQuick.Window 2.12

Rectangle{
    color: "red"
    Text {
        id: name
        text: qsTr("textttttttt" + classXY.dataX)
        anchors.fill: parent
        z: 1001
    }
    width: 500
    height: 500
    z: 1000
}
