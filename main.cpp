#include "firstwindow.h"
#include <QApplication>

#include "non-ui-src/impfile_path.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    FirstWindow w;
    w.show();

    return a.exec();
}
