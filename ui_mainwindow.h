/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *btn_C;
    QPushButton *btnNum7;
    QPushButton *btnNum3;
    QPushButton *btn_sub;
    QPushButton *btn_square;
    QPushButton *btn_add;
    QPushButton *btn_percent;
    QPushButton *btnNum5;
    QPushButton *btnNum1;
    QPushButton *btn_eq;
    QPushButton *btn_reciprocal;
    QPushButton *btnNum8;
    QPushButton *btnNum0;
    QPushButton *btn_back;
    QPushButton *btn_sqrt;
    QPushButton *btnNum6;
    QPushButton *btnNum2;
    QPushButton *btn_sign;
    QPushButton *btnNum4;
    QPushButton *btn_CE;
    QPushButton *btnNum9;
    QPushButton *btn_mul;
    QPushButton *btn_div;
    QPushButton *btn_dot;
    QLineEdit *lbl_display;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(357, 378);
        MainWindow->setStyleSheet(QString::fromUtf8("QFile qssFile(\":/style.qss\");\n"
"qssFile.open(QFile::ReadOnly);\n"
"this->setStyleSheet(qssFile.readAll());"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: rgb(255, 255, 127);\n"
"    font: 15rgb(85, 255, 127)\n"
"pt \"Microsoft YaHei UI\";qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255))\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        btn_C = new QPushButton(centralwidget);
        btn_C->setObjectName("btn_C");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_C->sizePolicy().hasHeightForWidth());
        btn_C->setSizePolicy(sizePolicy);
        btn_C->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(btn_C, 1, 2, 1, 1);

        btnNum7 = new QPushButton(centralwidget);
        btnNum7->setObjectName("btnNum7");
        sizePolicy.setHeightForWidth(btnNum7->sizePolicy().hasHeightForWidth());
        btnNum7->setSizePolicy(sizePolicy);
        btnNum7->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(btnNum7, 3, 0, 1, 1);

        btnNum3 = new QPushButton(centralwidget);
        btnNum3->setObjectName("btnNum3");
        sizePolicy.setHeightForWidth(btnNum3->sizePolicy().hasHeightForWidth());
        btnNum3->setSizePolicy(sizePolicy);
        btnNum3->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(btnNum3, 5, 2, 1, 1);

        btn_sub = new QPushButton(centralwidget);
        btn_sub->setObjectName("btn_sub");
        sizePolicy.setHeightForWidth(btn_sub->sizePolicy().hasHeightForWidth());
        btn_sub->setSizePolicy(sizePolicy);
        btn_sub->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(btn_sub, 4, 3, 1, 1);

        btn_square = new QPushButton(centralwidget);
        btn_square->setObjectName("btn_square");
        sizePolicy.setHeightForWidth(btn_square->sizePolicy().hasHeightForWidth());
        btn_square->setSizePolicy(sizePolicy);
        btn_square->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(btn_square, 2, 1, 1, 1);

        btn_add = new QPushButton(centralwidget);
        btn_add->setObjectName("btn_add");
        sizePolicy.setHeightForWidth(btn_add->sizePolicy().hasHeightForWidth());
        btn_add->setSizePolicy(sizePolicy);
        btn_add->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(btn_add, 5, 3, 1, 1);

        btn_percent = new QPushButton(centralwidget);
        btn_percent->setObjectName("btn_percent");
        sizePolicy.setHeightForWidth(btn_percent->sizePolicy().hasHeightForWidth());
        btn_percent->setSizePolicy(sizePolicy);
        btn_percent->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(btn_percent, 1, 0, 1, 1);

        btnNum5 = new QPushButton(centralwidget);
        btnNum5->setObjectName("btnNum5");
        sizePolicy.setHeightForWidth(btnNum5->sizePolicy().hasHeightForWidth());
        btnNum5->setSizePolicy(sizePolicy);
        btnNum5->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(btnNum5, 4, 1, 1, 1);

        btnNum1 = new QPushButton(centralwidget);
        btnNum1->setObjectName("btnNum1");
        sizePolicy.setHeightForWidth(btnNum1->sizePolicy().hasHeightForWidth());
        btnNum1->setSizePolicy(sizePolicy);
        btnNum1->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(btnNum1, 5, 0, 1, 1);

        btn_eq = new QPushButton(centralwidget);
        btn_eq->setObjectName("btn_eq");
        sizePolicy.setHeightForWidth(btn_eq->sizePolicy().hasHeightForWidth());
        btn_eq->setSizePolicy(sizePolicy);
        btn_eq->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(btn_eq, 6, 3, 1, 1);

        btn_reciprocal = new QPushButton(centralwidget);
        btn_reciprocal->setObjectName("btn_reciprocal");
        sizePolicy.setHeightForWidth(btn_reciprocal->sizePolicy().hasHeightForWidth());
        btn_reciprocal->setSizePolicy(sizePolicy);
        btn_reciprocal->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(btn_reciprocal, 2, 0, 1, 1);

        btnNum8 = new QPushButton(centralwidget);
        btnNum8->setObjectName("btnNum8");
        sizePolicy.setHeightForWidth(btnNum8->sizePolicy().hasHeightForWidth());
        btnNum8->setSizePolicy(sizePolicy);
        btnNum8->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(btnNum8, 3, 1, 1, 1);

        btnNum0 = new QPushButton(centralwidget);
        btnNum0->setObjectName("btnNum0");
        sizePolicy.setHeightForWidth(btnNum0->sizePolicy().hasHeightForWidth());
        btnNum0->setSizePolicy(sizePolicy);
        btnNum0->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(btnNum0, 6, 1, 1, 1);

        btn_back = new QPushButton(centralwidget);
        btn_back->setObjectName("btn_back");
        sizePolicy.setHeightForWidth(btn_back->sizePolicy().hasHeightForWidth());
        btn_back->setSizePolicy(sizePolicy);
        btn_back->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(btn_back, 1, 3, 1, 1);

        btn_sqrt = new QPushButton(centralwidget);
        btn_sqrt->setObjectName("btn_sqrt");
        sizePolicy.setHeightForWidth(btn_sqrt->sizePolicy().hasHeightForWidth());
        btn_sqrt->setSizePolicy(sizePolicy);
        btn_sqrt->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(btn_sqrt, 2, 2, 1, 1);

        btnNum6 = new QPushButton(centralwidget);
        btnNum6->setObjectName("btnNum6");
        sizePolicy.setHeightForWidth(btnNum6->sizePolicy().hasHeightForWidth());
        btnNum6->setSizePolicy(sizePolicy);
        btnNum6->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(btnNum6, 4, 2, 1, 1);

        btnNum2 = new QPushButton(centralwidget);
        btnNum2->setObjectName("btnNum2");
        sizePolicy.setHeightForWidth(btnNum2->sizePolicy().hasHeightForWidth());
        btnNum2->setSizePolicy(sizePolicy);
        btnNum2->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(btnNum2, 5, 1, 1, 1);

        btn_sign = new QPushButton(centralwidget);
        btn_sign->setObjectName("btn_sign");
        sizePolicy.setHeightForWidth(btn_sign->sizePolicy().hasHeightForWidth());
        btn_sign->setSizePolicy(sizePolicy);
        btn_sign->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(btn_sign, 6, 0, 1, 1);

        btnNum4 = new QPushButton(centralwidget);
        btnNum4->setObjectName("btnNum4");
        sizePolicy.setHeightForWidth(btnNum4->sizePolicy().hasHeightForWidth());
        btnNum4->setSizePolicy(sizePolicy);
        btnNum4->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(btnNum4, 4, 0, 1, 1);

        btn_CE = new QPushButton(centralwidget);
        btn_CE->setObjectName("btn_CE");
        sizePolicy.setHeightForWidth(btn_CE->sizePolicy().hasHeightForWidth());
        btn_CE->setSizePolicy(sizePolicy);
        btn_CE->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(btn_CE, 1, 1, 1, 1);

        btnNum9 = new QPushButton(centralwidget);
        btnNum9->setObjectName("btnNum9");
        sizePolicy.setHeightForWidth(btnNum9->sizePolicy().hasHeightForWidth());
        btnNum9->setSizePolicy(sizePolicy);
        btnNum9->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(btnNum9, 3, 2, 1, 1);

        btn_mul = new QPushButton(centralwidget);
        btn_mul->setObjectName("btn_mul");
        sizePolicy.setHeightForWidth(btn_mul->sizePolicy().hasHeightForWidth());
        btn_mul->setSizePolicy(sizePolicy);
        btn_mul->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(btn_mul, 3, 3, 1, 1);

        btn_div = new QPushButton(centralwidget);
        btn_div->setObjectName("btn_div");
        sizePolicy.setHeightForWidth(btn_div->sizePolicy().hasHeightForWidth());
        btn_div->setSizePolicy(sizePolicy);
        btn_div->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(btn_div, 2, 3, 1, 1);

        btn_dot = new QPushButton(centralwidget);
        btn_dot->setObjectName("btn_dot");
        sizePolicy.setHeightForWidth(btn_dot->sizePolicy().hasHeightForWidth());
        btn_dot->setSizePolicy(sizePolicy);
        btn_dot->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(btn_dot, 6, 2, 1, 1);

        lbl_display = new QLineEdit(centralwidget);
        lbl_display->setObjectName("lbl_display");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbl_display->sizePolicy().hasHeightForWidth());
        lbl_display->setSizePolicy(sizePolicy1);
        lbl_display->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(lbl_display, 0, 0, 1, 4);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 357, 18));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_C->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        btnNum7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btnNum3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btn_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btn_square->setText(QCoreApplication::translate("MainWindow", "x^2", nullptr));
        btn_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btn_percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        btnNum5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btnNum1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn_eq->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btn_reciprocal->setText(QCoreApplication::translate("MainWindow", "1/x", nullptr));
        btnNum8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btnNum0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btn_back->setText(QCoreApplication::translate("MainWindow", "\342\214\253", nullptr));
        btn_sqrt->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        btnNum6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btnNum2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn_sign->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        btnNum4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btn_CE->setText(QCoreApplication::translate("MainWindow", "CE", nullptr));
        btnNum9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btn_mul->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        btn_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btn_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
