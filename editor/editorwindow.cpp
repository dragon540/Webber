#include "editorwindow.h"
#include "ui_editorwindow.h"

#include "non-ui-src/filefolder.h"
#include "editor/newfile.h"

#include <QString>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>

EditorWindow::EditorWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EditorWindow)
{
    ui->setupUi(this);

    this->setCentralWidget(ui->textEdit);
    this->setAcceptDrops(true);

}

EditorWindow::~EditorWindow()
{
    delete ui;
}

// functions for actions like cut , copy and paste ,etc

void EditorWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void EditorWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}

void EditorWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void EditorWindow::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

void EditorWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void EditorWindow::on_actionOpen_Existing_triggered()
{
    EditorWindow::openExisting();
}

void EditorWindow::on_actionNew_triggered()
{
    filefolder ff;
    nf = new Newfile(this);

    nf->show();

    std::string tpath = ff.readFile("/home/shobhit/Desktop/PROJECTPATH.txt");

    QString path = path.fromStdString(tpath);

    path.append("/");
    path.append(nf->pathReturner());
    path.append(".txt");

    //for testing
    std::string p = "/home/shobhit/Desktop/qtfile.txt";
    ff.writeToFile(p,path.toStdString());

    EditorWindow::openExisting(path.toStdString());
}

void EditorWindow::on_actionSave_triggered()
{
    QFile sfile(filename);
    if(sfile.open(QFile::WriteOnly | QFile::Text)) {
        QTextStream ts(&sfile);

        ts << ui->textEdit->toPlainText();

        sfile.flush();
        sfile.close();
    }
    // TODO
    //save both current document file as well as respective html codes
}

// overloaded functions
void EditorWindow::openExisting()
{
    filefolder ff;
    // change static path of PROJECTPATH once project is completed
    std::string path = ff.readFile("/home/shobhit/Desktop/PROJECTPATH.txt");
    QString file = QFileDialog::getOpenFileName(this, "select a folder" , path.c_str() );

    if(!file.isEmpty()) {
        QFile sfile(file);

        if(sfile.open(QFile::ReadOnly | QFile::Text)) {
            filename = file;
            QTextStream ts(&sfile);
            QString text = ts.readAll();

            sfile.close();

            ui->textEdit->setPlainText(text);
        }
    }
}

void EditorWindow::openExisting(std::string pathToExistingFile)
{
    QString file = QString::fromStdString(pathToExistingFile);

    filename = file;

    if(!file.isEmpty())
    {
        QFile sfile(file);

        if(sfile.open(QFile::ReadOnly | QFile::Text)) {
            QTextStream ts(&sfile);
            QString text = ts.readAll();

            sfile.close();

            ui->textEdit->setPlainText(text);
        }
     }
}
