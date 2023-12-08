/********************************************************************************
** Form generated from reading UI file 'inexistence.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INEXISTENCE_H
#define UI_INEXISTENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_inexistence
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QDialog *inexistence)
    {
        if (inexistence->objectName().isEmpty())
            inexistence->setObjectName(QString::fromUtf8("inexistence"));
        inexistence->resize(400, 300);
        verticalLayout = new QVBoxLayout(inexistence);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(inexistence);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R"));
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        retranslateUi(inexistence);

        QMetaObject::connectSlotsByName(inexistence);
    } // setupUi

    void retranslateUi(QDialog *inexistence)
    {
        inexistence->setWindowTitle(QApplication::translate("inexistence", "\350\264\246\345\217\267\344\270\215\345\255\230\345\234\250", nullptr));
        label->setText(QApplication::translate("inexistence", "\350\264\246\345\217\267\344\270\215\345\255\230\345\234\250\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inexistence: public Ui_inexistence {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INEXISTENCE_H
