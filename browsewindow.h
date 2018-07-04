#ifndef BROWSEWINDOW_H
#define BROWSEWINDOW_H

#include <QMainWindow>
#include <QFileSystemModel>

#include "editor/editorwindow.h"

namespace Ui {
class BrowseWindow;
}

class BrowseWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BrowseWindow(QWidget *parent = 0);
private:
    EditorWindow *ew;
};

#endif // BROWSEWINDOW_H
