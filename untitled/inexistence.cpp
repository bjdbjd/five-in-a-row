#include "inexistence.h"
#include "ui_inexistence.h"

inexistence::inexistence(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::inexistence)
{
    ui->setupUi(this);
}

inexistence::~inexistence()
{
    delete ui;
}
