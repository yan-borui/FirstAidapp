/********************************************************************************
** Form generated from reading UI file 'selfcheck.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELFCHECK_H
#define UI_SELFCHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelfCheck
{
public:

    void setupUi(QWidget *SelfCheck)
    {
        if (SelfCheck->objectName().isEmpty())
            SelfCheck->setObjectName("SelfCheck");
        SelfCheck->resize(400, 300);

        retranslateUi(SelfCheck);

        QMetaObject::connectSlotsByName(SelfCheck);
    } // setupUi

    void retranslateUi(QWidget *SelfCheck)
    {
        SelfCheck->setWindowTitle(QCoreApplication::translate("SelfCheck", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelfCheck: public Ui_SelfCheck {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELFCHECK_H
