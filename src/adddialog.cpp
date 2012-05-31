#include "adddialog.h"
#include "ui_adddialog.h"

AddDialog::AddDialog(QWidget *parent) :
	QDialog(parent), ui (new Ui::AddDialog)
{
	ui->setupUi(this);
	connect (ui->calendarWidget, SIGNAL (dateChanged (QDate)), SLOT (firstDateChaged (QDate)));
}

AddDialog::~AddDialog()
{
	delete ui;
}

void AddDialog::firstDateChaged(const QDate &date)
{
	ui->label_4->setText(date.toString("ddd d MMMM yyyy"));
}

void AddDialog::on_calendarWidget_2_clicked(const QDate &date)
{
	ui->label_5->setText(date.toString("ddd d MMMM yyyy"));
}

void AddDialog::on_pushButton_clicked()
{
	ui->toolBox->setCurrentIndex(1);
}
