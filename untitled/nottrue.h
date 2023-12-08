#ifndef NOTTRUE_H
#define NOTTRUE_H

#include <QDialog>

namespace Ui {
class nottrue;
}

class nottrue : public QDialog
{
    Q_OBJECT

public:
    explicit nottrue(QWidget *parent = nullptr);
    ~nottrue();

private:
    Ui::nottrue *ui;
};

#endif // NOTTRUE_H
