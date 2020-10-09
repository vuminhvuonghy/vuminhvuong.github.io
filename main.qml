import QtQuick 2.12
import QtQuick.Window 2.12

Item {
    visible: true
    width: 640
    height: 480
    Loader{
        source: "qml/qmlfile1.qml"
    }
    Component.onCompleted: {
        console.log(" started !!!")
    }
}
