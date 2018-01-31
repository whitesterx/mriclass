import QtQuick 2.10
import QtQuick.Controls 2.3

Page {
    width: 360
    height: 520
    contentHeight: 520
    contentWidth: 360

    title: qsTr("Page 1")

    Label {
        text: qsTr("You are on Page 1.")
        anchors.centerIn: parent
    }
}
