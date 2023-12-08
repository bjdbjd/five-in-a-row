
#include "qipan.h"
#include "ui_qipan.h"
#include "publicitem.h"
#include "QtDebug"
#include "QPainter"
#include "QMouseEvent"
#include <QMediaPlayer>
#include <theend.h>
#include "huiqif.h"
#include <QTime>
#include <qdir.h>
#include <QString>
#include <QStringList>
#include <peace.h>
#include <QtCore/QCoreApplication>
#include <QtMultimedia/QMediaPlayer>
qipan::qipan(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::qipan)
{
    ui->setupUi(this);
    it::playing=1;
    it::end=0;
    setMinimumSize(zuoyou*2+bianchang*(number-1), shangxia*2+bianchang*(number-1));
        setMaximumSize(zuoyou*2+bianchang*(number-1), shangxia*2+bianchang*(number-1));
        //qDebug()<<(zuoyou*2+bianchang*(number-1));
        //qDebug()<<(shangxia*2+bianchang*(number-1));
        setMouseTracking(true);
        bb=1;
        for(int ix=0;ix<number;ix++){
            for (int iy=0;iy<number;iy++){
                qizi[ix][iy]=0;
            }
        }
        update();


        //QMediaPlayer * player1 = new QMediaPlayer;
            it::player1->setMedia(QUrl::fromLocalFile(it::backmusic));
            // 如果是在资源文件里用 fromEncoded 函数获取地址
            //player->setMedia(QUrl::fromEncoded("qrc:/mp3/552800.mp3"));
            it::player1->setVolume(it::sounds1);
            it::player1->play();


        if (it::model==3){
            QMediaPlayer *player = new QMediaPlayer;
            player->setMedia(QUrl::fromLocalFile("../Users/5390.wav"));
            player->setVolume(it::sounds); //0~100音量范围,默认是100
            player->play();
            qizi[7][7]=1;
            bb=0;
            it::sum++;
            huihe++;
            update();
        }
        //if(QMediaPlayer::State==0)


}

qipan::~qipan()
{
    delete ui;
}

