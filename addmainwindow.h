#ifndef ADDMAINWINDOW_H
#define ADDMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class addMainWindow;
}

class addMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit addMainWindow(QWidget *parent = nullptr);
    ~addMainWindow();

private slots:
    void on_returnbt_clicked();

    void on_pushButton_clicked();

private:
    Ui::addMainWindow *ui;
};

#endif // ADDMAINWINDOW_H
