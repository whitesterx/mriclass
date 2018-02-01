import QtQuick 2.10
import QtQuick.Controls 2.3
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.2

ApplicationWindow {
    id: window
    visible: true
    title: qsTr("МРТ Класс")


    header: ToolBar {
        id: toolBar
        Material.foreground: "white"
        contentHeight: window.height * 0.08

        RowLayout {
            id: rowLayout
            anchors.fill: parent
            spacing: 20

            ToolButton {
                id: toolButton
                icon.name: "drawer"
                icon.source: "/icons/20x20/drawer.png"
                onClicked: {
                    optionsMenu.open()
                    optionsMenu.currentIndex = -1
                }
                Menu {
                    id: optionsMenu
                    x: 0
                    y: toolBar.contentHeight
                    transformOrigin: Menu.TopRight

                    MenuItem {
                        id: aboutMenuItem
                        text: qsTr("О программе")
                    }
                }
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

    StackView {
        id: stackView
        initialItem: "MainForm.ui.qml"
        anchors.fill: parent
    }
}
