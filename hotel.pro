#-------------------------------------------------
#
# Project created by QtCreator 2012-05-15T16:30:30
#
#-------------------------------------------------

QT       += core gui sql

TARGET = hotel
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog_nc.cpp \
    dialog_con.cpp \
    dialog_add.cpp

HEADERS  += mainwindow.h \
    dialog_nc.h \
    dialog_con.h \
    dialog_add.h

FORMS    += mainwindow.ui \
    dialog_nc.ui \
    dialog_con.ui \
    dialog_add.ui

RESOURCES += \
    hotel.qrc
