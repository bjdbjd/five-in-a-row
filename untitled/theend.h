#ifndef THEEND_H
#define THEEND_H

#include <QDialog>

namespace Ui {
class theend;
}

class theend : public QDialog
{
    Q_OBJECT

public:
    explicit theend(QWidget *parent = nullptr);
    ~theend();

private:
    Ui::theend *ui;
};

#endif // THEEND_H
