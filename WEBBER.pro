#-------------------------------------------------
#
# Project created by QtCreator 2018-05-10T21:02:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WEBBER
TEMPLATE = app


SOURCES += main.cpp\
        firstwindow.cpp \
    newprojectwindow.cpp \
    browsewindow.cpp \
    non-ui-src/filefolder.cpp \
    editor/editorwindow.cpp \
    editor/newfile.cpp

HEADERS  += firstwindow.h \
    newprojectwindow.h \
    browsewindow.h \
    non-ui-src/filefolder.h \
    editor/editorwindow.h \
    editor/newfile.h

FORMS    += firstwindow.ui \
    newprojectwindow.ui \
    browsewindow.ui \
    editor/editorwindow.ui \
    editor/newfile.ui

DISTFILES += \
    HTML-templates/NewBody.txt \
    HTML-templates/NewPara.txt \
    documentation/firstWindow \
    documentation/non-ui-src \
    documentation/editor

RESOURCES += \
    icons.qrc
