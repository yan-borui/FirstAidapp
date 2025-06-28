/********************************************************************************
** Form generated from reading UI file 'learning.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEARNING_H
#define UI_LEARNING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Learning
{
public:
    QLabel *label;
    QLineEdit *HeadName;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *Steps;
    QTextEdit *QnA;

    void setupUi(QWidget *Learning)
    {
        if (Learning->objectName().isEmpty())
            Learning->setObjectName("Learning");
        Learning->resize(806, 582);
        label = new QLabel(Learning);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 71, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\226\260\345\256\213\344\275\223")});
        font.setPointSize(12);
        label->setFont(font);
        HeadName = new QLineEdit(Learning);
        HeadName->setObjectName("HeadName");
        HeadName->setGeometry(QRect(70, 0, 121, 31));
        label_2 = new QLabel(Learning);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 50, 71, 16));
        label_2->setFont(font);
        label_3 = new QLabel(Learning);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 360, 71, 21));
        label_3->setFont(font);
        Steps = new QTextEdit(Learning);
        Steps->setObjectName("Steps");
        Steps->setGeometry(QRect(90, 50, 561, 301));
        QnA = new QTextEdit(Learning);
        QnA->setObjectName("QnA");
        QnA->setGeometry(QRect(90, 360, 561, 201));

        retranslateUi(Learning);

        QMetaObject::connectSlotsByName(Learning);
    } // setupUi

    void retranslateUi(QWidget *Learning)
    {
        Learning->setWindowTitle(QCoreApplication::translate("Learning", "Form", nullptr));
        label->setText(QCoreApplication::translate("Learning", "\346\200\245\346\225\221\347\261\273\345\236\213", nullptr));
        label_2->setText(QCoreApplication::translate("Learning", "\346\200\245\346\225\221\346\255\245\351\252\244", nullptr));
        label_3->setText(QCoreApplication::translate("Learning", "\345\270\270\350\247\201\351\227\256\351\242\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Learning: public Ui_Learning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEARNING_H
