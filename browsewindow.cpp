#include "browsewindow.h"
#include "ui_browsewindow.h"

#include "non-ui-src/filefolder.h"

#include <QFileSystemModel>
#include <QModelIndexList>
#include <QString>
#include <QFileDialog>

BrowseWindow::BrowseWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BrowseWindow)
{
    ui->setupUi(this);
    filefolder ff;
//todo complete it

    /*QString path = "/home/shobhit/";

    qfs = new QFileSystemModel(this);

    qfs->setRootPath(path);
    ui->treeView->setModel(qfs);

    // hides non-name column
    s
    ui->treeView->hideColumn(1);
    ui->treeView->hideColumn(2);
    ui->treeView->hideColumn(3);*/

    //QString file = QFileDialog::getOpenFileName(this,"select your project", "/home");
    //std::string pathToFile = file.toStdString();
    //ff.newFolder(pathToFile.c_str());

}

BrowseWindow::~BrowseWindow()
{
    delete ui;
}

// when project folder is selected by user
void BrowseWindow::on_pushButton_clicked()
{
    //QModelIndex list = ui->treeView->currentIndex();
    //QString pathToSelectedItem = qfs->filePath(list);

    //filefolder fil;
    //fil.writeToFile("/home/shobhit/Desktop/PROJECTPATH.txt", pathToSelectedItem.toStdString());

    this->close();
}
