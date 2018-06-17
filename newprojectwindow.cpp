#include "newprojectwindow.h"
#include "ui_newprojectwindow.h"

#include "non-ui-src/filefolder.h"
#include "non-ui-src/impfile_path.h"

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
    filefolder ff;
    impFile_path ip;

    ew = new EditorWindow(this);

    // ip.getpath() not retuurning PATH;
    std::string p = ip.impPath() + "/PROJECTPATH.txt";
    ff.newFile(p);
    ff.writeToFile(p, ui->lineEdit->text().toStdString());
    ff.newFolder(ui->lineEdit->text().toStdString());

    this->close();
    ew->show();
}
