#ifndef QIPAN_H
#define QIPAN_H

#include <QWidget>

namespace Ui {
class qipan;
}

class qipan : public QWidget
{
    Q_OBJECT

public:
    explicit qipan(QWidget *parent = nullptr);
    ~qipan();


protected:
    void paintEvent(QPaintEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void closeEvent(QCloseEvent *event);
    bool sorf(int x,int y);
    int getscore(int x,int y);
    bool pdout(int x,int y);
    bool Peace();

private slots:
    void on_hui_released();

    void on_hui_2_released();

private:
    Ui::qipan *ui;
    int tx,ty;
};



#endif // QIPAN_H
