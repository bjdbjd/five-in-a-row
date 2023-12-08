/********************************************************************************
** Form generated from reading UI file 'theend.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEEND_H
#define UI_THEEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_theend
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *td;

    void setupUi(QDialog *theend)
    {
        if (theend->objectName().isEmpty())
            theend->setObjectName(QString::fromUtf8("theend"));
        theend->resize(400, 300);
        verticalLayout = new QVBoxLayout(theend);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        td = new QLabel(theend);
        td->setObjectName(QString::fromUtf8("td"));
        QFont font;
        font.setPointSize(16);
        td->setFont(font);
        td->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(td);


        retranslateUi(theend);

        QMetaObject::connectSlotsByName(theend);
    } // setupUi

    void retranslateUi(QDialog *theend)
    {
        theend->setWindowTitle(QApplication::translate("theend", "\346\270\270\346\210\217\347\273\223\346\235\237", nullptr));
        td->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class theend: public Ui_theend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEEND_H
