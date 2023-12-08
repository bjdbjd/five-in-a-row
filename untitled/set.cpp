#include "set.h"
#include "ui_set.h"
#include "publicitem.h"
set::set(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::set)
{
    ui->setupUi(this);
}

set::~set()
{
    delete ui;
}


void set::on_horizontalSlider_valueChanged(int value)
{
    it::sounds=value;
}
