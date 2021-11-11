//
// Created by upupu on 13/02/2020.
//

#ifndef QT_TP1_WINDOW_H
#define QT_TP1_WINDOW_H

#include <QtWidgets/QWidget>
#include <QtWidgets/QPushButton>
#include <QPushButton>
#include <QWidget>

class Window : public QWidget{
//    Q_OBJECT;
private:
    QPushButton* buttonex4;
public:
    Window(QWidget* parent = nullptr);
};

#endif //QT_TP1_WINDOW_H
