#include "browsewindow.h"
#include "ui_browsewindow.h"

#include "non-ui-src/filefolder.h"

#include <QFileSystemModel>
#include <QModelIndexList>

BrowseWindow::BrowseWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BrowseWindow)
{
    ui->setupUi(this);

    QString path = "/home/shobhit/";

    qfs = new QFileSystemModel(this);

    qfs->setRootPath(path);
    ui->treeView->setModel(qfs);

    // hides non-name column
    ui->treeView->hideColumn(1);
    ui->treeView->hideColumn(2);
    ui->treeView->hideColumn(3);

}

BrowseWindow::~BrowseWindow()
{
    delete ui;
}

// when project folder is selected by user
void BrowseWindow::on_pushButton_clicked()
{
    QModelIndex list = ui->treeView->currentIndex();
    QString pathToSelectedItem = qfs->filePath(list);

    filefolder fil;
    fil.writeToFile("/home/shobhit/Desktop/PROJECTPATH.txt", pathToSelectedItem.toStdString());

    this->close();
}
