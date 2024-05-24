#ifndef MANAGEMAINWINDOW_H
#define MANAGEMAINWINDOW_H
#include<QPushButton>
#include <QMainWindow>

namespace Ui {
class manageMainWindow;
}

class manageMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit manageMainWindow(QWidget *parent = nullptr);
    ~manageMainWindow();

    QPushButton * button[50];

    int m_iLabNum = 0;

private slots:
    void on_returnbt_clicked();

    void on_pushButton_clicked();

private:
    Ui::manageMainWindow *ui;
};

#endif // MANAGEMAINWINDOW_H
