#ifndef PEACE_H
#define PEACE_H

#include <QDialog>

namespace Ui {
class peace;
}

class peace : public QDialog
{
    Q_OBJECT

public:
    explicit peace(QWidget *parent = nullptr);
    ~peace();

private:
    Ui::peace *ui;
};

#endif // PEACE_H
