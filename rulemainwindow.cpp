#include "rulemainwindow.h"
#include "ui_rulemainwindow.h"

ruleMainWindow::ruleMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ruleMainWindow)
{
    ui->setupUi(this);

     //qDebug() << filename;
    QFile file("rule.text");
    file.open(QIODevice::ReadOnly);
    QTextStream in(&file);
    QString line;
    line = in.readLine();
    ui->zklineEdit->setText(line);
    line = in.readLine();
    ui->mj1lineEdit->setText(line);
    line = in.readLine();
    ui->mj2lineEdit->setText(line);
    line = in.readLine();
    ui->jf1lineEdit->setText(line);
    line = in.readLine();
    ui->jf2lineEdit->setText(line);

    file.close();
}

ruleMainWindow::~ruleMainWindow()
{
    delete ui;
}

void ruleMainWindow::on_returnbt_clicked()
{
    this->parentWidget()->show();
    this->hide();
}

void ruleMainWindow::on_pushButton_clicked()
{
    QFile file("rule.text");
    file.open(QIODevice::WriteOnly);
    QTextStream out(&file);
    QByteArray ba1;
    ba1.append(ui->zklineEdit->text());
    out << ba1 << endl;
    QByteArray ba2;
    ba2.append(ui->mj1lineEdit->text());
    out << ba2 << endl;
    QByteArray ba3;
    ba3.append(ui->mj2lineEdit->text());
    out << ba3 << endl;
    QByteArray ba4;
    ba4.append(ui->jf1lineEdit->text());
    out << ba4 << endl;
    QByteArray ba5;
    ba5.append(ui->jf2lineEdit->text());
    out << ba5 << endl;

    QMessageBox::information(nullptr, "确定", "保存成功");

    file.close();
}
