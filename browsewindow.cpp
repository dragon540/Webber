#include "browsewindow.h"

#include "non-ui-src/filefolder.h"
#include "non-ui-src/impfile_path.h"

#include "editor/editorwindow.h"

#include <QFileSystemModel>
#include <QModelIndexList>
#include <QString>
#include <QFileDialog>

BrowseWindow::BrowseWindow(QWidget *parent) :
    QMainWindow(parent)
{
    EditorWindow *ew = new EditorWindow(this);

//todo complete it

    //qfs = new QFileSystemModel(this);

    //QString path = path.fromStdString(ip.impPath());
    //qfs->setRootPath(path);
    //ui->treeView->setModel(qfs);

    // hides non-name column
    //ui->treeView->hideColumn(1);
    //ui->treeView->hideColumn(2);
    //ui->treeView->hideColumn(3);

    QString file = QFileDialog::getOpenFileName(this,"select your project", "/home");
    std::string pathToFile = file.toStdString();

    ew->show();
    ew->openExisting(pathToFile);
}

