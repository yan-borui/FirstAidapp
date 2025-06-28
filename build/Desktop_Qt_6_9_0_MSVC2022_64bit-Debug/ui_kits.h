/********************************************************************************
** Form generated from reading UI file 'kits.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KITS_H
#define UI_KITS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Kits
{
public:

    void setupUi(QWidget *Kits)
    {
        if (Kits->objectName().isEmpty())
            Kits->setObjectName("Kits");
        Kits->resize(400, 300);

        retranslateUi(Kits);

        QMetaObject::connectSlotsByName(Kits);
    } // setupUi

    void retranslateUi(QWidget *Kits)
    {
        Kits->setWindowTitle(QCoreApplication::translate("Kits", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Kits: public Ui_Kits {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KITS_H
