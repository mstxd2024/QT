#include "managemainwindow.h"
#include "ui_managemainwindow.h"
#include<QPushButton>
#include<QTextStream>
#include<QLabel>
#include<QDebug>

manageMainWindow::manageMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::manageMainWindow)
{
    ui->setupUi(this);
    for(int i = 0; i < 50 ; ++i)
    {
        button[i] = new QPushButton;
    }
}
manageMainWindow::~manageMainWindow()
{
    delete ui;
    for(int i = 0; i<50; ++i)
    {
        delete button[i];
    }

}


void manageMainWindow::on_returnbt_clicked()
{
    this->parentWidget()->show();
    this->hide();
}


void manageMainWindow::on_pushButton_clicked()
{
    QString name=QString("用户%1：").arg(m_iLabNum);
    QString content=QString("名称%1").arg(m_iLabNum);

    QString color=QString("<font color=#999999>%1</font><font color=#333333>%2</font>").arg(name).arg(content);
    QLabel*lab=new QLabel(ui->scrollAreaWidgetContents);
    lab->setText(color);
    lab->setGeometry(QRect(20,20+m_iLabNum*52,170,30));
    lab->setVisible(true);

    //标签大小+标签个数*间隔+初始y值
    if((20+m_iLabNum*52+30)>(ui->scrollAreaWidgetContents->height()-10))
    {
       int width=ui->scrollAreaWidgetContents->width();
       int height=ui->scrollAreaWidgetContents->height();
       ui->scrollAreaWidgetContents->setMinimumSize(width,height+52);
       qDebug()<<ui->scrollAreaWidgetContents->height();
    }

    button[m_iLabNum] ->setText("修改");
    button[m_iLabNum] ->setParent(ui->scrollAreaWidgetContents);

    button[m_iLabNum]->setGeometry(200, 20+m_iLabNum*52, 60, 40); // 设置按钮的位置和大小

    button[m_iLabNum]->show();

    ++m_iLabNum;
}


