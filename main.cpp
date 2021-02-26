#include <QtGui>
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QtCore/QUrl>
#include <QtCore/QCommandLineOption>
#include <QtCore/QCommandLineParser>
#include <QGuiApplication>
#include <QStyleHints>
#include <QScreen>
#include <QQmlApplicationEngine>
#include <QtQml/QQmlContext>
#include <QtWebView>


int main(int argc, char **argv) {
    QApplication app(argc, argv);
    QtWebView::initialize();

    QWidget *window = new QWidget;

    QVBoxLayout *layout = new QVBoxLayout();


    QLineEdit *nameEdit = new QLineEdit("Dummy");

    QPushButton* m_button = new QPushButton("Hello World");
    m_button->setGeometry(100, 200, 200, 100);

    layout->addWidget(nameEdit);
    layout->addWidget(m_button);

    window->setLayout(layout);
    // window->setWindowState(Qt::WindowFullScreen);
    window->show();

    return app.exec();
}
