/********************************************************************************
** Form generated from reading UI file 'resetpswd.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESETPSWD_H
#define UI_RESETPSWD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_resetpswd
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLabel *label_2;
    QLineEdit *newpassword;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLabel *label_4;
    QLineEdit *newpassword2;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QLabel *zhuce;
    QPushButton *conform;
    QLabel *label_11;

    void setupUi(QDialog *resetpswd)
    {
        if (resetpswd->objectName().isEmpty())
            resetpswd->setObjectName(QString::fromUtf8("resetpswd"));
        resetpswd->resize(666, 440);
        verticalLayout = new QVBoxLayout(resetpswd);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 10, -1, 10);
        label = new QLabel(resetpswd);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        label_5 = new QLabel(resetpswd);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(80, 80));
        label_5->setMaximumSize(QSize(80, 80));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../Users/icon/resetpswd.png")));
        label_5->setScaledContents(true);

        horizontalLayout->addWidget(label_5);

        label_3 = new QLabel(resetpswd);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(resetpswd);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(80, 0));
        label_6->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_2->addWidget(label_6);

        label_2 = new QLabel(resetpswd);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe Arabic"));
        font.setPointSize(15);
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        newpassword = new QLineEdit(resetpswd);
        newpassword->setObjectName(QString::fromUtf8("newpassword"));
        newpassword->setMinimumSize(QSize(260, 35));
        QFont font1;
        font1.setPointSize(14);
        newpassword->setFont(font1);
        newpassword->setMaxLength(16);
        newpassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(newpassword);

        label_7 = new QLabel(resetpswd);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(80, 0));
        label_7->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_2->addWidget(label_7);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_8 = new QLabel(resetpswd);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(80, 0));
        label_8->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_3->addWidget(label_8);

        label_4 = new QLabel(resetpswd);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout_3->addWidget(label_4);

        newpassword2 = new QLineEdit(resetpswd);
        newpassword2->setObjectName(QString::fromUtf8("newpassword2"));
        newpassword2->setMinimumSize(QSize(260, 35));
        newpassword2->setFont(font1);
        newpassword2->setMaxLength(16);
        newpassword2->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(newpassword2);

        label_9 = new QLabel(resetpswd);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(80, 0));
        label_9->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_3->addWidget(label_9);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_10 = new QLabel(resetpswd);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(80, 0));
        label_10->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_4->addWidget(label_10);

        zhuce = new QLabel(resetpswd);
        zhuce->setObjectName(QString::fromUtf8("zhuce"));
        zhuce->setMinimumSize(QSize(180, 35));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Adobe Arabic"));
        font2.setPointSize(12);
        zhuce->setFont(font2);

        horizontalLayout_4->addWidget(zhuce);

        conform = new QPushButton(resetpswd);
        conform->setObjectName(QString::fromUtf8("conform"));
        conform->setMinimumSize(QSize(120, 35));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Adobe Arabic"));
        font3.setPointSize(14);
        conform->setFont(font3);

        horizontalLayout_4->addWidget(conform);

        label_11 = new QLabel(resetpswd);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(80, 0));
        label_11->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_4->addWidget(label_11);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(resetpswd);

        QMetaObject::connectSlotsByName(resetpswd);
    } // setupUi

    void retranslateUi(QDialog *resetpswd)
    {
        resetpswd->setWindowTitle(QApplication::translate("resetpswd", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        label->setText(QString());
        label_5->setText(QString());
        label_3->setText(QString());
        label_6->setText(QString());
        label_2->setText(QApplication::translate("resetpswd", "\345\257\206          \347\240\201\357\274\232", nullptr));
        label_7->setText(QString());
        label_8->setText(QString());
        label_4->setText(QApplication::translate("resetpswd", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        label_9->setText(QString());
        label_10->setText(QString());
        zhuce->setText(QApplication::translate("resetpswd", "\350\257\267\350\276\223\345\205\245\344\275\240\347\232\204\345\257\206\347\240\201", nullptr));
        conform->setText(QApplication::translate("resetpswd", "\347\241\256\345\256\232", nullptr));
        label_11->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class resetpswd: public Ui_resetpswd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESETPSWD_H
