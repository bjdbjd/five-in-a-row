#include "paihangbang.h"
#include "ui_paihangbang.h"
#include "QFile"
#include "QDebug"
#include "publicitem.h"
paihangbang::paihangbang(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::paihangbang)
{
    ui->setupUi(this);
    setMinimumSize(1125,720);
    setMaximumSize(1125,720);
    getph();
    update();

}

paihangbang::~paihangbang()
{
    delete ui;
}

void paihangbang::getph()
{
    pm *list=new pm[8];

        QString fileName ="../Users/ID.txt";
        int i=0;

    QFile file1(fileName);
        // 读写模式打开文件
        file1.open(QIODevice::ReadWrite | QIODevice::Text);
        QString data;
        if(file1.isOpen())
            {
                if(file1.size() != 0)//文件有数据
                {
                    qDebug() << "文件有数据";

                    //一行一行一直读，直至读取失败
                    while(!file1.atEnd())
                    {
                        qDebug() <<"读取用户名";
                        data=file1.readLine();
                        bool pd=1;
                        if (data!="\n"){
                            qDebug() << data;
                            data.chop(1);
                            int sco=it::getTxt(data);
                            if (i==0){
                                list[0].id=data;
                                list[0].score=sco;
                                i++;
                            }
                            else{

                                for(int i1=0;i1<i;i1++){
                                    if(sco>list[i1].score){
                                        for(int i2=i-1;i2>=i1;i2--){
                                            if(i2<7){
                                                list[i2+1]=list[i2];
                                            }
                                        }
                                        list[i1].id=data;
                                        list[i1].score=sco;
                                        i++;
                                        pd=0;
                                        break;
                                    }
                                }
                                if(pd){
                                    list[i].id=data;
                                    list[i].score=sco;
                                    i++;
                                }

                            }
                        }


                    }
                    // 读取完后关闭文件
                    file1.close();

                }
                if (0<i) {
                    ui->id1->setText(list[0].id);
                    ui->score1->setNum(list[0].score);
                }
                if (1<i) {
                    ui->id2->setText(list[1].id);
                    ui->score2->setNum(list[1].score);
                }
                if (2<i) {
                    ui->id3->setText(list[2].id);
                    ui->score3->setNum(list[2].score);
                }
                if (3<i) {
                    ui->id4->setText(list[3].id);
                    ui->score4->setNum(list[3].score);
                }
                if (4<i) {
                    ui->id5->setText(list[4].id);
                    ui->score5->setNum(list[4].score);
                }
                if (5<i) {
                    ui->id6->setText(list[5].id);
                    ui->score6->setNum(list[5].score);
                }
                if (6<i) {
                    ui->id7->setText(list[6].id);
                    ui->score7->setNum(list[6].score);
                }
                if (7<i) {
                    ui->id8->setText(list[7].id);
                    ui->score8->setNum(list[7].score);
                }
            }
            else
            {
                qDebug() << "文件打开失败";
            }
}
