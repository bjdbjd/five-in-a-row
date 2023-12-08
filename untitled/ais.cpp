#include "ais.h"
#include "ui_ais.h"
#include "publicitem.h"
#include "qipan.h"
#include "QDebug"
#include "ing.h"
Ais::Ais(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ais)
{
    ui->setupUi(this);
    setMinimumSize(600,556);
    setMaximumSize(600,556);
}

Ais::~Ais()
{
    delete ui;
}

void Ais::on_pushButton_clicked()
{
    if (!it::playing){
        it::model=2;
        qipan* qi2=new qipan();
        qi2->setWindowIcon(QIcon("../Users/icon/icon1.png"));

        qi2->show();

    }
    else{
        ing* ing1=new ing();
        ing1->setWindowIcon(QIcon("../Users/icon/error.png"));
        ing1->show();
    }

}


void Ais::on_pushButton_2_clicked()
{
    if (!it::playing){
        it::model=3;
        qipan* qi3=new qipan();
        qi3->setWindowIcon(QIcon("../Users/icon/icon1.png"));

        qi3->show();

    }
    else{
        ing* ing1=new ing();
        ing1->setWindowIcon(QIcon("../Users/icon/error.png"));
        ing1->show();
    }

}
