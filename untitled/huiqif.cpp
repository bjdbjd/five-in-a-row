#include "huiqif.h"
#include "ui_huiqif.h"

huiqif::huiqif(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::huiqif)
{
    ui->setupUi(this);
}

huiqif::~huiqif()
{
    delete ui;
}
