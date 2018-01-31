import QtQuick 2.10
import QtQuick.Controls 2.3
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.2

ApplicationWindow {
    id: window
//    width: 360
//    height: 520
    visible: true
    title: qsTr("МРТ Класс")


    header: ToolBar {
        id: toolBar
        Material.foreground: "white"

   /*     contentHeight: window.height * 0.08

        background: Rectangle {
                id: toolBarBackRect
                anchors.fill: parent
                color: "#4e73fc"
            }*/

        RowLayout {
            id: rowLayout
            anchors.fill: parent
            spacing: 20

            ToolButton {
                id: toolButton
                icon.name: "drawer"
                icon.source: "/icons/20x20/drawer.png"
/*                implicitHeight: toolBar.contentHeight
                implicitWidth: toolBar.contentHeight
                //text: stackView.depth > 1 ? "\u25C0" : qsTr("\u2261")
                //font.pixelSize: Qt.application.font.pixelSize * 1.6

                background: Rectangle {
                    anchors.fill: parent
                    color: "#4e73fc"
                }

                Image {
                    id: menuIcon
                    source: "pics/menu64.png"
                    fillMode: Image.PreserveAspectFit
                    anchors.centerIn: parent
                }

                onClicked: {
                    if (stackView.depth > 1) {
                        stackView.pop()
                    } else {
                        drawer.open()
                    }
                }*/
            }

            Label {
                id: titleLabel
                text: qsTr("МРТ Класс")
                font.pixelSize: 20
                elide: Label.ElideRight
                horizontalAlignment: Qt.AlignHCenter
                verticalAlignment: Qt.AlignVCenter
                anchors.centerIn: parent
            }
        }
    }

/*    Drawer {
        id: drawer
        width: window.width * 0.66
        height: window.height

        Column {
            anchors.fill: parent

            ItemDelegate {
                text: qsTr("Page 1")
                width: parent.width
                onClicked: {
                    stackView.push("Page1Form.ui.qml")
                    drawer.close()
                }
            }
            ItemDelegate {
                text: qsTr("Page 2")
                width: parent.width
                onClicked: {
                    stackView.push("Page2Form.ui.qml")
                    drawer.close()
                }
            }
        }
    }*/

    StackView {
        id: stackView
        initialItem: "MainForm.ui.qml"
        anchors.fill: parent
    }
}
