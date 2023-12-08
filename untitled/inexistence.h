#ifndef INEXISTENCE_H
#define INEXISTENCE_H

#include <QDialog>

namespace Ui {
class inexistence;
}

class inexistence : public QDialog
{
    Q_OBJECT

public:
    explicit inexistence(QWidget *parent = nullptr);
    ~inexistence();

private:
    Ui::inexistence *ui;
};

#endif // INEXISTENCE_H
