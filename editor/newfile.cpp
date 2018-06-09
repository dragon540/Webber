#include "newfile.h"
#include "ui_newfile.h"

#include "non-ui-src/filefolder.h"

Newfile::Newfile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Newfile)
{
    ui->setupUi(this);
}

Newfile::~Newfile()
{
    delete ui;
}

void Newfile::on_pushButton_2_clicked()
{
    this->close();
}

void Newfile::on_pushButton_clicked()
{
    filefolder ff;

    std::string projectPath = ff.readFile("/home/shobhit/Desktop/PROJECTPATH.txt");
    ff.newFile(projectPath + "/" + ui->lineEdit->text().toStdString() + ".txt");

    emit pathEmit(ui->lineEdit->text());

    this->close();
}

