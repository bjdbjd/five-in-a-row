/********************************************************************************
** Form generated from reading UI file 'huiqif.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HUIQIF_H
#define UI_HUIQIF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_huiqif
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *huiqifail;

    void setupUi(QDialog *huiqif)
    {
        if (huiqif->objectName().isEmpty())
            huiqif->setObjectName(QString::fromUtf8("huiqif"));
        huiqif->resize(400, 300);
        verticalLayout = new QVBoxLayout(huiqif);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        huiqifail = new QLabel(huiqif);
        huiqifail->setObjectName(QString::fromUtf8("huiqifail"));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R"));
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        huiqifail->setFont(font);

        verticalLayout->addWidget(huiqifail);


        retranslateUi(huiqif);

        QMetaObject::connectSlotsByName(huiqif);
    } // setupUi

    void retranslateUi(QDialog *huiqif)
    {
        huiqif->setWindowTitle(QApplication::translate("huiqif", "\346\227\240\346\263\225\346\202\224\346\243\213\357\274\201", nullptr));
        huiqifail->setText(QApplication::translate("huiqif", "\345\275\223\345\211\215\346\227\240\346\263\225\346\202\224\346\243\213\357\274\214\350\257\267\345\256\214\346\210\220\344\270\200\344\270\252\345\233\236\345\220\210\345\220\216\345\206\215\345\260\235\350\257\225\357\274\214\346\257\217\346\254\241\344\273\205\345\217\257\346\202\224\346\243\213\344\270\200\345\233\236\345\220\210\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class huiqif: public Ui_huiqif {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HUIQIF_H
