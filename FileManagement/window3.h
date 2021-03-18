#ifndef WINDOW3_H
#define WINDOW3_H

#include <QMainWindow>

namespace Ui {
class window3;
}

class window3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit window3(QWidget *parent = nullptr);
    ~window3();

private:
    Ui::window3 *ui;
};

#endif // WINDOW3_H
