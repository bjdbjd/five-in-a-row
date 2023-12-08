#include "ing.h"
#include "ui_ing.h"

ing::ing(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ing)
{
    ui->setupUi(this);
}

ing::~ing()
{
    delete ui;
}
