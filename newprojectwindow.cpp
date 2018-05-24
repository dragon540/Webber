#include "newprojectwindow.h"
#include "ui_newprojectwindow.h"

#include "non-ui-src/filefolder.h"

NewProjectWindow::NewProjectWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NewProjectWindow)
{
    ui->setupUi(this);
}

NewProjectWindow::~NewProjectWindow()
{
    delete ui;
}

void NewProjectWindow::on_pushButton_clicked()
{
    filefolder fil;

    ew = new EditorWindow(this);

    fil.newFolder(ui->lineEdit->text().toStdString());
    fil.writeToFile("/home/shobhit/Desktop/PROJECTPATH.txt", ui->lineEdit->text().toStdString());

    this->close();
    ew->show();
}
