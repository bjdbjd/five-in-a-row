/********************************************************************************
** Form generated from reading UI file 'nottrue.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTTRUE_H
#define UI_NOTTRUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_nottrue
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QDialog *nottrue)
    {
        if (nottrue->objectName().isEmpty())
            nottrue->setObjectName(QString::fromUtf8("nottrue"));
        nottrue->resize(400, 300);
        verticalLayout = new QVBoxLayout(nottrue);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(nottrue);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R"));
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        retranslateUi(nottrue);

        QMetaObject::connectSlotsByName(nottrue);
    } // setupUi

    void retranslateUi(QDialog *nottrue)
    {
        nottrue->setWindowTitle(QApplication::translate("nottrue", "\345\257\206\347\240\201\351\224\231\350\257\257", nullptr));
        label->setText(QApplication::translate("nottrue", "\345\257\206\347\240\201\351\224\231\350\257\257\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nottrue: public Ui_nottrue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTTRUE_H
