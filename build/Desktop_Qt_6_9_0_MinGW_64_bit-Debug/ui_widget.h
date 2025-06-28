/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(350, 500);
        Widget->setMinimumSize(QSize(350, 500));
        Widget->setMaximumSize(QSize(350, 500));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(30, 40, 201, 21));
        searchButton = new QPushButton(Widget);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(240, 40, 81, 21));
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 70, 221, 16));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        searchButton->setText(QCoreApplication::translate("Widget", "\346\220\234\347\264\242", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\347\226\276\347\227\205\345\220\215\347\247\260\346\210\226\347\227\207\347\212\266\357\274\210\344\270\255\351\227\264\347\224\250\347\251\272\346\240\274\351\232\224\345\274\200\357\274\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
