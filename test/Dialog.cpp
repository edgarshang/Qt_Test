#include "Dialog.h"
#include <QDebug>

Dialog::Dialog(QWidget *parent) :
        QDialog(parent), ModalBtn(this), NormalBtn(this), MixedBtn(this)
{
    ModalBtn.setText("Modal Dialog");
    ModalBtn.move(20, 20);
    ModalBtn.resize(100, 30);

    NormalBtn.setText("Normal Dialog");
    NormalBtn.move(20, 70);
    NormalBtn.resize(100, 30);

    MixedBtn.setText("Mixed Dialog");
    MixedBtn.move(20, 120);
    MixedBtn.resize(100, 30);

    connect(&ModalBtn, SIGNAL(clicked()), this, SLOT(ModalBtn_Clicked()));
    connect(&NormalBtn, SIGNAL(clicked()), this, SLOT(NormalBtn_Clicked()));
    connect(&MixedBtn, SIGNAL(clicked()), this, SLOT(MixedBtn_Clicked()));

    this->resize(140, 170);
}

void Dialog::ModalBtn_Clicked()
{
    qDebug() << "ModalBtn_Clicked() begin";

//    QDialog dialog(this);
//    dialog.setWindowTitle("hello, world");

//    dialog.exec();
    done(Accepted);

    qDebug() << "ModalBtn_Clicked() end";
}

void Dialog::NormalBtn_Clicked()
{
     qDebug() << "NormalBtn_Clicked() begin";

//     QDialog *dialog = new QDialog(this);
//     dialog->setAttribute(Qt::WA_DeleteOnClose);
//     dialog->show();
     done(Rejected);
     qDebug() << "NormalBtn_Clicked() end";
}

void Dialog::MixedBtn_Clicked()
{
    qDebug() << "MixedBtn_Clicked() begin";
//    QDialog *dialog = new QDialog(this);
//    dialog->setAttribute(Qt::WA_DeleteOnClose);
//    dialog->setModal(true);
//    dialog->show();
    done(100);

    qDebug() << "MixedBtn_Clicked() end";
}

Dialog::~Dialog()
{

}

