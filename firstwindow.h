#ifndef FIRSTWINDOW_H
#define FIRSTWINDOW_H

#include <QMainWindow>

#include "newprojectwindow.h"
#include "browsewindow.h"

namespace Ui {
class FirstWindow;
}

class FirstWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FirstWindow(QWidget *parent = 0);
    ~FirstWindow();

private slots:
    void on_push_clicked();

private:
    Ui::FirstWindow *ui;
    NewProjectWindow *np;
    BrowseWindow *bw;
};

#endif // FIRSTWINDOW_H
