import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    ListView {
        width: 200; height: 250

        model: myModel
        delegate: Text { text: "Type: " + type + ", name:" + name }
    }
}
