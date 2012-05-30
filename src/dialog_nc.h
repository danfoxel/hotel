/*#ifndef DIALOG_NC_H
#define DIALOG_NC_H

#include <QtGui/QDialog>

namespace Ui {
class Dialog_nc;
}

class Dialog_nc : public QDialog
{
	Q_OBJECT

public:
	Dialog_nc(QWidget *parent = 0);
	~Dialog_nc();

    QString ClientFamily() const;
    QString ClientName() const;
    QString ClientOtchestvo() const;
    QString ClientPasport() const;
    QString ClientPasEmited() const;
    QString ClientPasPlEmited() const;
    QString ClientIn() const;
    QString ClientOut() const;
    QString ClientGender()const;

	//   void newquery(const QString &fam,const QString &nam,const  QString &otc,const QString &pass,
	//                     const QString &passvid,const QString &passplvid,const QString &in,const QString &gender);

private slots:
	void on_pushButton_clicked();

private:
	Ui::Dialog_nc *ui;
};

#endif // DIALOG_NC_H
*/
