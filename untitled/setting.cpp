#include "setting.h"
#include "ui_setting.h"
#include "publicitem.h"
#include<QFileDialog>
#include<resetpswd.h>
setting::setting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setting)
{
    ui->setupUi(this);
    ui->horizontalSlider->setValue(it::sounds1);
    ui->horizontalSlider_2->setValue(it::sounds);
}

setting::~setting()
{
    delete ui;
}

void setting::on_horizontalSlider_valueChanged(int value)
{
    it::sounds1=value;
}

void setting::on_setback_clicked()
{
    QString textfileName = QFileDialog::getOpenFileName(this, tr("选择图片"),
                                                             "",
                                                             tr("text(*.png)"));
    it::backpath=textfileName;
}

void setting::on_setpassword_clicked()
{
    resetpswd* rese=new resetpswd();
    rese->setWindowIcon(QIcon("../Users/icon/resetpswd.png"));
    rese->show();
}

void setting::on_pushButton_clicked()
{
    QString textfileName = QFileDialog::getOpenFileName(this, tr("选择音乐"),
                                                             "",
                                                             tr("text(*.mp3)"));
    it::backmusic=textfileName;
}

void setting::on_horizontalSlider_2_valueChanged(int value)
{
    it::sounds=value;
}
