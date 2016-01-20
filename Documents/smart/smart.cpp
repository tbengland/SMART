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
}

void smart::showTime()
{
    QTime time=QTime::currentTime();


}

smart::~smart()
{
    delete ui;
}
