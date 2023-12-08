#ifndef AIS_H
#define AIS_H

#include <QDialog>

namespace Ui {
class Ais;
}

class Ais : public QDialog
{
    Q_OBJECT

public:
    explicit Ais(QWidget *parent = nullptr);
    ~Ais();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Ais *ui;
};

#endif // AIS_H
