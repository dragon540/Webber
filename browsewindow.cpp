#include "browsewindow.h"

#include "editor/editorwindow.h"

#include <QFileSystemModel>
#include <QModelIndexList>
#include <QString>
#include <QFileDialog>

BrowseWindow::BrowseWindow(QWidget *parent) :
    QMainWindow(parent)
{
    EditorWindow *ew = new EditorWindow(this);

    QString file = QFileDialog::getOpenFileName(this,"select your project", "/home");
    std::string pathToFile = file.toStdString();

    ew->show();
    ew->openExisting(pathToFile);
}

