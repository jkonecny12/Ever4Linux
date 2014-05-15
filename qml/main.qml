import QtQuick 2.0
import QtQuick.Controls 1.0

ApplicationWindow {
	id: root
	width: 800
	height: 600
	title: "Autorenamer"
	visible: true
	
	LeftPanel {
		id: panel
		width: parent.width * 0.15
		anchors {
			left: parent.left
			top: parent.top
			bottom: parent.bottom
		}
	}
}