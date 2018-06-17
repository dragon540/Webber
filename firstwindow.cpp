#include "firstwindow.h"
#include "ui_firstwindow.h"

#include "newprojectwindow.h"
#include "browsewindow.h"

FirstWindow::FirstWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FirstWindow)
{
    ui->setupUi(this);
}

FirstWindow::~FirstWindow()
{
    delete ui;
}

void FirstWindow::on_push_clicked()
{
    np = new NewProjectWindow(this);
    bw = new BrowseWindow(this);

    if(ui->newproject->isChecked()) {
        this->close();
        np->show();
    }
    else if(ui->browseproject->isChecked()) {
        this->close();
        bw->show();
    }
}
