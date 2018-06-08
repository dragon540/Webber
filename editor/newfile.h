#ifndef NEWFILE_H
#define NEWFILE_H

#include <QDialog>

namespace Ui {
class Newfile;
}

class Newfile : public QDialog
{
    Q_OBJECT

public:
    explicit Newfile(QWidget *parent = 0);
    ~Newfile();

    QString path;
    QString pathReturner();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

signals:
    QString pathEmit(QString);
private:
    Ui::Newfile *ui;
    QString filepath;
};

#endif // NEWFILE_H
