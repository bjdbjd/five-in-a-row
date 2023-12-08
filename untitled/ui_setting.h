/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_setting
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLabel *soundlogo;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QSlider *horizontalSlider_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QPushButton *setback;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_10;
    QPushButton *pushButton;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QPushButton *setpassword;
    QLabel *label_7;

    void setupUi(QDialog *setting)
    {
        if (setting->objectName().isEmpty())
            setting->setObjectName(QString::fromUtf8("setting"));
        setting->resize(504, 480);
        verticalLayout = new QVBoxLayout(setting);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(setting);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        label = new QLabel(setting);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(80, 80));
        label->setMaximumSize(QSize(80, 80));
        label->setPixmap(QPixmap(QString::fromUtf8("../Users/icon/set.png")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);

        label_3 = new QLabel(setting);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(50, 30, 50, 30);
        soundlogo = new QLabel(setting);
        soundlogo->setObjectName(QString::fromUtf8("soundlogo"));
        soundlogo->setMaximumSize(QSize(30, 30));
        soundlogo->setPixmap(QPixmap(QString::fromUtf8("../Users/icon/sound.png")));
        soundlogo->setScaledContents(true);
        soundlogo->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(soundlogo);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_8 = new QLabel(setting);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(50, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R"));
        font.setPointSize(10);
        label_8->setFont(font);

        horizontalLayout_5->addWidget(label_8);

        horizontalSlider = new QSlider(setting);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMinimumSize(QSize(300, 30));
        horizontalSlider->setMaximum(100);
        horizontalSlider->setValue(60);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSlider);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 0, -1, 0);
        label_9 = new QLabel(setting);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(50, 0));
        label_9->setFont(font);

        horizontalLayout_7->addWidget(label_9);

        horizontalSlider_2 = new QSlider(setting);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setMinimumSize(QSize(300, 30));
        horizontalSlider_2->setMaximum(100);
        horizontalSlider_2->setValue(60);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(horizontalSlider_2);


        verticalLayout_2->addLayout(horizontalLayout_7);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, 10, 20, 10);
        label_4 = new QLabel(setting);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_3->addWidget(label_4);

        setback = new QPushButton(setting);
        setback->setObjectName(QString::fromUtf8("setback"));
        setback->setMinimumSize(QSize(200, 60));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R"));
        font1.setPointSize(15);
        setback->setFont(font1);

        horizontalLayout_3->addWidget(setback);

        label_5 = new QLabel(setting);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_3->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(20, 10, 20, 10);
        label_10 = new QLabel(setting);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_8->addWidget(label_10);

        pushButton = new QPushButton(setting);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(200, 60));
        pushButton->setFont(font1);

        horizontalLayout_8->addWidget(pushButton);

        label_11 = new QLabel(setting);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_8->addWidget(label_11);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(20, 10, 20, 10);
        label_6 = new QLabel(setting);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_4->addWidget(label_6);

        setpassword = new QPushButton(setting);
        setpassword->setObjectName(QString::fromUtf8("setpassword"));
        setpassword->setMinimumSize(QSize(200, 60));
        setpassword->setFont(font1);

        horizontalLayout_4->addWidget(setpassword);

        label_7 = new QLabel(setting);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_4->addWidget(label_7);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(setting);

        QMetaObject::connectSlotsByName(setting);
    } // setupUi

    void retranslateUi(QDialog *setting)
    {
        setting->setWindowTitle(QApplication::translate("setting", "\350\256\276\347\275\256", nullptr));
        label_2->setText(QString());
        label->setText(QString());
        label_3->setText(QString());
        soundlogo->setText(QString());
        label_8->setText(QApplication::translate("setting", "\350\203\214\346\231\257", nullptr));
        label_9->setText(QApplication::translate("setting", "\350\220\275\345\255\220", nullptr));
        label_4->setText(QString());
        setback->setText(QApplication::translate("setting", "\351\200\211\346\213\251\350\203\214\346\231\257\345\233\276\347\211\207", nullptr));
        label_5->setText(QString());
        label_10->setText(QString());
        pushButton->setText(QApplication::translate("setting", "\351\200\211\346\213\251\350\203\214\346\231\257\351\237\263\344\271\220", nullptr));
        label_11->setText(QString());
        label_6->setText(QString());
        setpassword->setText(QApplication::translate("setting", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class setting: public Ui_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
