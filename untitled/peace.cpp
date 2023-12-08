#include "peace.h"
#include "ui_peace.h"

peace::peace(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::peace)
{
    ui->setupUi(this);
}

peace::~peace()
{
    delete ui;
}
