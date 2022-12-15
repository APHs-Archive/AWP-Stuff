#include "view.h"
#include "model.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    View *view = new View();
    new Model(view);
    view->show();
    return a.exec();
}
