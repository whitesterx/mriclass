import QtQuick 2.10
import QtQuick.Controls 2.3
import QtQuick.Controls.Material 2.2

Pane {
	id: homeForm
	padding: 0
//	width: 360
//	height: 520

	ListView {
		id: listView
		anchors.fill: parent

		delegate: ItemDelegate {
			id: delegate
			width: parent.width
			height: window.height * 0.1
			text: model.title
			font.bold: false
			font.pixelSize: 20
		}

		model: ListModel {
			ListElement {
				title: qsTr("Классификация по Босняк")
				//source: ":/BosnyakInput.qml"
			}
		}
	}
}
