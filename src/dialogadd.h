#ifndef DialogAdd_H
#define DialogAdd_H

#include <QtGui/QDialog>

namespace Ui {
class DialogAdd;
}

class QDate;

class DialogAdd : public QDialog
{
	Q_OBJECT

public:
    DialogAdd(QWidget *parent = 0);
    ~DialogAdd();

private slots:

	void on_calendarWidget_clicked(const QDate &date);

	void on_calendarWidget_2_clicked(const QDate &date);

	void on_pushButton_clicked();

private:
    Ui::DialogAdd *ui;
};

#endif // DialogAdd_H
