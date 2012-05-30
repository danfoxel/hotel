#include <QtCore/QDebug>

#include <QtSql/QSqlQuery>

#include "dialog_nc.h"
#include "ui_dialog_nc.h"

Dialog_nc::Dialog_nc(QWidget *parent) :
	QDialog(parent), ui (new Ui::Dialog_nc)
{
	ui->setupUi(this);
}

Dialog_nc::~Dialog_nc()
{
	delete ui;
}

QString Dialog_nc::Client_fam() const
{
	qDebug()<<101;
	return ui->lineEdit->text();
}
QString Dialog_nc::Client_nam() const
{
	return ui->lineEdit_2->text();
}
QString Dialog_nc::Client_otc() const
{
	return ui->lineEdit_3->text();
}
QString Dialog_nc::Client_pass() const
{
	return ui->lineEdit_4->text();
}
QString Dialog_nc::Client_passvid() const
{
	return ui->dateEdit->text();
}
QString Dialog_nc::Client_passplvid() const
{
	return ui->lineEdit_5->text();
}
QString Dialog_nc::Client_in() const
{
	return ui->dateEdit_2->text();
}
QString Dialog_nc::Client_out() const
{
	return ui->dateEdit_3->text();
}
QString Dialog_nc::Client_gender() const
{
	if (ui->radioButton->isChecked())
	{
		qDebug()<<1;
		return "true";
	}
	else
	{
		return "false";
		qDebug()<<0;
	}
	qDebug()<<101;

}


void Dialog_nc::on_pushButton_clicked()
{
	QString x="insert into Client values('";
	QString comma="','";
	QString end="')";

	x.append(Client_fam());
	x.append(comma);
	x.append(Client_nam());
	x.append(comma);
	x.append(Client_otc());
	x.append(comma);
	x.append(Client_pass());
	x.append(comma);
	x.append(Client_passplvid());
	x.append(comma);
	x.append(Client_passvid());
	x.append(comma);
	x.append(Client_in());
	x.append(comma);
	x.append(Client_gender());
	x.append(comma);
	x.append(Client_out());
	x.append(comma);

	x.append("2");   //ну что за косяк, откуда брать это ид??
	x.append(&end);

	// qDebug()<<x;

	QSqlQuery query;

	query.exec(x);

}
