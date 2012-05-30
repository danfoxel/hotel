#-------------------------------------------------
#
# Project created by QtCreator 2012-05-15T16:30:30
#
#-------------------------------------------------

QT       += core gui sql

TARGET = hotel
TEMPLATE = app


SOURCES += src/main.cpp\
        src/mainwindow.cpp \
    src/dialog_nc.cpp \
    src/dialog_con.cpp \
    src/dialog_add.cpp

HEADERS  += src/mainwindow.h \
    src/dialog_nc.h \
    src/dialog_con.h \
    src/dialog_add.h

FORMS    += src/mainwindow.ui \
    src/dialog_nc.ui \
    src/dialog_con.ui \
    src/dialog_add.ui

RESOURCES += \
    hotel.qrc
