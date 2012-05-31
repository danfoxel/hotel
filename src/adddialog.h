#ifndef ADDDIALOG_H
#define ADDDIALOG_H

#include <QtGui/QDialog>

namespace Ui {
class AddDialog;
}

class QDate;

class AddDialog : public QDialog
{
	Q_OBJECT

public:
	AddDialog(QWidget *parent = 0);
	~AddDialog();

private slots:

	void firstDateChaged(const QDate &date);

	void on_calendarWidget_2_clicked(const QDate &date);

	void on_pushButton_clicked();

private:
	Ui::AddDialog *ui;
};

#endif // ADDDIALOG_H
