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

	void secondDateChaged(const QDate &date);

	void nextTab();

private:
	Ui::AddDialog *ui;
};

#endif // ADDDIALOG_H
