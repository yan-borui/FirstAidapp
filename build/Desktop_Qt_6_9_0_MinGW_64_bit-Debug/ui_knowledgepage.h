/********************************************************************************
** Form generated from reading UI file 'knowledgepage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KNOWLEDGEPAGE_H
#define UI_KNOWLEDGEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KnowledgePage
{
public:

    void setupUi(QWidget *KnowledgePage)
    {
        if (KnowledgePage->objectName().isEmpty())
            KnowledgePage->setObjectName("KnowledgePage");
        KnowledgePage->resize(350, 500);
        KnowledgePage->setMinimumSize(QSize(350, 500));

        retranslateUi(KnowledgePage);

        QMetaObject::connectSlotsByName(KnowledgePage);
    } // setupUi

    void retranslateUi(QWidget *KnowledgePage)
    {
        KnowledgePage->setWindowTitle(QCoreApplication::translate("KnowledgePage", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KnowledgePage: public Ui_KnowledgePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KNOWLEDGEPAGE_H
