#include "editorwindow.h"
#include "ui_editorwindow.h"

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
