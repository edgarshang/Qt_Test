#include <QtGui/QApplication>
#include <QWidget>
#include <QDebug>

#include "Dialog.h"
#include "QLoginDialog.h"
#include "Widght.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widght w;
    w.show();
    return a.exec();


/*************dialog****************
    Dialog w;
    int ret = w.exec();

    if(ret == QDialog::Accepted)
    {
        qDebug() << "Accecpet ret = " << ret;
    }else if(ret == QDialog::Rejected)
    {
        qDebug() << "Rejected ret = " << ret;
    }else
    {
        qDebug() << "undefind ret = " << ret;
    }


    return ret;
    ***********************************/
}
