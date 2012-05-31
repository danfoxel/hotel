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
	src/connectiondialog.cpp \
	src/adddialog.cpp

HEADERS  += src/mainwindow.h \
	src/connectiondialog.h \
	src/adddialog.h

FORMS    += src/mainwindow.ui \
	src/connectiondialog.ui \
	src/adddialog.ui

RESOURCES += \
    hotel.qrc
