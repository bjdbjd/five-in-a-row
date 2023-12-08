#ifndef RESETPSWD_H
#define RESETPSWD_H

#include <QDialog>

namespace Ui {
class resetpswd;
}

class resetpswd : public QDialog
{
    Q_OBJECT

public:
    explicit resetpswd(QWidget *parent = nullptr);
    ~resetpswd();

private slots:
    void on_conform_clicked();

private:
    Ui::resetpswd *ui;
};

#endif // RESETPSWD_H