void qipan::closeEvent(QCloseEvent *event)
{
    it::player1->pause();
    it::playing=0;

}



 void qipan::paintEvent(QPaintEvent *event)
 {
     QPainter painter(this);
     painter.setRenderHint(QPainter::Antialiasing);
     //qDebug()<<it::backpath;
 painter.drawPixmap(rect(),QPixmap(it::backpath));

     QPen pen;
         pen.setWidth(4);//设置线宽//4//2
         pen.setColor("black");
         painter.setPen(pen);
     for (int i = 0; i < number; ++i)
     {
         painter.drawLine(zuoyou,shangxia +bianchang*i,zuoyou+bianchang*(number-1),shangxia +bianchang*i);		//画横线
         //qDebug()<<zuoyou<<shangxia +bianchang*i<<zuoyou+bianchang*(number-1)<<shangxia +bianchang*i;
         painter.drawLine(zuoyou+bianchang*i,shangxia, zuoyou+bianchang*i, shangxia+bianchang*(number-1));     //画竖线
     }
     if(it::isornot&&qizi[it::x][it::y]==0){
         if (bb&&(it::model==2||it::model==1)){
             QBrush brush;
                 brush.setStyle(Qt::SolidPattern);
                 brush.setColor(Qt::black);
                 painter.setBrush(brush);
                         painter.drawEllipse(zuoyou+bianchang*tx-d/2,shangxia+bianchang*ty-d/2,d,d);
         }
         if (!bb&&(it::model==3||it::model==1)){
             QBrush brush;
                 brush.setStyle(Qt::SolidPattern);
                 brush.setColor(Qt::white);
                 painter.setBrush(brush);
                         painter.drawEllipse(zuoyou+bianchang*tx-d/2,shangxia+bianchang*ty-d/2,d,d);
         }
     }
     for(int mx=0;mx<number;mx++){
         for (int my=0;my<number;my++){
             if (qizi[mx][my]==1){
                 QBrush brush;
                     brush.setStyle(Qt::SolidPattern);
                     brush.setColor(Qt::black);
                     painter.setBrush(brush);
                             painter.drawEllipse(zuoyou+bianchang*mx-D/2,shangxia+bianchang*my-D/2,D,D);
             }
             if (qizi[mx][my]==-1){
                 QBrush brush;
                     brush.setStyle(Qt::SolidPattern);
                     brush.setColor(Qt::white);
                     painter.setBrush(brush);
                             painter.drawEllipse(zuoyou+bianchang*mx-D/2,shangxia+bianchang*my-D/2,D,D);
             }
         }
     }

 }

 void qipan::mouseMoveEvent(QMouseEvent* event)
 {
     int x = event->x();
     int y = event->y();
     if (x>zuoyou-bianchang/2&&x<(zuoyou+bianchang*(number-1)+bianchang/2)&&y>shangxia-bianchang/2&&y<shangxia+bianchang*(number-1)+bianchang/2&&!it::end){
         it::isornot=1;
     if ((x-zuoyou)%bianchang>(bianchang/2)){
         if ((x-zuoyou)/bianchang+1>0) if((x-zuoyou)/bianchang+1<14) tx=(x-zuoyou)/bianchang+1;
         else tx=14; else tx=0;

     }
     else {
         if ((x-zuoyou)/bianchang>0) if((x-zuoyou)/bianchang<14) tx=(x-zuoyou)/bianchang;
         else tx=14; else tx=0;
     }
     if ((y-shangxia)%bianchang>(bianchang/2)){
         if ((y-shangxia)/bianchang+1>0) if((y-shangxia)/bianchang+1<14) ty=(y-shangxia)/bianchang+1;
         else ty=14; else ty=0;

     }
     else {
         if((y-shangxia)/bianchang>0) if((y-shangxia)/bianchang<14) ty=(y-shangxia)/bianchang;
         else ty=14; else ty=0;
     }
     }else{
         it::isornot=false;
     }
     it::x=tx;
     it::y=ty;
     //qDebug()<<tx<<ty;
     //void QPainter::drawArc(tx,ty, r, r, 0, 180);
     update();
 }

 void qipan::mouseReleaseEvent(QMouseEvent* event){
     if(qizi[it::x][it::y] == 0&&it::isornot&&!it::end&&it::waiting){
         qDebug()<<"cg";

         if (bb){
             if(it::model==2||it::model==1){
             qDebug()<<"black";
             QMediaPlayer *player = new QMediaPlayer;
             player->setMedia(QUrl::fromLocalFile("../Users/5390.wav"));
             player->setVolume(it::sounds); //0~100音量范围,默认是60
             player->play();
             it::sum++;
             huihe++;
             qizi[it::x][it::y]=1;
             btemp::x=it::x;
             btemp::y=it::y;
             update();
             if(qipan::sorf(it::x,it::y)){
                 qDebug()<<bb;
                 it::bbb=bb;
                 it::end=1;
                 if (it::model==2){
                     it::yourscore+=10;
                     it::writeTxt(it::IDnum,it::yourscore);
                 }
                 theend* w1=new theend();
                 w1->setWindowIcon(QIcon("../Users/icon/icon1.png"));

                 w1->show();
             }
             if(Peace()&&it::end==0)
             {
                 it::end=1;
                 peace* pe1=new peace();
                 pe1->show();

             }
             update();
             bb=!bb;
             }

         }
         else if (it::model==3||it::model==1) {
             qDebug()<<"white";
             QMediaPlayer *player = new QMediaPlayer;
             player->setMedia(QUrl::fromLocalFile("../Users/5390.wav"));
             player->setVolume(it::sounds); //0~100音量范围,默认是60
             player->play();
             qDebug()<<"..";
             huihe++;
             it::sum++;
             qizi[it::x][it::y]=-1;
             wtemp::x=it::x;
             wtemp::y=it::y;
             update();
             if(qipan::sorf(it::x,it::y)){
                 qDebug()<<bb;
                 it::bbb=bb;
                 it::end=1;
                 if (it::model==3){
                     it::yourscore+=10;
                     it::writeTxt(it::IDnum,it::yourscore);
                 }
                 theend* w1=new theend();
                 w1->setWindowIcon(QIcon("../Users/icon/icon1.png"));

                 w1->show();
             }
             update();
             bb=!bb;

         }
         if (((it::model==2)||(it::model==3))&&!it::end){
             it::waiting=0;
             QTime time;
             time.start();
             while(time.elapsed() < 1005)             //等待时间流逝1秒钟
                 QCoreApplication::processEvents();
             int topscore=0;

             for (int ax=0;ax<number;ax++){
                 for (int ay=0;ay<number;ay++){
                     int tempscore=qipan::getscore(ax,ay);
                     if (topscore<tempscore){
                         topscore=tempscore;
                         qDebug()<<ax<<" "<<ay<<score[ax][ay];
                         it::aix=ax;
                         it::aiy=ay;
                     }
                 }
             }
             qDebug()<<it::aix<<it::aiy;
             if (bb){
                 QMediaPlayer *player = new QMediaPlayer;
                 player->setMedia(QUrl::fromLocalFile("../Users/5390.wav"));
                 player->setVolume(it::sounds); //0~100音量范围,默认是60
                 player->play();

                 it::sum++;
                 huihe++;
                 qizi[it::aix][it::aiy]=1;
                 btemp::x=it::aix;
                 btemp::y=it::aiy;
                 update();
                 if(qipan::sorf(it::aix,it::aiy)){
                     qDebug()<<bb;
                     it::bbb=bb;
                     it::end=1;
                     theend* w1=new theend();
                     w1->setWindowIcon(QIcon("../Users/icon/icon1.png"));

                     w1->show();
                 }
                 if(Peace()&&it::end==0)
                 {
                     it::end=1;
                     peace* pe1=new peace();
                     pe1->show();

                 }
                 update();
                 if (!it::end) bb=!bb;
                 it::waiting=1;

             }
             else{
                 QMediaPlayer *player = new QMediaPlayer;
                 player->setMedia(QUrl::fromLocalFile("../Users/5390.wav"));
                 player->setVolume(100); //0~100音量范围,默认是100
                 player->play();

                 it::sum++;
                 huihe++;
                 qizi[it::aix][it::aiy]=-1;
                 wtemp::x=it::aix;
                 wtemp::y=it::aiy;
                 update();
                 if(qipan::sorf(it::aix,it::aiy)){
                     qDebug()<<bb;
                     it::bbb=bb;
                     it::end=1;
                     theend* w1=new theend();
                     w1->setWindowIcon(QIcon("../Users/icon/icon1.png"));
                     w1->show();
                 }
                 update();
                 if (!it::end) bb=!bb;
                 it::waiting=1;


             }
         }



     }
}

 bool qipan::sorf(int x,int y){
     int b=qizi[x][y];
     int leijizuoyou=1;
     int leijishangxia=1;
     int leijizuoshangyouxia=1;
     int leijizuoxiayoushang=1;

     int i=1;
     while (qizi[x+i][y]==b&&pdout(x+i,y)){
         leijizuoyou++;
         i++;
     }
     i=1;
     while (qizi[x-i][y]==b&&pdout(x-i,y)){
         leijizuoyou++;
         i++;
     }
     i=1;
     while (qizi[x][y+i]==b&&pdout(x,y+i)){
         leijishangxia++;
         i++;
     }
     i=1;
     while (qizi[x][y-i]==b&&pdout(x,y-i)){
         leijishangxia++;
         i++;
     }
     i=1;
     while (qizi[x+i][y+i]==b&&pdout(x+i,y+i)){
         leijizuoshangyouxia++;
         i++;
     }
     i=1;
     while (qizi[x-i][y-i]==b&&pdout(x-i,y-i)){
         leijizuoshangyouxia++;
         i++;
     }
     i=1;
     while (qizi[x-i][y+i]==b&&pdout(x-i,y+i)){
         leijizuoxiayoushang++;
         i++;
     }
     i=1;
     while (qizi[x+i][y-i]==b&&pdout(x+i,y-i)){
         leijizuoxiayoushang++;
         i++;
     }
     if (leijizuoyou>=5||leijishangxia>=5||leijizuoshangyouxia>=5||leijizuoxiayoushang>=5)
     {
         return 1;
     }
     else
     {
         return 0;
     }

 }

 bool qipan::Peace(){
     if (it::sum>=225)
         return true;
     else return false;
 }

