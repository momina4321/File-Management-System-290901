
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "window2.h"

#include <QMainWindow>
#include <QTextStream>
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
   // FileSystem f;
    window2* w2;
public:
    void setWindow2(window2* wt){
        w2=wt;
    }
    window2* getWindow2(){
        return w2;
    }


public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
 //  void on_actionOpen_Folder_triggered();

    void on_createAFolderBt_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
