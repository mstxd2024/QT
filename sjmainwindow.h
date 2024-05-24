#ifndef SJMAINWINDOW_H
#define SJMAINWINDOW_H

#include <QMainWindow>
#include<managemainwindow.h>
#include<addmainwindow.h>
#include<rulemainwindow.h>
#include<QFileDialog>
#include<QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class sjMainWindow; }
QT_END_NAMESPACE

class sjMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    sjMainWindow(QWidget *parent = nullptr);
    ~sjMainWindow();

    manageMainWindow * ppage2 = NULL;
    addMainWindow * ppage3 =NULL;
    ruleMainWindow * ppage4 =NULL;

private:
    Ui::sjMainWindow *ui;
};
#endif // SJMAINWINDOW_H
