#include "resetpswd.h"
#include "ui_resetpswd.h"
#include "QtDebug"
#include "QFile"
#include "publicitem.h"
resetpswd::resetpswd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::resetpswd)
{
    ui->setupUi(this);
}

resetpswd::~resetpswd()
{
    delete ui;
}

void resetpswd::on_conform_clicked()
{
    QString p1=ui->newpassword->text();
    QString p2=ui->newpassword2->text();
    if (p1!=p2){
        ui->zhuce->setText("输入密码不一致！");
    }
    else{

        QString displayString;
        QString path("../Users/password/");
        QFile file(path+it::IDnum+".txt");
        it::writePassword(it::IDnum,p1);
        ui->zhuce->setText("修改成功！");

    }
}
