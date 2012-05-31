#ifndef DialogConnection_H
#define DialogConnection_H

#include <QtGui/QDialog>

namespace Ui {
class DialogConnection;
}

class DialogConnection : public QDialog
{
	Q_OBJECT

public:
    DialogConnection(QWidget *parent = 0);
    ~DialogConnection();

private slots:

	void on_button_ok_clicked();

	void on_pushButton_clicked();

private:
    Ui::DialogConnection *ui;
};

#endif // DialogConnection_H
