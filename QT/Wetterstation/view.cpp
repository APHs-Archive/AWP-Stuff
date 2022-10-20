#include "view.h"

View::View(QWidget *parent) : QWidget{parent} {

    this->resize(200,200);

    QPushButton *btn2 = new QPushButton("Close", this);

}
