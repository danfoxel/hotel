#include "dialogadd.h"
#include "ui_dialogadd.h"

DialogAdd::DialogAdd(QWidget *parent) :
	QDialog(parent), ui (new Ui::DialogAdd)
{
	ui->setupUi(this);
}

DialogAdd::~DialogAdd()
{
	delete ui;
}

void DialogAdd::on_calendarWidget_clicked(const QDate &date)
{
	QString x=date.toString("ddd d MMMM yyyy");
	ui->tabWidget->setCurrentIndex(1);
	ui->label_4->setText(x);
}

void DialogAdd::on_calendarWidget_2_clicked(const QDate &date)
{
	QString x=date.toString("ddd d MMMM yyyy");
	ui->tabWidget->setCurrentIndex(1);
	ui->label_5->setText(x);
}

void DialogAdd::on_pushButton_clicked()
{
	ui->toolBox->setCurrentIndex(1);
}
