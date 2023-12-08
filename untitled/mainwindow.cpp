#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "predialog.h"
#include "nottrue.h"
#include "istrue.h"
#include "publicitem.h"
#include "inexistence.h"
#include <QFile>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setMinimumSize(700,450);
    setMaximumSize(700,450);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_prelogin_clicked()
{
    preDialog *v=new preDialog();
    v->setWindowIcon(QIcon("../Users/icon/zhuce.png"));
    v->show();
}

void MainWindow::on_login_clicked()
{
    QString displayString;
    QString path("../Users/password/");
    QString id=ui->ID->text();
    QString pw=ui->password->text();
    QFile file(path+id+".txt");
    if(file.exists()) {
        QString password=it::getPassword(id);
        if(pw==password){
            //qDebug()<< pswd;
            qDebug()<<"密码正确";
            it::IDnum=id;
            it::yourscore=it::getTxt(id);
            istrue *success=new istrue();
            success->setWindowIcon(QIcon("../Users/icon/icon1.png"));
            success->setAutoFillBackground(true);
            QPalette palette;
            QPixmap pixmap("../Users/sunfall.png");
            palette.setBrush(QPalette::Background, QBrush(pixmap));
            success->setPalette(palette);
            success->show();

        }
        else{
            //qDebug()<< pswd;
            qDebug()<<"密码错误";

            nottrue *fail=new nottrue();
            fail->setWindowIcon(QIcon("../Users/icon/error.png"));
            fail->show();

        }
    }
    else
    {
        inexistence *ine=new inexistence();
        ine->setWindowIcon(QIcon("../Users/icon/error.png"));
        ine->show();
    }
}
