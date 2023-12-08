/********************************************************************************
** Form generated from reading UI file 'istrue.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ISTRUE_H
#define UI_ISTRUE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_istrue
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Set;
    QLabel *label;
    QPushButton *paihang;
    QLabel *welcomeline;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton2;

    void setupUi(QDialog *istrue)
    {
        if (istrue->objectName().isEmpty())
            istrue->setObjectName(QString::fromUtf8("istrue"));
        istrue->resize(400, 324);
        verticalLayout = new QVBoxLayout(istrue);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Set = new QPushButton(istrue);
        Set->setObjectName(QString::fromUtf8("Set"));
        Set->setMinimumSize(QSize(50, 50));
        Set->setMaximumSize(QSize(50, 50));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Users/icon/set.png"), QSize(), QIcon::Normal, QIcon::Off);
        Set->setIcon(icon);
        Set->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(Set);

        label = new QLabel(istrue);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(160, 0));

        horizontalLayout_2->addWidget(label);

        paihang = new QPushButton(istrue);
        paihang->setObjectName(QString::fromUtf8("paihang"));
        paihang->setMinimumSize(QSize(50, 50));
        paihang->setMaximumSize(QSize(50, 50));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../Users/icon/paihang.png"), QSize(), QIcon::Normal, QIcon::Off);
        paihang->setIcon(icon1);
        paihang->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(paihang);


        verticalLayout->addLayout(horizontalLayout_2);

        welcomeline = new QLabel(istrue);
        welcomeline->setObjectName(QString::fromUtf8("welcomeline"));
        welcomeline->setMinimumSize(QSize(0, 200));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R"));
        font.setPointSize(20);
        welcomeline->setFont(font);
        welcomeline->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(welcomeline);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(istrue);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Adobe Arabic"));
        font1.setPointSize(14);
        pushButton->setFont(font1);

        horizontalLayout->addWidget(pushButton);

        pushButton2 = new QPushButton(istrue);
        pushButton2->setObjectName(QString::fromUtf8("pushButton2"));
        pushButton2->setMinimumSize(QSize(0, 50));
        QFont font2;
        font2.setPointSize(14);
        pushButton2->setFont(font2);

        horizontalLayout->addWidget(pushButton2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(istrue);

        QMetaObject::connectSlotsByName(istrue);
    } // setupUi

    void retranslateUi(QDialog *istrue)
    {
        istrue->setWindowTitle(QApplication::translate("istrue", "\347\231\273\345\275\225", nullptr));
        Set->setText(QString());
        label->setText(QString());
        paihang->setText(QString());
        welcomeline->setText(QApplication::translate("istrue", "\345\257\206\347\240\201\346\255\243\347\241\256\357\274\214\346\254\242\350\277\216\357\274\201", nullptr));
        pushButton->setText(QApplication::translate("istrue", "\344\272\272\344\272\272\345\257\271\346\210\230", nullptr));
        pushButton2->setText(QApplication::translate("istrue", "\344\272\272\346\234\272\345\257\271\346\210\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class istrue: public Ui_istrue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ISTRUE_H
