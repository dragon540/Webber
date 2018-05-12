#ifndef NEWPROJECTWINDOW_H
#define NEWPROJECTWINDOW_H

#include <QMainWindow>

namespace Ui {
class NewProjectWindow;
}

class NewProjectWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit NewProjectWindow(QWidget *parent = 0);
    ~NewProjectWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::NewProjectWindow *ui;
};

#endif // NEWPROJECTWINDOW_H
