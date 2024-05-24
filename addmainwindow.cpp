#include "addmainwindow.h"
#include "ui_addmainwindow.h"

addMainWindow::addMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::addMainWindow)
{
    ui->setupUi(this);
}

addMainWindow::~addMainWindow()
{
    delete ui;
}

void addMainWindow::on_returnbt_clicked()
{
    this->parentWidget()->show();
    this->hide();
}




void addMainWindow::on_pushButton_clicked()
{

}
