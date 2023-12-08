#include "predialog.h"
#include "ui_predialog.h"
#include <QFile>
#include <QDebug>
#include <QMessageBox>
#include<QTextStream>
#include<QFileDialog>
#include<publicitem.h>
preDialog::preDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::preDialog)
{
    ui->setupUi(this);
}

preDialog::~preDialog()
{
    delete ui;
}

void preDialog::on_conform_clicked()
{
    QString p1=ui->newpassword->text();
    QString p2=ui->newpassword2->text();
    if (p1!=p2){
        ui->zhuce->setText("输入密码不一致！");
    }
    else{

        QString displayString;
        QFile file1("../Users/ID.txt");
        if(!file1.open(QIODevice::ReadOnly | QIODevice::Text)) {
            qDebug()<<"Can't open the file!"<<endl;
        }

        QString newid=ui->newID->text();
        QString path("../Users/password/");
        QFile file(path+newid+".txt");
        if(file.exists()) {
            ui->zhuce->setText("账户已存在！");
        }
        else{
            it::newPassword(newid);
            it::writePassword(newid,p1);
            it::newTxt(newid);
            it::writeTxt(newid,0);
            QFile file("../Users/ID.txt");//用户名列表
            file.open(QIODevice::WriteOnly|QIODevice::Append|QIODevice::Text);
            char*  ch;
            QByteArray ba = newid.toLatin1(); // must
            ch=ba.data();
            file.write(ch);
            file.write("\n");

            ui->zhuce->setText("注册成功！");
        }

    }

}
