#include "input_field.hpp"
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

    InputField* i = new InputField;
    layout-> addWidget(i);

    QLineEdit *nameEdit = new QLineEdit("Dummy");

    QPushButton* m_button = new QPushButton("Hello World");
    m_button->setGeometry(100, 200, 200, 100);

    layout->addWidget(i);
    layout->addWidget(nameEdit);
    layout->addWidget(m_button);

    window->setLayout(layout);
    window->setWindowState(Qt::WindowFullScreen);
    window->show();

    return app.exec();

}