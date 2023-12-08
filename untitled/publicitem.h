#ifndef PUBLICITEM_H
#define PUBLICITEM_H
#include <QString>
#include <QtCore/QCoreApplication>
#include <QtMultimedia/QMediaPlayer>
#endif // PUBLICITEM_H
const int zuoyou=200;//200//160
const int shangxia=90;//90//60
const int bianchang=60;//60//40
const int number=15;
const int d=15;//15//10
const int D=50;//50//34
static int qizi[number][number];
static int score[number][number];
static bool bb=1;
static int huihe=0;



class it{
public:
    static bool isornot;
    static bool playing;
    static QString IDnum;
    static int yourscore;
    static int x,y;
    static bool bbb;
    static int model;
    static int aix,aiy;
    static int sum;
    static bool end;
    static bool waiting;
    static int sounds;
    static int sounds1;
    static QString backpath;
    static QString backmusic;


    static QMediaPlayer * player1;

    static void writeTxt(QString id,int sc);
    static void newTxt(QString id);
    static int getTxt(QString id);
    static void writePassword(QString id,QString pass);
    static void newPassword(QString id);
    static QString getPassword(QString id);




};
class btemp{
public:
    static int x,y;
};
class wtemp{
public:
    static int x,y;
};
