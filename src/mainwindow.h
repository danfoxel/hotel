#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();
	void tablesshow();

private slots:

	void on_del_client_clicked();

	void on_new_client_clicked();

	void on_serv_finder_clicked();

	void on_action_9_triggered();

	void on_action_triggered();


	void on_action_8_triggered();

	void on_action_11_triggered();

	void on_action_3_triggered();


private:
	Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
