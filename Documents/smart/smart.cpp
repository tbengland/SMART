#include "smart.h"
#include "ui_smart.h"
#include<QTimer>
#include<QDateTime>
#include<QDate>

smart::smart(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::smart)
{
    ui->setupUi(this);
    QMainWindow::showFullScreen();
}


smart::~smart()
{
    delete ui;
}
