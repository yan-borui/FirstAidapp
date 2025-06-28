/********************************************************************************
** Form generated from reading UI file 'FirstAid.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTAID_H
#define UI_FIRSTAID_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_3;
    QPushButton *Check;
    QPushButton *CallButton;
    QPushButton *Learning;
    QPushButton *Guide;
    QPushButton *AEDLocate;
    QPushButton *Kits;
    QPushButton *Operate;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 0, 171, 131));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267")});
        font.setPointSize(26);
        label->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(110, 140, 40, 12));
        Check = new QPushButton(centralwidget);
        Check->setObjectName("Check");
        Check->setGeometry(QRect(171, 310, 481, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\347\220\245\347\217\200")});
        font1.setPointSize(20);
        Check->setFont(font1);
        CallButton = new QPushButton(centralwidget);
        CallButton->setObjectName("CallButton");
        CallButton->setGeometry(QRect(170, 490, 481, 41));
        CallButton->setFont(font1);
        Learning = new QPushButton(centralwidget);
        Learning->setObjectName("Learning");
        Learning->setGeometry(QRect(171, 371, 481, 41));
        Learning->setFont(font1);
        Guide = new QPushButton(centralwidget);
        Guide->setObjectName("Guide");
        Guide->setGeometry(QRect(171, 127, 479, 41));
        Guide->setMinimumSize(QSize(479, 0));
        Guide->setFont(font1);
        AEDLocate = new QPushButton(centralwidget);
        AEDLocate->setObjectName("AEDLocate");
        AEDLocate->setGeometry(QRect(170, 250, 481, 41));
        AEDLocate->setFont(font1);
        Kits = new QPushButton(centralwidget);
        Kits->setObjectName("Kits");
        Kits->setGeometry(QRect(171, 432, 481, 41));
        Kits->setFont(font1);
        Operate = new QPushButton(centralwidget);
        Operate->setObjectName("Operate");
        Operate->setGeometry(QRect(171, 188, 481, 41));
        Operate->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:48pt; font-weight:700;\">\346\200\245\346\225\221</span></p></body></html>", nullptr));
        label_3->setText(QString());
        Check->setText(QCoreApplication::translate("MainWindow", "\347\227\207\347\212\266\350\207\252\346\237\245", nullptr));
        CallButton->setText(QCoreApplication::translate("MainWindow", "\347\264\247\346\200\245\345\221\274\345\217\253", nullptr));
        Learning->setText(QCoreApplication::translate("MainWindow", "\346\200\245\346\225\221\345\255\246\344\271\240", nullptr));
#if QT_CONFIG(tooltip)
        Guide->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/res/Guide.png\"/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        Guide->setText(QCoreApplication::translate("MainWindow", "\347\264\247\346\200\245\346\225\221\346\217\264\346\214\207\345\257\274", nullptr));
        AEDLocate->setText(QCoreApplication::translate("MainWindow", "\346\200\245\346\225\221\350\256\276\345\244\207\345\256\232\344\275\215", nullptr));
        Kits->setText(QCoreApplication::translate("MainWindow", "\346\200\245\346\225\221\345\214\205\346\225\264\347\220\206", nullptr));
        Operate->setText(QCoreApplication::translate("MainWindow", "\346\200\245\346\225\221\345\244\204\347\220\206\346\226\271\346\241\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTAID_H
