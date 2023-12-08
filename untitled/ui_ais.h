/********************************************************************************
** Form generated from reading UI file 'ais.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AIS_H
#define UI_AIS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Ais
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Ais)
    {
        if (Ais->objectName().isEmpty())
            Ais->setObjectName(QString::fromUtf8("Ais"));
        Ais->resize(400, 300);
        verticalLayout = new QVBoxLayout(Ais);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Ais);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(50, -1, 50, -1);
        pushButton = new QPushButton(Ais);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 50));
        QFont font1;
        font1.setPointSize(14);
        pushButton->setFont(font1);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Users/icon/black.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(48, 48));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(Ais);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 50));
        pushButton_2->setFont(font1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../Users/icon/white.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(48, 48));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Ais);

        QMetaObject::connectSlotsByName(Ais);
    } // setupUi

    void retranslateUi(QDialog *Ais)
    {
        Ais->setWindowTitle(QApplication::translate("Ais", "\344\272\272\346\234\272\346\250\241\345\274\217", nullptr));
        label->setText(QApplication::translate("Ais", "\350\257\267\351\200\211\346\213\251\344\275\240\347\232\204\346\243\213\345\255\220", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Ais: public Ui_Ais {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AIS_H
