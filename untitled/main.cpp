#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowIcon(QIcon("../Users/icon/icon1.png"));
    w.setAutoFillBackground(true);
    QPalette palette;
    QPixmap pixmap("..//Users/first.png");
    palette.setBrush(QPalette::Window, QBrush(pixmap));
    w.setPalette(palette);
    w.show();

    return a.exec();
}
