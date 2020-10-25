#include <QtGui>
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include "window.h"

int main(int argc, char **argv) {
    QApplication app(argc, argv);
    Window w;
    w.setWindowState(Qt::WindowFullScreen);
    w.show();
    return app.exec();

}