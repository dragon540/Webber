#include "firstwindow.h"
#include <QApplication>

#include "editor/editorwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FirstWindow w;
    w.show();

   // EditorWindow ew;
    //ew.show();

    return a.exec();
}
