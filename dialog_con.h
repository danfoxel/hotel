#ifndef DIALOG_CON_H
#define DIALOG_CON_H

#include <QDialog>
#include "ui_dialog_con.h"

class Dialog_con : public QDialog
{
    Q_OBJECT
    
public:
    Dialog_con(QWidget *parent = 0);
    ~Dialog_con();

private slots:
    void on_button_ok_clicked();

    void on_pushButton_clicked();

private:
    Ui::Dialog_con ui;
};

#endif // DIALOG_CON_H
