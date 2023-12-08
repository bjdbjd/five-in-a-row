/********************************************************************************
** Form generated from reading UI file 'predialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREDIALOG_H
#define UI_PREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_preDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *newID;
    QLabel *label_2;
    QLineEdit *newpassword;
    QLabel *label_4;
    QLineEdit *newpassword2;
    QLabel *zhuce;
    QPushButton *conform;

    void setupUi(QDialog *preDialog)
    {
        if (preDialog->objectName().isEmpty())
            preDialog->setObjectName(QString::fromUtf8("preDialog"));
        preDialog->resize(522, 348);
        preDialog->setLayoutDirection(Qt::LeftToRight);
        verticalLayout = new QVBoxLayout(preDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(preDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(90, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R"));
        font.setPointSize(22);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(50, 30, 50, 30);
        label = new QLabel(preDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Adobe Arabic"));
        font1.setPointSize(14);
        label->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        newID = new QLineEdit(preDialog);
        newID->setObjectName(QString::fromUtf8("newID"));
        newID->setMinimumSize(QSize(300, 35));
        newID->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, newID);

        label_2 = new QLabel(preDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        newpassword = new QLineEdit(preDialog);
        newpassword->setObjectName(QString::fromUtf8("newpassword"));
        newpassword->setMinimumSize(QSize(300, 35));
        QFont font2;
        font2.setPointSize(14);
        newpassword->setFont(font2);
        newpassword->setMaxLength(16);
        newpassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, newpassword);

        label_4 = new QLabel(preDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        newpassword2 = new QLineEdit(preDialog);
        newpassword2->setObjectName(QString::fromUtf8("newpassword2"));
        newpassword2->setMinimumSize(QSize(300, 35));
        newpassword2->setFont(font2);
        newpassword2->setMaxLength(16);
        newpassword2->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, newpassword2);

        zhuce = new QLabel(preDialog);
        zhuce->setObjectName(QString::fromUtf8("zhuce"));
        zhuce->setMinimumSize(QSize(100, 35));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Adobe Arabic"));
        font3.setPointSize(10);
        zhuce->setFont(font3);

        formLayout->setWidget(3, QFormLayout::LabelRole, zhuce);

        conform = new QPushButton(preDialog);
        conform->setObjectName(QString::fromUtf8("conform"));
        conform->setMinimumSize(QSize(300, 35));
        conform->setFont(font1);

        formLayout->setWidget(3, QFormLayout::FieldRole, conform);


        verticalLayout->addLayout(formLayout);


        retranslateUi(preDialog);

        QMetaObject::connectSlotsByName(preDialog);
    } // setupUi

    void retranslateUi(QDialog *preDialog)
    {
        preDialog->setWindowTitle(QApplication::translate("preDialog", "\346\263\250\345\206\214", nullptr));
        label_3->setText(QApplication::translate("preDialog", "\346\263\250  \345\206\214", nullptr));
        label->setText(QApplication::translate("preDialog", "\350\264\246  \345\217\267\357\274\232", nullptr));
        label_2->setText(QApplication::translate("preDialog", "\345\257\206  \347\240\201\357\274\232", nullptr));
        label_4->setText(QApplication::translate("preDialog", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        zhuce->setText(QApplication::translate("preDialog", "\350\257\267\350\276\223\345\205\245\344\275\240\347\232\204\350\264\246\345\217\267\345\257\206\347\240\201", nullptr));
        conform->setText(QApplication::translate("preDialog", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class preDialog: public Ui_preDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREDIALOG_H
