#include <QtCore/QDebug>

#include <QtSql/QSqlDatabase>

#include "connectiondialog.h"
#include "ui_connectiondialog.h"

ConnectionDialog::ConnectionDialog(QWidget *parent) :
	QDialog(parent), ui (new Ui::ConnectionDialog)
{
	ui->setupUi(this);
}

ConnectionDialog::~ConnectionDialog()
{
	delete ui;
}

void ConnectionDialog::on_button_ok_clicked()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("hotel");
	if (!db.open()) {
		qDebug()<<0;
	}
	qDebug()<<1;
}

void ConnectionDialog::on_pushButton_clicked()
{
	if (ui->le_log->text()=="danfox"&&ui->le_pass->text()=="pass") {
		ui->button_ok->setEnabled(true);
		ui->button_ok->setText("Press to enter");
	} else
		ui->button_ok->setText("Check you login and password");
}
