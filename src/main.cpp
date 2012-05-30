#include <QtGui/QApplication>
#include "mainwindow.h"

#include <QtGui>



int main(int argc, char *argv[])
{
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName ("Windows-1251"));
    //QTextCodec::setCodecForTr(QTextCodec::codecForName ("Windows-1251"));
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    //w.showMaximized();
    
    return a.exec();
}
