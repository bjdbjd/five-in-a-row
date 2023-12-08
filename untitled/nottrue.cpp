#include "nottrue.h"
#include "ui_nottrue.h"

nottrue::nottrue(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nottrue)
{
    ui->setupUi(this);
}

nottrue::~nottrue()
{
    delete ui;
}
