/********************************************************************************
** Form generated from reading UI file 'symbolrcognize.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYMBOLRCOGNIZE_H
#define UI_SYMBOLRCOGNIZE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SymbolRcognize
{
public:

    void setupUi(QWidget *SymbolRcognize)
    {
        if (SymbolRcognize->objectName().isEmpty())
            SymbolRcognize->setObjectName("SymbolRcognize");
        SymbolRcognize->resize(400, 300);

        retranslateUi(SymbolRcognize);

        QMetaObject::connectSlotsByName(SymbolRcognize);
    } // setupUi

    void retranslateUi(QWidget *SymbolRcognize)
    {
        SymbolRcognize->setWindowTitle(QCoreApplication::translate("SymbolRcognize", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SymbolRcognize: public Ui_SymbolRcognize {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYMBOLRCOGNIZE_H
