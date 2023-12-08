#include "istrue.h"
#include "ui_istrue.h"
#include "publicitem.h"
#include "qipan.h"
#include <QDebug>
#include <ais.h>
#include <paihangbang.h>
#include <setting.h>
#include <ing.h>
istrue::istrue(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::istrue)
{

    ui->setupUi(this);
    ui->welcomeline->setText("密码正确，欢迎"+it::IDnum+"!");
    setMinimumSize(700,466);
    setMaximumSize(700,466);
    //ui->welcomeline->setStyleSheet("background-color:DeepSkyBlue;font-size:40px;color:white");
      //  ui->welcomeline->setGeometry(185,505,400,65);
    qDebug()<<it::IDnum;
}

istrue::~istrue()
{
    delete ui;
}



void istrue::on_pushButton_clicked()
{

        if (!it::playing){
            it::model=1;
            qipan* q=new qipan();
            q->setWindowIcon(QIcon("../Users/icon/icon1.png"));
            q->show();
        }
        else{
            ing* ing1=new ing();
            ing1->setWindowIcon(QIcon("../Users/icon/error.png"));
            ing1->show();
        }


}



void istrue::on_pushButton2_clicked()
{
    qDebug()<<1;
    Ais* a=new Ais();
    a->setWindowIcon(QIcon("../Users/icon/icon1.png"));

    a->setAutoFillBackground(true);
    QPalette palette;
    QPixmap pixmap("../Users/ai.png");
    palette.setBrush(QPalette::Background, QBrush(pixmap));
    a->setPalette(palette);
    a->show();

}

void istrue::on_horizontalSlider_valueChanged(int value)
{
    it::sounds=value;
}

void istrue::on_paihang_clicked()
{
    paihangbang* ph=new paihangbang();
    ph->setWindowIcon(QIcon("../Users/icon/paihang.png"));
    ph->setAutoFillBackground(true);
    QPalette palette;
    QPixmap pixmap("../Users/ph.png");
    palette.setBrush(QPalette::Window, QBrush(pixmap));
    ph->setPalette(palette);
    ph->show();
}


void istrue::on_Set_clicked()
{
    setting* setting1=new setting();
    setting1->setWindowIcon(QIcon("../Users/icon/set.png"));

    setting1->show();
}
