#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QDebug>

#include <iostream>
#include <QDir>
using namespace std;
#include "window3.h"




MainWindow::MainWindow(QWidget *parent) :  //constructor
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
  QPixmap pix("C:/Users/Dell/Downloads/add.png");
  ui->createAFolder->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
  QPixmap pix1("C:/Users/Dell/Downloads/add-file.png");
  ui->createAFile->setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
  //window2* w=new window2();
  //connect(w,&window2::on_pushButton_clicked,this,&MainWindow::on_createAFolderBt_clicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}


//void MainWindow::on_actionNew_File_triggered()
//{


//}

//void MainWindow::on_actionNew_Folder_triggered()
//{
//    bool ok;
//    QString rootFolder=QInputDialog::getText(this,"File Management System","Type Root Folder Name",QLineEdit::Normal, QDir::home().dirName(),&ok);
//  if (ok){ //if ok is clicked
//      on_foldername_windowTitleChanged(rootFolder);
//    string root= rootFolder.toLocal8Bit().constData(); //convert QString to string
//    FileSystem fs=FileSystem(root); //sets the rootFolder name
//  }
//}

//void MainWindow::on_actionOpen_Folder_triggered()
//{
//    window2::w2()->setFileSystem(f);
//    bool ok;
//    QString openaFolder=QInputDialog::getText(this,"File Management System", "Type the name of the folder to navigate into",QLineEdit::Normal, QDir::home().dirName(),&ok);
//    string folderName= openaFolder.toLocal8Bit().constData();
//    //MainWindow mw=MainWindow(w2);
//    if (ok){
//      //if folder exists in current dir then open that folder
//        if (w2.fs.folderExists(w2.fs.navigator,folderName)){ //if true then navigate into the folder
//            w2.fs.navigateInto(folderName);

//        }

//    }
//}


void MainWindow::on_createAFolderBt_clicked() //create a folder command
{
    //FileSystem f;
  //  fs=getFileSystem(); //initialize fs instance
    bool ok;

//QString str=QString::fromStdString(f.size);
//QMessageBox::about(this,"",str);

   // w2=new window2(getWindow2());
    QString fname=QInputDialog::getText(this,"File Management System", "Type name of Folder",QLineEdit::Normal, QDir::home().dirName(),&ok);
    string newfolderName= fname.toLocal8Bit().constData(); //convert QString to std::string

if (ok){
    if (w2->getFileSystem().folderExists(w2->getFileSystem().navigator,newfolderName)){
        QMessageBox::warning(this,"","This Folder already exists");
    }
        w2->getFileSystem().createFolder(w2->getFileSystem().navigator,newfolderName);
        QMessageBox::about(this,"","Folder created!");
        window3* w3=new window3;
        w3->show();
        hide();
    }
if (!ok){
    MainWindow * m=new MainWindow;
m->show();
hide();
}

}

