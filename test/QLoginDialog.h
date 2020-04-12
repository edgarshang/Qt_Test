#ifndef _QLOGINDIALOG_H_
#define _QLOGINDIALOG_H_

#include <QtGui/QDialog>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QString>

class QLoginDialog : public QDialog
{
     Q_OBJECT
private:
    QPushButton Confirm_btn;
    QPushButton Cancel_btn;

    QLabel Account_lab;
    QLabel passwd_lab;

    QLineEdit Account_Edit;
    QLineEdit passed_Edit;

    QString usr_id;
    QString pass;
protected slots:
    void onConfirmClick();
    void onCancel_btn();
public:
    QLoginDialog(QWidget *parent = 0);
    QString getAccount();
    QString getPasswd();
    ~QLoginDialog();
};

#endif // _QLOGINDIALOG_H_
