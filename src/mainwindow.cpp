#include <QtCore/QDebug>
#include <QtCore/QTimer>

#include <QtSql/QSqlTableModel>

#include "dialog_nc.h"
#include "dialog_con.h"
#include "dialog_add.h"

#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);


	ui->statusBar->showMessage(tr("Hello. If you right here as a stranjer person, please press exit."));

	on_action_9_triggered();

}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::tablesshow()
{
	QSqlTableModel *model = new QSqlTableModel(ui->tableView_client, QSqlDatabase::database("hotel"));
	model->setTable("Client");
	model->setEditStrategy(QSqlTableModel::OnFieldChange);
	model->select();
	ui->tableView_client->setModel(model);
	ui->tableView_client->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);


	QSqlTableModel *model1 = new QSqlTableModel(ui->tableView_room, QSqlDatabase::database("hotel"));
	model1->setTable("Room");
	model1->setEditStrategy(QSqlTableModel::OnFieldChange);
	model1->select();
	ui->tableView_room->setModel(model1);
	ui->tableView_room->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);

	// model->setHeaderData(0, Qt::Horizontal,("Tourist"));

}

//deleting client
void MainWindow::on_del_client_clicked()
{
	qDebug()<<"del_client";
}

//new client
void MainWindow::on_new_client_clicked()
{
	Dialog_add dialog(this);
	if (dialog.exec() != QDialog::Accepted)
		return;
	//tablesshow();

	// qDebug()<<"new_client";
}

//serching for service
void MainWindow::on_serv_finder_clicked()
{
	qDebug()<<"serv_finder";
}

//connecting to bd
void MainWindow::on_action_9_triggered()
{
	Dialog_con dialog (this);

	if (dialog.exec() == QDialog::Accepted) {
		tablesshow();
	} else {
		QTimer::singleShot (0, this, SLOT (close ()));
	}
}

void MainWindow::on_action_triggered()
{
	ui->tabWidget->setCurrentIndex(0);
}

void MainWindow::on_action_8_triggered()
{
	ui->tabWidget->setCurrentIndex(1);
}


void MainWindow::on_action_11_triggered()
{
	ui->tabWidget->setCurrentIndex(2);
}


void MainWindow::on_action_3_triggered()
{
	ui->tabWidget->setCurrentIndex(3);
}


