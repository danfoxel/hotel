#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore/QDebug>
#include "dialog_nc.h"
#include "dialog_con.h"
#include "dialog_add.h"
#include <QtSql/QSqlTableModel>

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

	// model->setHeaderData(0, Qt::Horizontal,("Турист"));

}



MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);


	ui->statusBar->showMessage("Добро пожаловать в систему управления отеля Эко-центр. Если вы попали сюда случайно, нажмите на клавишу выход.");

	on_action_9_triggered();

}

MainWindow::~MainWindow()
{
	delete ui;
}



//выписка клиента
void MainWindow::on_del_client_clicked()
{
	qDebug()<<"del_client";
}

//новый клиент
void MainWindow::on_new_client_clicked()
{
	Dialog_add dialog(this);
	if (dialog.exec() != QDialog::Accepted)
		return;
	//tablesshow();

	// qDebug()<<"new_client";
}

//поиск по сервисам
void MainWindow::on_serv_finder_clicked()
{
	qDebug()<<"serv_finder";
}

//подключение к БД
void MainWindow::on_action_9_triggered()
{


	Dialog_con dialog2(this);
	if (dialog2.exec() != QDialog::Accepted)
		return;
	tablesshow();
}

void MainWindow::on_action_triggered()
{
	ui->tabWidget->setCurrentIndex(0);

	qDebug()<<"включить первую вкладку";
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


