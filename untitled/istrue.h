#ifndef ISTRUE_H
#define ISTRUE_H

#include <QDialog>
namespace Ui {
class istrue;
}

class istrue : public QDialog
{
    Q_OBJECT

public:
    explicit istrue(QWidget *parent = nullptr);
    ~istrue();

private slots:
    void on_pushButton_clicked();

    void on_pushButton2_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_paihang_clicked();

    void on_Set_clicked();

private:
    Ui::istrue *ui;
};

#endif // ISTRUE_H1
