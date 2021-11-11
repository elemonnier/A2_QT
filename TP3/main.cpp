#include <iostream>
#include <QApplication>
#include "IHM.h"
#include "IHM_2.h"

int main(int argc, char** argv) {
    auto app = new QApplication (argc, argv);

    auto FW = new IHM_2();
    FW->show();

    return app->exec();
}