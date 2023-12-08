#ifndef PAIHANGBANG_H
#define PAIHANGBANG_H

#include <QDialog>

namespace Ui {
class paihangbang;
}

class paihangbang : public QDialog
{
    Q_OBJECT

public:
    explicit paihangbang(QWidget *parent = nullptr);
    ~paihangbang();

protected:
    void getph();

private:
    Ui::paihangbang *ui;
};
class pm
{
public:
    QString id;
    int score;
    pm(){
        id="";
        score=0;
    }
};

#endif // PAIHANGBANG_H
