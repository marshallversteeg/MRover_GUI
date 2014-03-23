#include <QtGui/QGuiApplication>
#include "qtquick2applicationviewer.h"
#include <QFile>
#include <QDebug>
#include <QString>


int main(int argc, char *argv[])
{
    QString line;
    int x0, y0, x1, y1;
    x0 = 0;
    y0 = 0;
    QGuiApplication app(argc, argv);

    QtQuick2ApplicationViewer viewer;
    viewer.setMainQmlFile(QStringLiteral("qml/file_io/main.qml"));
    viewer.showExpanded();

    QFile file("C:/Qt/Tools/QtCreator/bin/file_io/in.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug() << "Can't open file!";
        //return -1;
    }

    while(!file.atEnd()){
        line = file.readLine();
       // qDebug() << line;
        x_coords = line.toInt();
        line = file.readLine();
       // qDebug() << line;
        y_coords = line.toInt();
        qDebug() << x1;
        qDebug() << y1;
        if(x1 == x0 & y1 == y0){
            //location is same, so dont add a new point
        }
        else {
            //do add a new point
            //qml.addpoint(x1, y1);
        }
    }

    file.close();

    return app.exec();
}
