/********************************************************************************
** Form generated from reading UI file 'emergencyguide.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMERGENCYGUIDE_H
#define UI_EMERGENCYGUIDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmergencyGuide
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EmergencyGuide)
    {
        if (EmergencyGuide->objectName().isEmpty())
            EmergencyGuide->setObjectName("EmergencyGuide");
        EmergencyGuide->resize(800, 600);
        centralwidget = new QWidget(EmergencyGuide);
        centralwidget->setObjectName("centralwidget");
        EmergencyGuide->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EmergencyGuide);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        EmergencyGuide->setMenuBar(menubar);
        statusbar = new QStatusBar(EmergencyGuide);
        statusbar->setObjectName("statusbar");
        EmergencyGuide->setStatusBar(statusbar);

        retranslateUi(EmergencyGuide);

        QMetaObject::connectSlotsByName(EmergencyGuide);
    } // setupUi

    void retranslateUi(QMainWindow *EmergencyGuide)
    {
        EmergencyGuide->setWindowTitle(QCoreApplication::translate("EmergencyGuide", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmergencyGuide: public Ui_EmergencyGuide {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMERGENCYGUIDE_H
