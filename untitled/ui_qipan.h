/********************************************************************************
** Form generated from reading UI file 'qipan.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QIPAN_H
#define UI_QIPAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qipan
{
public:
    QPushButton *hui;
    QPushButton *hui_2;

    void setupUi(QWidget *qipan)
    {
        if (qipan->objectName().isEmpty())
            qipan->setObjectName(QString::fromUtf8("qipan"));
        qipan->resize(400, 300);
        qipan->setMouseTracking(true);
        hui = new QPushButton(qipan);
        hui->setObjectName(QString::fromUtf8("hui"));
        hui->setGeometry(QRect(10, 210, 121, 41));
        QFont font;
        font.setPointSize(14);
        hui->setFont(font);
        hui_2 = new QPushButton(qipan);
        hui_2->setObjectName(QString::fromUtf8("hui_2"));
        hui_2->setGeometry(QRect(10, 260, 121, 41));
        hui_2->setFont(font);

        retranslateUi(qipan);

        QMetaObject::connectSlotsByName(qipan);
    } // setupUi

    void retranslateUi(QWidget *qipan)
    {
        qipan->setWindowTitle(QApplication::translate("qipan", "\344\272\224\345\255\220\346\243\213", nullptr));
        hui->setText(QApplication::translate("qipan", "\346\202\224\346\243\213", nullptr));
        hui_2->setText(QApplication::translate("qipan", "\351\207\215\346\226\260\345\274\200\345\247\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qipan: public Ui_qipan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QIPAN_H
