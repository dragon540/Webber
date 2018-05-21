#include "firstwindow.h"
#include <QApplication>

#include "editor/editorwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // for testing editor window i have commented first window
    //FirstWindow w;
    //w.show();

    EditorWindow ew;
    ew.show();

    return a.exec();
}
