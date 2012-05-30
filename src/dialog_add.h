#ifndef DIALOG_ADD_H
#define DIALOG_ADD_H

#include <QtGui/QDialog>
#include "ui_dialog_add.h"

class Dialog_add : public QDialog
{
    Q_OBJECT
    
public:
    Dialog_add(QWidget *parent = 0);
    ~Dialog_add();
    
private slots:
    void on_calendarWidget_clicked(const QDate &date);

    void on_calendarWidget_2_clicked(const QDate &date);

    void on_pushButton_clicked();

private:
    Ui::Dialog_add ui;
};

#endif // DIALOG_ADD_H
