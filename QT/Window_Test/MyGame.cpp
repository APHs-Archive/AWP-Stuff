#include "MyGame.h"
#include <QThread>
#include <iostream>
#include "MyGame.h"
#include "QtWidgets/qapplication.h"

MyGame::MyGame(QWidget* parent)
    : QMainWindow(parent) {
    this->QMainWindow::resize(500, 500);

    btn1 = new QPushButton("Close", this);
    btn1->move(0, 100);

    btn2 = new QPushButton("U sure?", this);
    btn2->move(0, 130);
    btn2->hide();

    btn3 = new QPushButton("Add to PB", this);
    btn3->move(0, 70);

    pb = new QProgressBar(this);

    slider = new QSlider(this);
    slider->move(0,40);
    slider->setRange(0, 100);
    slider->setValue(0);
    slider->setOrientation(Qt::Horizontal);








    connect(slider, SIGNAL(valueChanged(int)), pb, SLOT(setValue(int)));
    connect(btn1, SIGNAL(clicked()), btn2, SLOT(show()));
    connect(btn2, SIGNAL(clicked()), this, SLOT(close()));
    connect(btn3, SIGNAL(clicked()), this, SLOT(addToPB()));
}

void MyGame::addToPB() {
    int cV = pb->value();
    if(cV >= 99) {
        QApplication::quit();
        std::cout << "HEllo World";
    }

    pb->setValue(cV + 10);
    slider->setValue(cV + 10);
}

void MyGame::changePB() {
    std::cout << slider->value();
}

MyGame::~MyGame() {
    delete btn1;
    delete btn2;
    delete btn3;
    delete pb;
    delete slider;
}
