#include "Widght.h"
#include <QDebug>
#include "QLoginDialog.h"

Widght::Widght(QWidget *parent) :
    QWidget(parent), LogBtn(this)
{
    LogBtn.move(20, 20);
    LogBtn.setText("Please click to Log In");
    LogBtn.resize(220, 30);

    setFixedSize(260, 80);

    connect(&LogBtn, SIGNAL(clicked()), this, SLOT(onLogBtnClick()));
}

void Widght::onLogBtnClick()
{
    qDebug() << "onLogBtnClick begin";
    QLoginDialog dlg;

    int ret = dlg.exec();
    if(ret == QDialog::Accepted)
    {
        qDebug() << "Accepted";
        qDebug() << "Account : " << dlg.getAccount();
        qDebug() << "Passwd : " << dlg.getPasswd();

    }


    qDebug() << "onLogBtnClick end";

}
