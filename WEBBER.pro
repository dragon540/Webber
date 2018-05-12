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
    non-ui-src/filefolder.cpp

HEADERS  += firstwindow.h \
    newprojectwindow.h \
    browsewindow.h \
    non-ui-src/filefolder.h

FORMS    += firstwindow.ui \
    newprojectwindow.ui \
    browsewindow.ui

DISTFILES +=
