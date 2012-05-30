#include "dialog_add.h"
#include "ui_dialog_add.h"

Dialog_add::Dialog_add(QWidget *parent) :
    QDialog(parent)
{
    ui.setupUi(this);
}

Dialog_add::~Dialog_add()
{
}

void Dialog_add::on_calendarWidget_clicked(const QDate &date)
{
    QString x=date.toString("ddd d MMMM yyyy");
    ui.tabWidget->setCurrentIndex(1);
    ui.label_4->setText(x);
}

void Dialog_add::on_calendarWidget_2_clicked(const QDate &date)
{
    QString x=date.toString("ddd d MMMM yyyy");
    ui.tabWidget->setCurrentIndex(1);
    ui.label_5->setText(x);
}

void Dialog_add::on_pushButton_clicked()
{
    ui.toolBox->setCurrentIndex(1);
}
