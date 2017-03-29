import QtQuick 2.5
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.2

Item {
    property alias name: name
    width: 480
    height: 480
    property alias text12: text12
    property alias rect11: rect11
    property alias text6: text6
    property alias text1: text1
    property alias text7: text7
    property alias text8: text8
    property alias text11: text11
    property alias text10: text10
    property alias text13: text13
    property alias text14: text14
    property alias text15: text15
    property alias text16: text16
    property alias text17: text17
    property alias text18: text18
    property alias text19: text19
    property alias best: best
    property alias score: score
    property alias rec21: rec21
    property alias rec22: rec22
    property alias rec23: rec23
    property alias rec24: rec24
    property alias rec31: rec31
    property alias rec32: rec32
    property alias rec33: rec33
    property alias rec34: rec34
    property alias rec41: rec41
    property alias rec42: rec42
    property alias rec43: rec43
    property alias rec44: rec44
    property alias text5: text5
    property alias text4: text4
    property alias text3: text3
    property alias text2: text2
    property alias rec14: rec14
    property alias rec13: rec13
    property alias rec12: rec12
    property alias rec11: rec11
    property alias bcg: bcg
    property alias rowLayout: rowLayout
    opacity: 0.8

    property alias button1: button1
    property alias button2: button2

    RowLayout {
        id: rowLayout
        anchors.verticalCenterOffset: -132
        anchors.horizontalCenterOffset: 0
        anchors.centerIn: parent

        Button {
            id: button1
            text: qsTr("New Game")
        }

        Button {
            id: button2
            text: qsTr("Back")
        }
    }

    Rectangle {
        id: bcg
        x: 75
        y: 133
        width: 330
        height: 303
        color: "#bcb0b0"

        Rectangle {
            id: rec11
            x: 15
            y: 13
            width: 60
            height: 60
            color: vueObjetCpt.cptQMLcouleur[0]
            radius: 0
            border.width: 0

            Text {
                id: rect11
                x: 0
                y: 0
                width: 60
                height: 60
                text: vueObjetCpt.cptQML[0]
                font.family: "Times New Roman"
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
                wrapMode: Text.NoWrap
                fontSizeMode: Text.Fit
                textFormat: Text.AutoText
                elide: Text.ElideMiddle
                font.pixelSize: 20
                font.bold: true
                renderType: Text.QtRendering
                focus: true
            }
        }

        Rectangle {
            id: rec12
            x: 97
            y: 13
            width: 60
            height: 60
            color: vueObjetCpt.cptQMLcouleur[1]

            Text {
                id: text6
                x: 0
                y: 0
                width: 60
                height: 60
                text: vueObjetCpt.cptQML[1]
                font.family: "Times New Roman"
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
                wrapMode: Text.NoWrap
                fontSizeMode: Text.Fit
                textFormat: Text.AutoText
                elide: Text.ElideMiddle
                font.pixelSize: 20
                font.bold: true
                renderType: Text.QtRendering
                focus: true
            }
        }

        Rectangle {
            id: rec13
            x: 175
            y: 13
            width: 60
            height: 60
            color: vueObjetCpt.cptQMLcouleur[2]

            Text {
                id: text1
                x: 0
                y: 0
                width: 60
                height: 60
                text: vueObjetCpt.cptQML[2]
                font.family: "Times New Roman"
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
                wrapMode: Text.NoWrap
                fontSizeMode: Text.Fit
                textFormat: Text.AutoText
                elide: Text.ElideMiddle
                font.pixelSize: 20
                font.bold: true
                renderType: Text.QtRendering
                focus: true
            }
        }

        Rectangle {
            id: rec14
            x: 255
            y: 13
            width: 60
            height: 60
            color: vueObjetCpt.cptQMLcouleur[3]

            Text {
                id: text7
                x: 0
                y: 0
                width: 60
                height: 60
                text: vueObjetCpt.cptQML[3]
                font.family: "Times New Roman"
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
                wrapMode: Text.NoWrap
                fontSizeMode: Text.Fit
                textFormat: Text.AutoText
                elide: Text.ElideMiddle
                font.pixelSize: 20
                font.bold: true
                renderType: Text.QtRendering
                focus: true
            }
        }

        Rectangle {
            id: rec21
            x: 15
            y: 87
            width: 60
            height: 60
            color: vueObjetCpt.cptQMLcouleur[4]

            Text {
                id: text8
                x: 0
                y: 0
                width: 60
                height: 60
                text: vueObjetCpt.cptQML[4]
                font.family: "Times New Roman"
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
                wrapMode: Text.NoWrap
                fontSizeMode: Text.Fit
                textFormat: Text.AutoText
                elide: Text.ElideMiddle
                font.pixelSize: 20
                font.bold: true
                renderType: Text.QtRendering
                focus: true
            }
        }

        Rectangle {
            id: rec22
            x: 97
            y: 87
            width: 60
            height: 60
            color: vueObjetCpt.cptQMLcouleur[5]

            Text {
                id: text20
                x: 0
                y: 0
                width: 60
                height: 60
                text: vueObjetCpt.cptQML[5]
                font.family: "Times New Roman"
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
                wrapMode: Text.NoWrap
                fontSizeMode: Text.Fit
                textFormat: Text.AutoText
                elide: Text.ElideMiddle
                font.pixelSize: 20
                font.bold: true
                renderType: Text.QtRendering
                focus: true
            }
        }

        Rectangle {
            id: rec23
            x: 175
            y: 87
            width: 60
            height: 60
            color: vueObjetCpt.cptQMLcouleur[6]

            Text {
                id: text10
                x: 0
                y: 0
                width: 60
                height: 60
                text: vueObjetCpt.cptQML[6]
                font.family: "Times New Roman"
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
                wrapMode: Text.NoWrap
                fontSizeMode: Text.Fit
                textFormat: Text.AutoText
                elide: Text.ElideMiddle
                font.pixelSize: 20
                font.bold: true
                renderType: Text.QtRendering
                focus: true
            }
        }

        Rectangle {
            id: rec24
            x: 255
            y: 87
            width: 60
            height: 60
            color: vueObjetCpt.cptQMLcouleur[7]

            Text {
                id: text11
                x: 0
                y: 0
                width: 60
                height: 60
                text: vueObjetCpt.cptQML[7]
                font.family: "Times New Roman"
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
                wrapMode: Text.NoWrap
                fontSizeMode: Text.Fit
                textFormat: Text.AutoText
                elide: Text.ElideMiddle
                font.pixelSize: 20
                font.bold: true
                renderType: Text.QtRendering
                focus: true
            }
        }

        Rectangle {
            id: rec31
            x: 15
            y: 159
            width: 60
            height: 60
            color: vueObjetCpt.cptQMLcouleur[8]

            Text {
                id: text12
                x: 0
                y: 0
                width: 60
                height: 60
                text: vueObjetCpt.cptQML[8]
                font.family: "Times New Roman"
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
                wrapMode: Text.NoWrap
                fontSizeMode: Text.Fit
                textFormat: Text.AutoText
                elide: Text.ElideMiddle
                font.pixelSize: 20
                font.bold: true
                renderType: Text.QtRendering
                focus: true
            }
        }

        Rectangle {
            id: rec32
            x: 97
            y: 159
            width: 60
            height: 60
            color: vueObjetCpt.cptQMLcouleur[9]

            Text {
                id: text13
                x: 0
                y: 0
                width: 60
                height: 60
                text: vueObjetCpt.cptQML[9]
                font.family: "Times New Roman"
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
                wrapMode: Text.NoWrap
                fontSizeMode: Text.Fit
                textFormat: Text.AutoText
                elide: Text.ElideMiddle
                font.pixelSize: 20
                font.bold: true
                renderType: Text.QtRendering
                focus: true
            }
        }

        Rectangle {
            id: rec33
            x: 175
            y: 159
            width: 60
            height: 60
            color: vueObjetCpt.cptQMLcouleur[10]

            Text {
                id: text14
                x: 0
                y: 0
                width: 60
                height: 60
                text: vueObjetCpt.cptQML[10]
                font.family: "Times New Roman"
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
                wrapMode: Text.NoWrap
                fontSizeMode: Text.Fit
                textFormat: Text.AutoText
                elide: Text.ElideMiddle
                font.pixelSize: 20
                font.bold: true
                renderType: Text.QtRendering
                focus: true
            }
        }

        Rectangle {
            id: rec34
            x: 255
            y: 159
            width: 60
            height: 60
            color: vueObjetCpt.cptQMLcouleur[11]

            Text {
                id: text15
                x: 0
                y: 0
                width: 60
                height: 60
                text: vueObjetCpt.cptQML[11]
                font.family: "Times New Roman"
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
                wrapMode: Text.NoWrap
                fontSizeMode: Text.Fit
                textFormat: Text.AutoText
                elide: Text.ElideMiddle
                font.pixelSize: 20
                font.bold: true
                renderType: Text.QtRendering
                focus: true
            }
        }

        Rectangle {
            id: rec41
            x: 15
            y: 231
            width: 60
            height: 60
            color: vueObjetCpt.cptQMLcouleur[12]

            Text {
                id: text16
                x: 0
                y: 0
                width: 60
                height: 60
                text: vueObjetCpt.cptQML[12]
                font.family: "Times New Roman"
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
                wrapMode: Text.NoWrap
                fontSizeMode: Text.Fit
                textFormat: Text.AutoText
                elide: Text.ElideMiddle
                font.pixelSize: 20
                font.bold: true
                renderType: Text.QtRendering
                focus: true
            }
        }

        Rectangle {
            id: rec42
            x: 97
            y: 231
            width: 60
            height: 60
            color: vueObjetCpt.cptQMLcouleur[13]

            Text {
                id: text17
                x: 0
                y: 0
                width: 60
                height: 60
                text: vueObjetCpt.cptQML[13]
                font.family: "Times New Roman"
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
                wrapMode: Text.NoWrap
                fontSizeMode: Text.Fit
                textFormat: Text.AutoText
                elide: Text.ElideMiddle
                font.pixelSize: 20
                font.bold: true
                renderType: Text.QtRendering
                focus: true
            }
        }

        Rectangle {
            id: rec43
            x: 175
            y: 231
            width: 60
            height: 60
            color: vueObjetCpt.cptQMLcouleur[14]

            Text {
                id: text18
                x: 0
                y: 0
                width: 60
                height: 60
                text: vueObjetCpt.cptQML[14]
                font.family: "Times New Roman"
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
                wrapMode: Text.NoWrap
                fontSizeMode: Text.Fit
                textFormat: Text.AutoText
                elide: Text.ElideMiddle
                font.pixelSize: 20
                font.bold: true
                renderType: Text.QtRendering
                focus: true
            }
        }

        Rectangle {
            id: rec44
            x: 255
            y: 231
            width: 60
            height: 60
            color: vueObjetCpt.cptQMLcouleur[15]

            Text {
                id: text19
                x: 0
                y: 0
                width: 60
                height: 60
                text: vueObjetCpt.cptQML[15]
                font.family: "Times New Roman"
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
                wrapMode: Text.NoWrap
                fontSizeMode: Text.Fit
                textFormat: Text.AutoText
                elide: Text.ElideMiddle
                font.pixelSize: 20
                font.bold: true
                renderType: Text.QtRendering
                focus: true
            }
        }

                Keys.onPressed: {
                  switch (event.key) {
                    case Qt.Key_Up:
                      vueObjetCpt.Up();
                      break;
                    case Qt.Key_Down:
                      vueObjetCpt.Down();
                      break;
                    case Qt.Key_Left:
                      vueObjetCpt.Left();
                      break;
                    case Qt.Key_Right:
                      vueObjetCpt.Right();
                      break;
                  }
                }
    }

    Text {
        id: name
        x: 67
        y: 30
        width: 100
        height: 49
        color: "#75400a"
        text: qsTr("2048")
        font.pixelSize: 46
        font.bold: true
        font.family: "Times New Roman"
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter
        elide: Text.ElideMiddle
    }

    Rectangle {
        id: score
        x: 275
        y: 27
        width: 71
        height: 57
        color: "#976a23"

        Text {
            id: text2
            x: 14
            y: 6
            width: 44
            height: 22
            text: qsTr("Score")
            font.family: "Times New Roman"
            font.bold: false
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            fontSizeMode: Text.FixedSize
            font.pixelSize: 15
        }

        Text {
            id: text3
            x: 15
            y: 26
            width: 43
            height: 24
            text: vueObjetCpt.cptQMLscore
            fontSizeMode: Text.Fit
            elide: Text.ElideMiddle
            focus: true
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.bold: true
            font.pixelSize: 15
        }
    }

    Rectangle {
        id: best
        x: 367
        y: 27
        width: 71
        height: 57
        color: "#976a23"
        Text {
            id: text4
            x: 14
            y: 6
            width: 44
            height: 22
            text: "Best"
            font.family: "Times New Roman"
            verticalAlignment: Text.AlignVCenter
            font.pixelSize: 15
            font.bold: true
            fontSizeMode: Text.FixedSize
            horizontalAlignment: Text.AlignHCenter
        }

        Text {
            id: text5
            x: 15
            y: 26
            width: 43
            height: 24
            text: vueObjetCpt.cptQMLbest
            fontSizeMode: Text.Fit
            elide: Text.ElideMiddle
            focus: true
            verticalAlignment: Text.AlignVCenter
            font.pixelSize: 16
            font.bold: true
            horizontalAlignment: Text.AlignHCenter
        }
    }
}
