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
#include <QWebView>


int main(int argc, char **argv) {
    QApplication app(argc, argv);
    // QWebView::initialize();

    QWidget *window = new QWidget;

    QVBoxLayout *layout = new QVBoxLayout();
    QWebView* m_pWebView = new QWebView();
    m_pWebView->load(QUrl("http://www.example.com"));

    layout->addWidget(m_pWebView);

    window->setLayout(layout);
    // window->setWindowState(Qt::WindowFullScreen);
    window->show();

    return app.exec();
}
