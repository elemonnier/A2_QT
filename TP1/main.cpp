#include <QApplication>
//#include <QPushButton>
//#include <QFont>
//#include <QSize>
#include "Window.h"
#include "WindowTest.cpp"

int main(int argc, char **argv)
{
    QApplication app (argc, argv);


//    QPushButton buttonex1;
//    buttonex1.setText("adtout");
//    buttonex1.show();
//    buttonex1.setToolTip("ceci");
//    buttonex1.setFont(QFont ("Courier", 16, 2));
//
//    auto button1ex2 = new QPushButton;
//    button1ex2->setText("parent");
//    button1ex2->show();
//    auto button2ex2 = new QPushButton(button1ex2);
//    button2ex2->setText("fils");
//    button2ex2->show();
//
//    auto widgetex3 = new QWidget();
//    widgetex3->show();
//    widgetex3->setFixedSize(100, 50);
//    auto buttonex3 = new QPushButton(widgetex3);
//    buttonex3->show();
//    buttonex3->setText("fils");
//    buttonex3->setGeometry(10, 10, 80, 30);

//    Window w = new Window();
//    w->show();

    windowTest();
    return app.exec();
}