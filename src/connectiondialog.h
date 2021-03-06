#ifndef CONNECTIONDIALOG_H
#define CONNECTIONDIALOG_H

#include <QtGui/QDialog>

namespace Ui {
class ConnectionDialog;
}

class ConnectionDialog : public QDialog
{
	Q_OBJECT

public:
	ConnectionDialog(QWidget *parent = 0);
	~ConnectionDialog();

private slots:

	void on_button_ok_clicked();

	void on_pushButton_clicked();

private:
	Ui::ConnectionDialog *ui;
};

#endif // CONNECTIONDIALOG_H
