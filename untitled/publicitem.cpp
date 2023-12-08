#include"publicitem.h"
#include <QString>
#include <QStringList>
#include <QFile>
#include <QTextStream>
#include <string>
#include <string.h>
#include <QDebug>
#include <QtCore/QCoreApplication>
#include <QtMultimedia/QMediaPlayer>
QString  it::IDnum="欢迎";
int it::yourscore=0;
int it::x;
int it::y;
int it::aix;
int it::aiy;
bool it::waiting=1;
bool it::bbb;
int it::model;
int btemp::x;
int btemp::y;
int wtemp::x;
int wtemp::y;
int it::sum=0;
int it::sounds=60;
int it::sounds1=60;
bool it::playing=0;
bool it::end=0;
bool it::isornot=1;
QString it::backpath="../Users/wood.png";
QString it::backmusic="../Users/backgroundmusic.wav";

QMediaPlayer* it::player1=new QMediaPlayer;


void it::writeTxt(QString id,int sc)
{
    QString path="../Users/score";
        QString fileName = path + "/" + id + ".txt";
    QFile file(fileName);//上面操作已经创建出来的文件名
    file.open(QIODevice::WriteOnly|QIODevice::Append|QIODevice::Text);
    char s[100];
    snprintf(s, sizeof(s), "%d", sc);

    file.write(s);
    file.write("\n");


}

void it::newTxt(QString id)
{
    QString path="../Users/score";
        QString fileName = path + "/" + id + ".txt";
        QFile file(fileName);
        file.open(QFile::WriteOnly|QFile::Text|QIODevice::Append);
}

int it::getTxt(QString id)
{
    QString path="../Users/score";
        QString fileName = path + "/" + id + ".txt";

    QFile file1(fileName);
        // 读写模式打开文件
        file1.open(QIODevice::ReadWrite | QIODevice::Text);
        QString data;
        if(file1.isOpen())
            {
                if(file1.size() != 0)//文件有数据
                {
        //            qDebug() << "文件有数据";

                    //一行一行一直读，直至读取失败
                    while(!file1.atEnd())
                    {
                        // readAll();全部取出来
                        data=file1.readLine();//读取一行存到data里
        //                user_data=data.split(" ");//将data里的数据以空格作为分隔符存到user_data
                        //......
                        // 处理数据
                        qDebug() << data; // 输出结果为：
                    }
                    // 读取完后关闭文件
                    file1.close();
                    data.chop(1);
                    return data.toInt();

                }
            }
            else
            {
                qDebug() << "文件打开失败";
            }





}

void it::writePassword(QString id, QString pass)
{
    QString path="../Users/password";
        QString fileName = path + "/" + id + ".txt";
    QFile file(fileName);//上面操作已经创建出来的文件名
    file.open(QIODevice::WriteOnly|QIODevice::Append|QIODevice::Text);
    char*  ch;
    QByteArray ba = pass.toLatin1(); // must
    ch=ba.data();
    file.write(ch);
    file.write("\n");


}

void it::newPassword(QString id)
{
    QString path="../Users/password";
        QString fileName = path + "/" + id + ".txt";
        QFile file(fileName);
        file.open(QFile::WriteOnly|QFile::Text|QIODevice::Append);
}

QString it::getPassword(QString id)
{
    QString path="../Users/password";
        QString fileName = path + "/" + id + ".txt";

    QFile file1(fileName);
        // 读写模式打开文件
        file1.open(QIODevice::ReadWrite | QIODevice::Text);
        QString data;
        if(file1.isOpen())
            {
                if(file1.size() != 0)//文件有数据
                {
        //            qDebug() << "文件有数据";

                    //一行一行一直读，直至读取失败
                    while(!file1.atEnd())
                    {
                        // readAll();全部取出来
                        data=file1.readLine();//读取一行存到data里
        //                user_data=data.split(" ");//将data里的数据以空格作为分隔符存到user_data
                        //......
                        // 处理数据
                        //qDebug() << data; // 输出结果为：
                    }
                    // 读取完后关闭文件
                    file1.close();
                    data.chop(1);
                    return data;

                }
            }
            else
            {
                qDebug() << "文件打开失败";
            }



}
