#include "window3.h"
#include "ui_window3.h"

#include <QPixmap>

window3::window3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::window3)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/Dell/Downloads/foldername");
    ui->foldericon->setPixmap(pix.scaled(70,70,Qt::KeepAspectRatio));
}

window3::~window3()
{
    delete ui;
}
