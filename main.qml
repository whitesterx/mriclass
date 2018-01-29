import QtQuick 2.10
import QtQuick.Controls 2.3
import QtQuick.Layouts 1.3

ApplicationWindow {
    id: window
    visible: true
    title: qsTr("МРТ Класс")


    header: ToolBar {
        id: toolBar
        contentHeight: window.height * 0.08

        background: Rectangle {
                id: toolBarBackRect
                anchors.fill: parent
                color: "#4e73fc"
            }

        RowLayout {
            id: rowLayout
            anchors.fill: parent

            ToolButton {
                id: toolButton
                implicitHeight: toolBar.contentHeight
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
                }
            }

            Label {
                font.pixelSize: toolBar.contentHeight * 0.4
                color: "white"
                text: qsTr("МРТ Класс")
                anchors.centerIn: parent
            }
        }
    }

    Drawer {
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
    }

    StackView {
        id: stackView
        initialItem: "HomeForm.ui.qml"
        anchors.fill: parent
    }
}
