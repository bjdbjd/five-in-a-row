/********************************************************************************
** Form generated from reading UI file 'peace.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEACE_H
#define UI_PEACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_peace
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QDialog *peace)
    {
        if (peace->objectName().isEmpty())
            peace->setObjectName(QString::fromUtf8("peace"));
        peace->resize(400, 300);
        verticalLayout = new QVBoxLayout(peace);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(peace);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        retranslateUi(peace);

        QMetaObject::connectSlotsByName(peace);
    } // setupUi

    void retranslateUi(QDialog *peace)
    {
        peace->setWindowTitle(QApplication::translate("peace", "\345\222\214\346\243\213", nullptr));
        label->setText(QApplication::translate("peace", "\345\222\214\346\243\213\344\272\206\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class peace: public Ui_peace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEACE_H
