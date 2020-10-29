#pragma once
#include <QWidget>
#include <QPushButton>
#include <QButtonGroup>
#include <QVBoxLayout>
#include <QStackedLayout>
#include <QLineEdit>

class KeyboardLayout : public QWidget{
  Q_OBJECT
  private:

  public:
    explicit KeyboardLayout(QWidget *parent, QVector<QString> p[4]);
};

class Keyboard : public QWidget {
  Q_OBJECT

  public:
    explicit Keyboard(QWidget *parent = 0);
  private:
    QStackedLayout* main_layout;
  private slots:
    void handleButton(QAbstractButton* m_button);
  signals:
    void emitButton(QString s);

};


class InputField : public QWidget {
  Q_OBJECT

  public:
    explicit InputField(QWidget* parent = 0);
  
  private:
    Keyboard* k;
    QLineEdit* line;
    QVBoxLayout* l;
    bool eventFilter(QObject* object, QEvent* event);
  public slots:
    void getText(QString s);
  signals:
    void emitText(QString s);
};