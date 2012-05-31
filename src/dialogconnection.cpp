#include <QtCore/QDebug>

#include <QtSql/QSqlDatabase>

#include "dialogconnection.h"
#include "ui_dialogconnection.h"

DialogConnection::DialogConnection(QWidget *parent) :
	QDialog(parent), ui (new Ui::DialogConnection)
{
	ui->setupUi(this);
}

DialogConnection::~DialogConnection()
{
	delete ui;
}

void DialogConnection::on_button_ok_clicked()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("hotel");
	if (!db.open()) {
		qDebug()<<0;
	}
	qDebug()<<1;
}

void DialogConnection::on_pushButton_clicked()
{
	if (ui->le_log->text()=="danfox"&&ui->le_pass->text()=="pass") {
		ui->button_ok->setEnabled(true);
		ui->button_ok->setText("Press to enter");
	} else
		ui->button_ok->setText("Check you login and password");
}
