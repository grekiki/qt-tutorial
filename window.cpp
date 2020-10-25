#include "window.h"
#include <QPushButton>

Window::Window(QWidget *parent) :QWidget(parent){
  m_button = new QPushButton("Hello World", this);
  m_button->setGeometry(100, 200, 200, 100);
}