#ifndef HUIQIF_H
#define HUIQIF_H

#include <QDialog>

namespace Ui {
class huiqif;
}

class huiqif : public QDialog
{
    Q_OBJECT

public:
    explicit huiqif(QWidget *parent = nullptr);
    ~huiqif();

private:
    Ui::huiqif *ui;
};

#endif // HUIQIF_H
