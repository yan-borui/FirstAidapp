/********************************************************************************
** Form generated from reading UI file 'mypage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYPAGE_H
#define UI_MYPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyPage
{
public:

    void setupUi(QWidget *MyPage)
    {
        if (MyPage->objectName().isEmpty())
            MyPage->setObjectName("MyPage");
        MyPage->resize(350, 500);
        MyPage->setMinimumSize(QSize(350, 500));
        MyPage->setMaximumSize(QSize(350, 500));

        retranslateUi(MyPage);

        QMetaObject::connectSlotsByName(MyPage);
    } // setupUi

    void retranslateUi(QWidget *MyPage)
    {
        MyPage->setWindowTitle(QCoreApplication::translate("MyPage", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyPage: public Ui_MyPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYPAGE_H
