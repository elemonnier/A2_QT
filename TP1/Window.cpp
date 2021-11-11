//
// Created by upupu on 13/02/2020.
//

#include "Window.h"

Window::Window(QWidget *parent) : QWidget(parent) {
    this->buttonex4 = new QPushButton("text", this);
    this->setFixedSize(100, 50);
    this->buttonex4->setGeometry(10, 10, 80, 30);
    this->setWindowTitle("Titre4");
}