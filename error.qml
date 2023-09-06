import QtQuick 2.15
import QtCharts 2.15

ChartView {
    width: parent.width
    height: parent.height

    antialiasing: true

    DateTimeAxis {
        id: xAxis
        titleText: "Time"
        format: "dd/MM/yyyy"
    }

    LogValueAxis {
        id: yAxis
        titleText: "Distance (km)"
        base: 10
    }

    LineSeries {
        name: "Distance"
        axisX: xAxis
        axisY: yAxis
        color: "blue"

        XYPoint { x: new Date("2023-01-01"); y: 5 }
        XYPoint { x: new Date("2023-01-02"); y: 10 }
        XYPoint { x: new Date("2023-01-03"); y: 15 }
        XYPoint { x: new Date("2023-01-04"); y: 8 }
        XYPoint { x: new Date("2023-01-05"); y: 12 }
    }
}
