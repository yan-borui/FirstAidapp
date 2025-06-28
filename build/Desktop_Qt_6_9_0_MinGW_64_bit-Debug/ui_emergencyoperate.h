/********************************************************************************
** Form generated from reading UI file 'emergencyoperate.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMERGENCYOPERATE_H
#define UI_EMERGENCYOPERATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmergencyOperate
{
public:

    void setupUi(QWidget *EmergencyOperate)
    {
        if (EmergencyOperate->objectName().isEmpty())
            EmergencyOperate->setObjectName("EmergencyOperate");
        EmergencyOperate->resize(400, 300);

        retranslateUi(EmergencyOperate);

        QMetaObject::connectSlotsByName(EmergencyOperate);
    } // setupUi

    void retranslateUi(QWidget *EmergencyOperate)
    {
        EmergencyOperate->setWindowTitle(QCoreApplication::translate("EmergencyOperate", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmergencyOperate: public Ui_EmergencyOperate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMERGENCYOPERATE_H
