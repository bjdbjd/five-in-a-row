/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *ID;
    QLabel *label_2;
    QLineEdit *password;
    QPushButton *login;
    QPushButton *prelogin;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(492, 414);
        MainWindow->setAutoFillBackground(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(20, 10, 20, 10);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(220, 160));
        label_4->setMaximumSize(QSize(220, 160));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R"));
        font.setPointSize(24);
        label_4->setFont(font);
        label_4->setMidLineWidth(4);
        label_4->setPixmap(QPixmap(QString::fromUtf8("../Users/icon/title.png")));
        label_4->setScaledContents(true);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(100, 10, 100, 10);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R"));
        font1.setPointSize(14);
        label->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        ID = new QLineEdit(centralWidget);
        ID->setObjectName(QString::fromUtf8("ID"));
        ID->setMinimumSize(QSize(200, 40));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Adobe Arabic"));
        font2.setPointSize(14);
        ID->setFont(font2);

        formLayout->setWidget(1, QFormLayout::FieldRole, ID);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 40));
        label_2->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        password = new QLineEdit(centralWidget);
        password->setObjectName(QString::fromUtf8("password"));
        password->setMinimumSize(QSize(200, 40));
        password->setFont(font2);
        password->setMaxLength(16);
        password->setFrame(true);
        password->setEchoMode(QLineEdit::Password);
        password->setDragEnabled(false);
        password->setReadOnly(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, password);

        login = new QPushButton(centralWidget);
        login->setObjectName(QString::fromUtf8("login"));
        login->setEnabled(true);
        login->setMinimumSize(QSize(280, 40));
        login->setMaximumSize(QSize(16777215, 45));
        login->setFont(font1);
        login->setMouseTracking(false);

        formLayout->setWidget(3, QFormLayout::SpanningRole, login);

        prelogin = new QPushButton(centralWidget);
        prelogin->setObjectName(QString::fromUtf8("prelogin"));
        prelogin->setMinimumSize(QSize(280, 40));
        prelogin->setMaximumSize(QSize(16777215, 45));
        prelogin->setFont(font1);

        formLayout->setWidget(4, QFormLayout::SpanningRole, prelogin);


        verticalLayout_2->addLayout(formLayout);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\344\272\224\345\255\220\346\243\213", nullptr));
        label_4->setText(QString());
        label->setText(QApplication::translate("MainWindow", "\350\264\246  \345\217\267\357\274\232", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\345\257\206  \347\240\201\357\274\232", nullptr));
        password->setInputMask(QString());
        password->setText(QString());
        password->setPlaceholderText(QString());
        login->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        prelogin->setText(QApplication::translate("MainWindow", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
