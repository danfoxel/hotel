#include "adddialog.h"
#include "ui_adddialog.h"

AddDialog::AddDialog(QWidget *parent) :
	QDialog(parent), ui (new Ui::AddDialog)
{
	ui->setupUi(this);
}

AddDialog::~AddDialog()
{
	delete ui;
}

void AddDialog::on_calendarWidget_clicked(const QDate &date)
{
	QString x=date.toString("ddd d MMMM yyyy");
	ui->tabWidget->setCurrentIndex(1);
	ui->label_4->setText(x);
}

void AddDialog::on_calendarWidget_2_clicked(const QDate &date)
{
	QString x=date.toString("ddd d MMMM yyyy");
	ui->tabWidget->setCurrentIndex(1);
	ui->label_5->setText(x);
}

void AddDialog::on_pushButton_clicked()
{
	ui->toolBox->setCurrentIndex(1);
}
