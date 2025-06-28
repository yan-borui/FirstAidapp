/********************************************************************************
** Form generated from reading UI file 'learningmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEARNINGMENU_H
#define UI_LEARNINGMENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LearingMenu
{
public:
    QAction *action0;
    QAction *action1;
    QAction *action2;
    QAction *action3;
    QAction *action4;
    QAction *action5;
    QAction *action6;
    QAction *action7;
    QAction *action8;
    QAction *action9;
    QAction *action10;
    QAction *action11;
    QAction *action12;
    QAction *action13;
    QAction *action14;
    QAction *action15;
    QAction *action16;
    QAction *action17;
    QAction *action18;
    QAction *action19;
    QAction *action20;
    QAction *action21;
    QAction *action22;
    QAction *action23;
    QAction *action24;
    QAction *action25;
    QAction *action26;
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *Steps;
    QLabel *label_3;
    QTextEdit *QnA;
    QTextEdit *HeadName;
    QMenuBar *menubar;
    QMenu *menu_C;
    QMenu *menu_L;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LearingMenu)
    {
        if (LearingMenu->objectName().isEmpty())
            LearingMenu->setObjectName("LearingMenu");
        LearingMenu->resize(800, 600);
        QFont font;
        font.setStyleStrategy(QFont::PreferDefault);
        LearingMenu->setFont(font);
        action0 = new QAction(LearingMenu);
        action0->setObjectName("action0");
        action1 = new QAction(LearingMenu);
        action1->setObjectName("action1");
        action2 = new QAction(LearingMenu);
        action2->setObjectName("action2");
        action3 = new QAction(LearingMenu);
        action3->setObjectName("action3");
        action4 = new QAction(LearingMenu);
        action4->setObjectName("action4");
        action5 = new QAction(LearingMenu);
        action5->setObjectName("action5");
        action6 = new QAction(LearingMenu);
        action6->setObjectName("action6");
        action7 = new QAction(LearingMenu);
        action7->setObjectName("action7");
        action8 = new QAction(LearingMenu);
        action8->setObjectName("action8");
        action9 = new QAction(LearingMenu);
        action9->setObjectName("action9");
        action10 = new QAction(LearingMenu);
        action10->setObjectName("action10");
        action11 = new QAction(LearingMenu);
        action11->setObjectName("action11");
        action12 = new QAction(LearingMenu);
        action12->setObjectName("action12");
        action13 = new QAction(LearingMenu);
        action13->setObjectName("action13");
        action14 = new QAction(LearingMenu);
        action14->setObjectName("action14");
        action15 = new QAction(LearingMenu);
        action15->setObjectName("action15");
        action16 = new QAction(LearingMenu);
        action16->setObjectName("action16");
        action17 = new QAction(LearingMenu);
        action17->setObjectName("action17");
        action18 = new QAction(LearingMenu);
        action18->setObjectName("action18");
        action19 = new QAction(LearingMenu);
        action19->setObjectName("action19");
        action20 = new QAction(LearingMenu);
        action20->setObjectName("action20");
        action21 = new QAction(LearingMenu);
        action21->setObjectName("action21");
        action22 = new QAction(LearingMenu);
        action22->setObjectName("action22");
        action23 = new QAction(LearingMenu);
        action23->setObjectName("action23");
        action24 = new QAction(LearingMenu);
        action24->setObjectName("action24");
        action25 = new QAction(LearingMenu);
        action25->setObjectName("action25");
        action26 = new QAction(LearingMenu);
        action26->setObjectName("action26");
        centralwidget = new QWidget(LearingMenu);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 71, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\346\226\260\345\256\213\344\275\223")});
        font1.setPointSize(12);
        font1.setStyleStrategy(QFont::PreferDefault);
        label->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 60, 71, 21));
        label_2->setFont(font1);
        Steps = new QTextEdit(centralwidget);
        Steps->setObjectName("Steps");
        Steps->setGeometry(QRect(80, 60, 711, 311));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 380, 71, 21));
        label_3->setFont(font1);
        QnA = new QTextEdit(centralwidget);
        QnA->setObjectName("QnA");
        QnA->setGeometry(QRect(80, 380, 711, 171));
        HeadName = new QTextEdit(centralwidget);
        HeadName->setObjectName("HeadName");
        HeadName->setGeometry(QRect(80, 10, 711, 41));
        LearingMenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LearingMenu);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu_C = new QMenu(menubar);
        menu_C->setObjectName("menu_C");
        menu_L = new QMenu(menubar);
        menu_L->setObjectName("menu_L");
        LearingMenu->setMenuBar(menubar);
        statusbar = new QStatusBar(LearingMenu);
        statusbar->setObjectName("statusbar");
        LearingMenu->setStatusBar(statusbar);

        menubar->addAction(menu_C->menuAction());
        menubar->addAction(menu_L->menuAction());
        menu_C->addAction(action0);
        menu_C->addAction(action1);
        menu_C->addAction(action2);
        menu_C->addAction(action3);
        menu_C->addAction(action4);
        menu_C->addAction(action5);
        menu_C->addAction(action6);
        menu_C->addAction(action7);
        menu_C->addAction(action8);
        menu_C->addAction(action9);
        menu_C->addAction(action10);
        menu_C->addAction(action11);
        menu_C->addAction(action12);
        menu_C->addAction(action13);
        menu_C->addAction(action14);
        menu_C->addAction(action15);
        menu_C->addAction(action16);
        menu_C->addAction(action17);
        menu_C->addAction(action18);
        menu_C->addAction(action19);
        menu_C->addAction(action20);
        menu_C->addAction(action21);
        menu_C->addAction(action22);
        menu_C->addAction(action23);
        menu_C->addAction(action24);
        menu_C->addAction(action25);
        menu_C->addAction(action26);

        retranslateUi(LearingMenu);

        QMetaObject::connectSlotsByName(LearingMenu);
    } // setupUi

    void retranslateUi(QMainWindow *LearingMenu)
    {
        LearingMenu->setWindowTitle(QCoreApplication::translate("LearingMenu", "MainWindow", nullptr));
        action0->setText(QCoreApplication::translate("LearingMenu", "\346\202\262\347\227\233(&0)", nullptr));
        action1->setText(QCoreApplication::translate("LearingMenu", "\345\207\272\350\241\200(&1)", nullptr));
        action2->setText(QCoreApplication::translate("LearingMenu", "\350\247\246\347\224\265(&2)", nullptr));
        action3->setText(QCoreApplication::translate("LearingMenu", "\344\275\216\344\275\223\346\270\251\347\227\207(&3)", nullptr));
        action4->setText(QCoreApplication::translate("LearingMenu", "\347\231\253\347\227\253\345\217\221\344\275\234(&4)", nullptr));
        action5->setText(QCoreApplication::translate("LearingMenu", "\347\213\227\345\222\254\344\274\244(&5)", nullptr));
        action6->setText(QCoreApplication::translate("LearingMenu", "\351\252\250\346\212\230(&6)", nullptr));
        action7->setText(QCoreApplication::translate("LearingMenu", "\350\277\207\346\225\217\345\217\215\345\272\224(&7)", nullptr));
        action8->setText(QCoreApplication::translate("LearingMenu", "\351\205\222\347\262\276\344\270\255\346\257\222(&8)", nullptr));
        action9->setText(QCoreApplication::translate("LearingMenu", "\346\213\211\344\274\244\345\222\214\346\211\255\344\274\244(&9)", nullptr));
        action10->setText(QCoreApplication::translate("LearingMenu", "\351\242\205\350\204\221\345\244\226\344\274\244(&1&0)", nullptr));
        action11->setText(QCoreApplication::translate("LearingMenu", "\350\204\221\350\206\234\347\202\216(&1&1)", nullptr));
        action12->setText(QCoreApplication::translate("LearingMenu", "\346\272\272\346\260\264(&1&2)", nullptr));
        action13->setText(QCoreApplication::translate("LearingMenu", "\346\260\224\351\201\223\346\242\227\351\230\273(&1&3)", nullptr));
        action14->setText(QCoreApplication::translate("LearingMenu", "\347\203\247\347\203\253\344\274\244(&1&4)", nullptr));
        action15->setText(QCoreApplication::translate("LearingMenu", "\347\263\226\345\260\277\347\227\205\346\200\245\347\227\207(&1&5)", nullptr));
        action16->setText(QCoreApplication::translate("LearingMenu", "\345\244\226\344\274\244\345\214\205\346\211\216(&1&6)", nullptr));
        action17->setText(QCoreApplication::translate("LearingMenu", "\346\227\240\346\204\217\350\257\206\346\227\240\350\207\252\344\270\273\345\221\274\345\220\270(&1&7)", nullptr));
        action18->setText(QCoreApplication::translate("LearingMenu", "\346\227\240\346\204\217\350\257\206\346\234\211\350\207\252\344\270\273\345\221\274\345\220\270(&1&8)", nullptr));
        action19->setText(QCoreApplication::translate("LearingMenu", "\345\260\217\345\204\277\351\253\230\347\203\255\346\212\275\346\220\220(&1&9)", nullptr));
        action20->setText(QCoreApplication::translate("LearingMenu", "\345\223\256\345\226\230\345\217\221\344\275\234(&2&0)", nullptr));
        action21->setText(QCoreApplication::translate("LearingMenu", "\345\277\203\350\204\217\347\227\205\345\217\221\344\275\234(&2&1)", nullptr));
        action22->setText(QCoreApplication::translate("LearingMenu", "\344\274\221\345\205\213(&2&2)", nullptr));
        action23->setText(QCoreApplication::translate("LearingMenu", "\350\233\260\344\274\244\345\222\214\345\222\254\344\274\244(&2&3)", nullptr));
        action24->setText(QCoreApplication::translate("LearingMenu", "\344\270\255\346\257\222(&2&4)", nullptr));
        action25->setText(QCoreApplication::translate("LearingMenu", "\344\270\255\351\243\216(&2&5)", nullptr));
        action26->setText(QCoreApplication::translate("LearingMenu", "\344\270\255\346\232\221(&2&6)", nullptr));
        label->setText(QCoreApplication::translate("LearingMenu", "\346\200\245\346\225\221\347\247\215\347\261\273", nullptr));
        label_2->setText(QCoreApplication::translate("LearingMenu", "\346\200\245\346\225\221\346\255\245\351\252\244", nullptr));
        label_3->setText(QCoreApplication::translate("LearingMenu", "\345\270\270\350\247\201\351\227\256\351\242\230", nullptr));
        menu_C->setTitle(QCoreApplication::translate("LearingMenu", "\345\210\206\347\261\273(&C)", nullptr));
        menu_L->setTitle(QCoreApplication::translate("LearingMenu", "\346\237\245\346\211\276(&L\357\274\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LearingMenu: public Ui_LearingMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEARNINGMENU_H
