#ifndef SETTING_H
#define SETTING_H

#include <QDialog>

namespace Ui {
class setting;
}

class setting : public QDialog
{
    Q_OBJECT

public:
    explicit setting(QWidget *parent = nullptr);
    ~setting();

private slots:
    void on_horizontalSlider_valueChanged(int value);

    void on_setback_clicked();

    void on_setpassword_clicked();

    void on_pushButton_clicked();

    void on_horizontalSlider_2_valueChanged(int value);

private:
    Ui::setting *ui;
};

#endif // SETTING_H
