#ifndef RULEMAINWINDOW_H
#define RULEMAINWINDOW_H

#include <QMainWindow>
#include<QFileDialog>
#include<QMessageBox>
#include<QDebug>
namespace Ui {
class ruleMainWindow;
}

class ruleMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ruleMainWindow(QWidget *parent = nullptr);
    ~ruleMainWindow();

private slots:
    void on_returnbt_clicked();

    void on_pushButton_clicked();

private:
    Ui::ruleMainWindow *ui;
};

#endif // RULEMAINWINDOW_H
