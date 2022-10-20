#include "MyGame.h"

#include <QApplication>
#include <QPushButton>
#include <QWidget>

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);

    MyGame oW;
    oW.show();

    return a.exec();
}
