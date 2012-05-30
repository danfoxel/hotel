#include <QtCore/QDebug>

#include <QtSql/QSqlDatabase>

#include "dialog_con.h"
#include "ui_dialog_con.h"

Dialog_con::Dialog_con(QWidget *parent) :
	QDialog(parent), ui (new Ui::Dialog_con)
{
	ui->setupUi(this);
}

Dialog_con::~Dialog_con()
{
}


void Dialog_con::on_button_ok_clicked()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("hotel");
	if (!db.open()) {
		qDebug()<<0;
	}

	qDebug()<<1;
}

void Dialog_con::on_pushButton_clicked()
{
	if (ui->le_log->text()=="danfox"&&ui->le_pass->text()=="pass")
	{
		ui->button_ok->setEnabled(true);
		ui->button_ok->setText("Нажмите для входа");
	}
	else
		ui->button_ok->setText("Проверьте логин и пароль");

}
