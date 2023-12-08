#ifndef PREDIALOG_H
#define PREDIALOG_H

#include <QDialog>

namespace Ui {
class preDialog;
}

class preDialog : public QDialog
{
    Q_OBJECT

public:
    explicit preDialog(QWidget *parent = nullptr);
    ~preDialog();

private slots:
    void on_conform_clicked();

private:
    Ui::preDialog *ui;
};

#endif // PREDIALOG_H
