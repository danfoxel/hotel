#include "adddialog.h"
#include "ui_adddialog.h"

AddDialog::AddDialog(QWidget *parent) :
	QDialog(parent), ui (new Ui::AddDialog)
{
	ui->setupUi(this);
	connect (ui->calendarWidget, SIGNAL (clicked (QDate)), SLOT (firstDateChaged (QDate)));
	connect (ui->calendarWidget_2, SIGNAL (clicked (QDate)), SLOT (secondDateChaged (QDate)));
	connect (ui->pushButton, SIGNAL (clicked ()), SLOT (nextTab ()));
}

AddDialog::~AddDialog()
{
	delete ui;
}

void AddDialog::firstDateChaged(const QDate &date)
{
	ui->label_4->setText(date.toString("ddd d MMMM yyyy"));
	ui->tabWidget->setCurrentIndex (1);
}

void AddDialog::secondDateChaged(const QDate &date)
{
	ui->label_5->setText(date.toString("ddd d MMMM yyyy"));
}

void AddDialog::nextTab()
{
	ui->toolBox->setCurrentIndex(1);
}
