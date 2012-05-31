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
	src/dialogconnection.cpp \
	src/dialogadd.cpp

HEADERS  += src/mainwindow.h \
	src/dialogconnection.h \
	src/dialogadd.h

FORMS    += src/mainwindow.ui \
	src/dialogconnection.ui \
	src/dialogadd.ui

RESOURCES += \
    hotel.qrc
