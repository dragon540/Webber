#include "browsewindow.h"
#include "ui_browsewindow.h"

#include "non-ui-src/filefolder.h"
#include "non-ui-src/impfile_path.h"

#include "editor/editorwindow.h"

#include <QFileSystemModel>
#include <QModelIndexList>
#include <QString>
#include <QFileDialog>

BrowseWindow::BrowseWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BrowseWindow)
{
    impFile_path ip;
    ui->setupUi(this);
//todo complete it

    qfs = new QFileSystemModel(this);

    QString path = path.fromStdString(ip.impPath());
    qfs->setRootPath(path);
    ui->treeView->setModel(qfs);

    // hides non-name column
    ui->treeView->hideColumn(1);
    ui->treeView->hideColumn(2);
    ui->treeView->hideColumn(3);

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
    EditorWindow *ew = new EditorWindow(this);

    QModelIndex list = ui->treeView->currentIndex();

    QString pathToSelectedItem = qfs->filePath(list);

    ew->show();
    ew->openExisting(pathToSelectedItem.toStdString());

    this->close();
}