void qipan::on_hui_released()   //悔棋
{
    if(!it::end){
    if(huihe>=2){
        huihe=0;
        qizi[wtemp::x][wtemp::y]=0;
        qizi[btemp::x][btemp::y]=0;
        it::sum-=2;
    }
    else
    {
        qDebug()<<"no";
        huiqif* hui=new huiqif();
        hui->setWindowIcon(QIcon("../Users/icon/error.png"));

        hui->show();
    }
    update();
    }
}

void qipan::on_hui_2_released()  //重开
{

    bb=1;
    for(int ix=0;ix<number;ix++){
        for (int iy=0;iy<number;iy++){
            qizi[ix][iy]=0;
        }
    }
    if (it::model==3){
        QMediaPlayer *player = new QMediaPlayer;
        player->setMedia(QUrl::fromLocalFile("../Users/5390.wav"));
        player->setVolume(100); //0~100音量范围,默认是100
        player->play();
        qizi[7][7]=1;
        bb=0;
        huihe++;
    }
    it::end=0;
    update();

}

bool qipan::pdout(int x,int y)
{
    if (x<0||x>14||y<0||y>14)
        return false;
    else return true;
}

int qipan::getscore(int x,int y)   //ai算分
{
    if (qizi[x][y]==0){
        score[x][y]=0;


        qDebug()<<x<<" "<<y<<"进入";
        int co;
        if(bb) co=1;
        else co=-1;
        int numzy=0;
        int numsx=0;
        int numzsyx=0;
        int numzxys=0;
        int z1,z2;
        int i=1;
        while(qizi[x+i][y]==co&&pdout(x+i,y)){   //左右一排连着四个
            numzy++;
            i++;
        }
        if (pdout(x+1,y))
            z1=qizi[x+i][y];
        else z1=-co;

        i=1;
        while(qizi[x-i][y]==co&&pdout(x-i,y)){
            numzy++;
            i++;
        }
        if (pdout(x-i,y))
            z2=qizi[x-i][y];
        else z2=-co;

        if (numzy>=4){
            score[x][y]+=1200;

        }
        if (numzy==3){
            if (z1==0&&z2==0)                               score[x][y]+=50;
            if ((z1==-co&&z2==0)||(z1==0&&z2==-co))         score[x][y]+=20;
            if (z1==-co&&z2==-co)                           score[x][y]+=0;
        }
        if (numzy==2){
            if (z1==0&&z2==0)                               score[x][y]+=20;
            if ((z1==-co&&z2==0)||(z1==0&&z2==-co))         score[x][y]+=10;
            if (z1==-co&&z2==-co)                           score[x][y]+=0;

        }

        if (numzy==1){
            if (z1==0&&z2==0)                               score[x][y]+=10;
            if ((z1==-co&&z2==0)||(z1==0&&z2==-co))         score[x][y]+=5;
            if (z1==-co&&z2==-co)                           score[x][y]+=0;

        }



        i=1;
        while(qizi[x][y+i]==co&&pdout(x,y+i)){   //上下一排连着四个
            numsx++;
            i++;
        }
        if (pdout(x,y+i))
            z1=qizi[x][y+i];
        else z1=-co;

        i=1;
        while(qizi[x][y-i]==co&&pdout(x,y-i)){
            numsx++;
            i++;
        }
        if (pdout(x,y-i))
            z2=qizi[x][y-i];
        else z2=-co;


        if (numsx>=4){
            score[x][y]+=1200;

        }
        if (numsx==3){
            if (z1==0&&z2==0)                               score[x][y]+=50;
            if ((z1==-co&&z2==0)||(z1==0&&z2==-co))         score[x][y]+=20;
            if (z1==-co&&z2==-co)                           score[x][y]+=0;
        }
        if (numsx==2){
            if (z1==0&&z2==0)                               score[x][y]+=20;
            if ((z1==-co&&z2==0)||(z1==0&&z2==-co))         score[x][y]+=10;
            if (z1==-co&&z2==-co)                           score[x][y]+=0;

        }

        if (numsx==1){
            if (z1==0&&z2==0)                               score[x][y]+=10;
            if ((z1==-co&&z2==0)||(z1==0&&z2==-co))         score[x][y]+=5;
            if (z1==-co&&z2==-co)                           score[x][y]+=0;

        }




        i=1;
        while(qizi[x+i][y+i]==co&&pdout(x+i,y+i)){   //左上右下一排连着四个
            numzsyx++;
            i++;
        }
        if (pdout(x+i,y+i))
            z1=qizi[x+i][y+i];
        else z1=-co;


        i=1;
        while(qizi[x-i][y-i]==co&&pdout(x-i,y-i)){
            numzsyx++;
            i++;
        }
        if (pdout(x-i,y-i))
            z2=qizi[x-i][y-i];
        else z2=-co;


        if (numzsyx>=4){
            score[x][y]+=1200;

        }
        if (numzsyx==3){
            if (z1==0&&z2==0)                               score[x][y]+=50;
            if ((z1==-co&&z2==0)||(z1==0&&z2==-co))         score[x][y]+=20;
            if (z1==-co&&z2==-co)                           score[x][y]+=0;
        }
        if (numzsyx==2){
            if (z1==0&&z2==0)                               score[x][y]+=20;
            if ((z1==-co&&z2==0)||(z1==0&&z2==-co))         score[x][y]+=10;
            if (z1==-co&&z2==-co)                           score[x][y]+=0;

        }

        if (numzsyx==1){
            if (z1==0&&z2==0)                               score[x][y]+=10;
            if ((z1==-co&&z2==0)||(z1==0&&z2==-co))         score[x][y]+=5;
            if (z1==-co&&z2==-co)                           score[x][y]+=0;

        }




        i=1;
        while(qizi[x-i][y+i]==co&&pdout(x-i,y+i)){   //左下右上一排连着四个
            numzxys++;
            i++;
        }
        if (pdout(x-i,y+i))
            z1=qizi[x-i][y+i];
        else z1=-co;

        i=1;
        while(qizi[x+i][y-i]==co&&pdout(x+i,y-i)){
            numzxys++;
            i++;
        }
        if (pdout(x+i,y-i))
            z2=qizi[x+i][y-i];
        else z2=-co;

        if (numzxys>=4){
            score[x][y]+=1200;

        }
        if (numzxys==3){
            if (z1==0&&z2==0)                               score[x][y]+=50;
            if ((z1==-co&&z2==0)||(z1==0&&z2==-co))         score[x][y]+=20;
            if (z1==-co&&z2==-co)                           score[x][y]+=0;
        }
        if (numzxys==2){
            if (z1==0&&z2==0)                               score[x][y]+=20;
            if ((z1==-co&&z2==0)||(z1==0&&z2==-co))         score[x][y]+=10;
            if (z1==-co&&z2==-co)                           score[x][y]+=0;

        }

        if (numzxys==1){
            if (z1==0&&z2==0)                               score[x][y]+=10;
            if ((z1==-co&&z2==0)||(z1==0&&z2==-co))         score[x][y]+=5;
            if (z1==-co&&z2==-co)                           score[x][y]+=0;

        }









        i=1;
        numzy=0;
        while(qizi[x+i][y]==-co&&pdout(x+i,y)){   //左右一排连着对方四个
            numzy++;
            i++;
        }
        if (pdout(x+i,y))
            z1=qizi[x+i][y];
        else z1=co;

        i=1;
        while(qizi[x-i][y]==-co&&pdout(x-i,y)){
            numzy++;
            i++;
        }
        if (pdout(x-i,y))
            z2=qizi[x-i][y];
        else z2=co;

        if (numzy>=4){
            score[x][y]+=500;

        }
        if (numzy==3){
            if (z1==0&&z2==0)                               score[x][y]+=250;
            if ((z1==co&&z2==0)||(z1==0&&z2==co))         score[x][y]+=50;
            if (z1==co&&z2==co)                           score[x][y]+=0;
        }
        if (numzy==2){
            if (z1==0&&z2==0)                               score[x][y]+=50;
            if ((z1==co&&z2==0)||(z1==0&&z2==co))         score[x][y]+=20;
            if (z1==co&&z2==co)                           score[x][y]+=0;

        }

        if (numzy==1){
            if (z1==0&&z2==0)                               score[x][y]+=20;
            if ((z1==co&&z2==0)||(z1==0&&z2==co))         score[x][y]+=10;
            if (z1==co&&z2==co)                           score[x][y]+=0;

        }


        i=1;
        numsx=0;
        while(qizi[x][y+i]==-co&&pdout(x,y+i)){   //上下一排连着对方四个
            numsx++;
            i++;
        }
        if (pdout(x,y+i))
            z1=qizi[x][y+i];
        else z1=co;

        i=1;
        while(qizi[x][y-i]==-co&&pdout(x,y-i)){
            numsx++;
            i++;
        }
        if (pdout(x,y-i))
            z2=qizi[x][y-i];
        else z2=co;

        if (numsx>=4){
            score[x][y]+=500;

        }
        if (numsx==3){
            if (z1==0&&z2==0)                               score[x][y]+=250;
            if ((z1==co&&z2==0)||(z1==0&&z2==co))         score[x][y]+=50;
            if (z1==co&&z2==co)                           score[x][y]+=0;
        }
        if (numsx==2){
            if (z1==0&&z2==0)                               score[x][y]+=50;
            if ((z1==-co&&z2==0)||(z1==0&&z2==-co))         score[x][y]+=20;
            if (z1==-co&&z2==-co)                           score[x][y]+=0;

        }

        if (numsx==1){
            if (z1==0&&z2==0)                               score[x][y]+=20;
            if ((z1==co&&z2==0)||(z1==0&&z2==co))         score[x][y]+=10;
            if (z1==co&&z2==co)                           score[x][y]+=0;

        }


        i=1;
        numzsyx=0;
        while(qizi[x+i][y+i]==-co&&pdout(x+i,y+i)){   //左上右下一排连着对方四个
            numzsyx++;
            i++;
        }
        if (pdout(x+i,y+i))
            z1=qizi[x+i][y+i];
        else z1=co;

        i=1;
        while(qizi[x-i][y-i]==-co&&pdout(x-i,y-i)){
            numzsyx++;
            i++;
        }
        if (pdout(x-i,y-i))
            z2=qizi[x-i][y-i];
        else z2=co;

        if (numzsyx>=4){
            score[x][y]+=500;

        }
        if (numzsyx==3){
            if (z1==0&&z2==0)                               score[x][y]+=250;
            if ((z1==co&&z2==0)||(z1==0&&z2==co))         score[x][y]+=50;
            if (z1==co&&z2==co)                           score[x][y]+=0;
        }
        if (numzsyx==2){
            if (z1==0&&z2==0)                               score[x][y]+=50;
            if ((z1==co&&z2==0)||(z1==0&&z2==co))         score[x][y]+=20;
            if (z1==co&&z2==co)                           score[x][y]+=0;

        }

        if (numzsyx==1){
            if (z1==0&&z2==0)                               score[x][y]+=20;
            if ((z1==co&&z2==0)||(z1==0&&z2==co))         score[x][y]+=10;
            if (z1==co&&z2==co)                           score[x][y]+=0;

        }


        i=1;
        numzxys=0;
        while(qizi[x-i][y+i]==-co&&pdout(x-i,y+i)){   //左下右上一排连着对方四个
            numzxys++;
            i++;
        }
        if (pdout(x-i,y+i))
            z1=qizi[x-i][y+i];
        else z1=co;

        i=1;
        while(qizi[x+i][y-i]==-co&&pdout(x+i,y-i)){
            numzxys++;
            i++;
        }
        if (pdout(x+i,y-i))
            z2=qizi[x+i][y-i];
        else z2=co;
        if (numzxys>=4){
            score[x][y]+=500;

        }
        if (numzxys==3){
            if (z1==0&&z2==0)                               score[x][y]+=250;
            if ((z1==co&&z2==0)||(z1==0&&z2==co))         score[x][y]+=50;
            if (z1==co&&z2==co)                           score[x][y]+=0;
        }
        if (numzxys==2){
            if (z1==0&&z2==0)                               score[x][y]+=50;
            if ((z1==co&&z2==0)||(z1==0&&z2==co))         score[x][y]+=20;
            if (z1==co&&z2==co)                           score[x][y]+=0;

        }

        if (numzxys==1){
            if (z1==0&&z2==0)                               score[x][y]+=20;
            if ((z1==co&&z2==0)||(z1==0&&z2==co))         score[x][y]+=10;
            if (z1==co&&z2==co)                           score[x][y]+=0;

        }

    }
    else{
        score[x][y]=-1000;
    }
    qDebug()<<score[x][y];
    QTime randtime;
    randtime = QTime::currentTime();
    qsrand(randtime.msec()+randtime.second()*1000); //以当前时间ms为随机种子

    int n = qrand() % 5;
    score[x][y]+=n;

    return score[x][y];


}
