#ifndef WIDGHT_H
#define WIDGHT_H

#include <QWidget>
#include <QPushButton>

class Widght : public QWidget
{
    Q_OBJECT
public:
    explicit Widght(QWidget *parent = 0);
    
signals:
    
public slots:
    void onLogBtnClick();
private:
    QPushButton LogBtn;
    
};

#endif // WIDGHT_H
