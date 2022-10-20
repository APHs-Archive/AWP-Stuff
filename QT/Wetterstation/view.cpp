#include "view.h"

View::View(QWidget *parent) : QWidget{parent} {

    this->resize(200,200);

    label1 = new QLabel(this);

    label1->setText("🍏🍐🍊");
}
