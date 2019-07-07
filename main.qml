import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    ListView {
        width: 100; height: 100

        model: myModel
        delegate: Rectangle {
            height: 25
            width: 100
            color: model.modelData.color
            Text { text: "nome: " + name + "tipo: " + type }
        }
    }
}
