#ifndef VIEW_H
#define VIEW_H

#include <QWidget>
#include <QLabel>

class View : public QWidget
{
    Q_OBJECT
public:
    explicit View(QWidget *parent = nullptr);

private:
    QLabel *label1;
signals:

};

#endif // VIEW_H
