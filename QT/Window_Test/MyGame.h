#ifndef MYGAME_H
#define MYGAME_H

#include <QMainWindow>
#include <QPushButton>
#include <QProgressBar>
#include <QSlider>

class MyGame : public QMainWindow {
    Q_OBJECT

   public:
    MyGame(QWidget* parent = nullptr);
    ~MyGame();

    private:
    QPushButton *btn1, *btn2, *btn3;
    QProgressBar *pb;
    QSlider *slider;

   public slots:
    void addToPB();
    void changePB();
};
#endif  // MYGAME_H
