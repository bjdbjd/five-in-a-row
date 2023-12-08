#include "theend.h"
#include "ui_theend.h"
#include "publicitem.h"
theend::theend(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::theend)
{
    ui->setupUi(this);
    if (it::bbb)
        ui->td->setText("黑方胜利！");
    else
        ui->td->setText("白方胜利！");
}

theend::~theend()
{
    delete ui;
}
