#include <QtGui>
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QVBoxLayout>

int main(int argc, char **argv) {
    qputenv("QT_IM_MODULE", QByteArray("qtvirtualkeyboard"));
    QApplication app(argc, argv);

    QWidget *window = new QWidget;

    QVBoxLayout *layout = new QVBoxLayout();
    QLineEdit *nameEdit = new QLineEdit("Input line");
    QPushButton* m_button = new QPushButton("Hello World");
    m_button->setGeometry(100, 200, 200, 100);
    layout->addWidget(nameEdit);
    layout->addWidget(m_button);

    window->setLayout(layout);
    window->show();

    return app.exec();

}