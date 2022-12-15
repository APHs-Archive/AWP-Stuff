#ifndef VIEW_H
#define VIEW_H

#include <QWidget>
#include <QLabel>
#include <QPixmap>
#include <QDir>
#include <QCoreApplication>

QT_BEGIN_NAMESPACE
namespace Ui { class View; }
QT_END_NAMESPACE

class View : public QWidget
{
    Q_OBJECT

public:
    View(QWidget *parent = nullptr);
    ~View();
    enum STATES{ RED, RED_ORANGE, ORANGE, GREEN };
    void switchPartnerOne(View::STATES state);
    void switchPartnerTwo(View::STATES state);
    void sayDebugMsg();

public slots:

private:
    Ui::View *ui;
    QPixmap *stopLightRed;
    QPixmap *stopLightOrangeRed;
    QPixmap *stopLightOrange;
    QPixmap *stopLightGreen;
    QPixmap *background;
    int testNr;
};
#endif // VIEW_H
