#include "sjmainwindow.h"
#include "ui_sjmainwindow.h"
#include "managemainwindow.h"
#include "ui_managemainwindow.h"
#include<QPushButton>

sjMainWindow::sjMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::sjMainWindow)
{
    ui->setupUi(this);

    this->ppage2 = new manageMainWindow(this);

    this->ppage3 = new addMainWindow(this);

    this->ppage4 = new ruleMainWindow(this);

    connect(ui->managebt,&QPushButton::clicked,[=](){
        this->hide();
        this->ppage2->show();
    });

    connect(ui->addbt,&QPushButton::clicked,[=](){
        this->hide();
        this->ppage3->show();
    });

    connect(ui->rulebt,&QPushButton::clicked,[=](){
        this->hide();
        this->ppage4->show();
    });
}

sjMainWindow::~sjMainWindow()
{
    delete ui;
}

