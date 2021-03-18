#include "window2.h"
#include "ui_window2.h"
#include <QDir>

#include "mainwindow.h"
using namespace std;


window2::window2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::window2)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/Dell/Downloads/foldername.png");
    ui->mainwindowdisplay->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
//    connect(ui->pushButton,&QPushButton::clicked,this,[this] (){
//     emit fs;
//  });
}


window2::~window2()
{
    delete ui;
}


void window2::on_pushButton_clicked() //root folder name entered
{
    FileSystem f;
    QString rootFolder=ui->lineEdit->text(); //get the text entered
    string root= rootFolder.toLocal8Bit().constData(); //convert QString to string
    f=FileSystem(root); //sets the rootFolder name
    f.initiateNavigation();  //root folder becomes the navigator
    setFileSystem(f);
   // fs=&fileobj;

    MainWindow *mw=new MainWindow;
    mw->show();

    hide();
}


