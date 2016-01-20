#include "smart.h"
#include "ui_smart.h"

smart::smart(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::smart)
{
    ui->setupUi(this);
}

smart::~smart()
{
    delete ui;
}
