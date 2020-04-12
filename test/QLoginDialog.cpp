#include "QLoginDialog.h"
#include <QDebug>
QLoginDialog::QLoginDialog(QWidget *parent):QDialog(parent),
    Confirm_btn(this), Cancel_btn(this), Account_lab(this),
    passwd_lab(this), Account_Edit(this), passed_Edit(this)
{

    Account_lab.setText("account: ");
    Account_lab.move(20, 20);
    Account_lab.resize(100, 30);

    passwd_lab.setText("passed: ");
    passwd_lab.move(20, 40);
    passwd_lab.resize(100, 30);

    Account_Edit.move(120, 25);
    Account_Edit.resize(120, 20);

    passed_Edit.move(120, 45);
    passed_Edit.resize(120, 20);
    passed_Edit.setEchoMode(QLineEdit::Password);

    Confirm_btn.setText("Confirm");
    Confirm_btn.move(30, 80);
    Confirm_btn.resize(80, 30);

    Cancel_btn.setText("Cancel");
    Cancel_btn.move(120, 80);
    Cancel_btn.resize(80, 30);

    setWindowTitle("LogInDialog");
    setFixedSize(260, 130);

    usr_id.clear();
    pass.clear();

    connect(&Confirm_btn, SIGNAL(clicked()), this, SLOT(onConfirmClick()));
    connect(&Cancel_btn, SIGNAL(clicked()), this, SLOT(onCancel_btn()));
}

void QLoginDialog::onConfirmClick()
{
    qDebug() << "onConfirmClick begin";

    usr_id = Account_Edit.text().trimmed();
    qDebug() << "usr_id:" + usr_id;
    pass = passed_Edit.text();
    qDebug() << "usr_passwd:" + pass;

    done(Accepted);

    qDebug() << "onConfirmClick end";
}

void QLoginDialog::onCancel_btn()
{
    qDebug() << "onCancel_btn() begin";
    done(Rejected);
    qDebug() << "onCancel_btn() end";

}

QString QLoginDialog::getAccount()
{
    return usr_id;
}

QString QLoginDialog::getPasswd()
{
    return pass;
}


QLoginDialog::~QLoginDialog()
{

}

