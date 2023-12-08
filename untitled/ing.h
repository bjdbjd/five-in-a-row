#ifndef ING_H
#define ING_H

#include <QDialog>

namespace Ui {
class ing;
}

class ing : public QDialog
{
    Q_OBJECT

public:
    explicit ing(QWidget *parent = nullptr);
    ~ing();

private:
    Ui::ing *ui;
};

#endif // ING_H
