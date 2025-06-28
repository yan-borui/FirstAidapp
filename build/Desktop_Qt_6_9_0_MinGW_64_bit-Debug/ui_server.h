/********************************************************************************
** Form generated from reading UI file 'server.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_H
#define UI_SERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *lineEdit;
    QPushButton *searchButton;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *startButton;
    QPushButton *callButton;
    QPushButton *knowledgeButton;
    QPushButton *myButton;

    void setupUi(QWidget *Server)
    {
        if (Server->objectName().isEmpty())
            Server->setObjectName("Server");
        Server->resize(350, 500);
        Server->setMinimumSize(QSize(350, 500));
        Server->setMaximumSize(QSize(350, 500));
        lineEdit = new QLineEdit(Server);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(30, 40, 201, 21));
        searchButton = new QPushButton(Server);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(240, 40, 81, 21));
        label = new QLabel(Server);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 70, 221, 16));
        widget = new QWidget(Server);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 420, 334, 20));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        startButton = new QPushButton(widget);
        startButton->setObjectName("startButton");

        horizontalLayout->addWidget(startButton);

        callButton = new QPushButton(widget);
        callButton->setObjectName("callButton");

        horizontalLayout->addWidget(callButton);

        knowledgeButton = new QPushButton(widget);
        knowledgeButton->setObjectName("knowledgeButton");

        horizontalLayout->addWidget(knowledgeButton);

        myButton = new QPushButton(widget);
        myButton->setObjectName("myButton");

        horizontalLayout->addWidget(myButton);


        retranslateUi(Server);

        QMetaObject::connectSlotsByName(Server);
    } // setupUi

    void retranslateUi(QWidget *Server)
    {
        Server->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        searchButton->setText(QCoreApplication::translate("Widget", "\346\220\234\347\264\242", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\347\226\276\347\227\205\345\220\215\347\247\260\346\210\226\347\227\207\347\212\266\357\274\210\344\270\255\351\227\264\347\224\250\347\251\272\346\240\274\351\232\224\345\274\200\357\274\211", nullptr));
        startButton->setText(QCoreApplication::translate("Widget", "\351\246\226\351\241\265", nullptr));
        callButton->setText(QCoreApplication::translate("Widget", "\347\264\247\346\200\245\345\221\274\345\217\253", nullptr));
        knowledgeButton->setText(QCoreApplication::translate("Widget", "\347\237\245\350\257\206", nullptr));
        myButton->setText(QCoreApplication::translate("Widget", "\346\210\221\347\232\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_H
