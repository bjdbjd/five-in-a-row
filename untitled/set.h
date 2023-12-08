#ifndef SET_H
#define SET_H

#include <QDialog>

namespace Ui {
class set;
}

class set : public QDialog
{
    Q_OBJECT

public:
    explicit set(QWidget *parent = nullptr);
    ~set();

private slots:
    void on_horizontalSlider_actionTriggered(int action);

    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::set *ui;
};

#endif // SET_H
