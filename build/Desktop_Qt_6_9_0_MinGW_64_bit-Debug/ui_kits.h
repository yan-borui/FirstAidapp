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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Kits
{
public:
    QVBoxLayout *verticalLayout_11;
    QLabel *label;
    QWidget *widgetbook;
    QVBoxLayout *verticalLayout;
    QWidget *book;
    QHBoxLayout *horizontalLayout;
    QToolButton *tbbook;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *btbook;
    QWidget *bookbox;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *checkBox;
    QCheckBox *checkBox_8;
    QWidget *widgetbandage;
    QVBoxLayout *verticalLayout_8;
    QWidget *bandage;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *tbbandage;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btbandage;
    QWidget *bandagebox;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QWidget *widgetdisinfect;
    QVBoxLayout *verticalLayout_7;
    QWidget *disinfect;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *tbdisinfect;
    QSpacerItem *horizontalSpacer;
    QPushButton *btdisinfect;
    QWidget *disinfectbox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox_38;
    QCheckBox *checkBox_37;
    QCheckBox *checkBox_40;
    QCheckBox *checkBox_36;
    QCheckBox *checkBox_35;
    QCheckBox *checkBox_39;
    QWidget *widgetmedicine;
    QVBoxLayout *verticalLayout_9;
    QWidget *medicine;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *tbmadicine;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btmedicine;
    QWidget *medicinebox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBox_23;
    QCheckBox *checkBox_24;
    QCheckBox *checkBox_25;
    QCheckBox *checkBox_26;
    QCheckBox *checkBox_27;
    QCheckBox *checkBox_28;
    QWidget *widgettool;
    QVBoxLayout *verticalLayout_10;
    QWidget *tool;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *tbtool;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *bttool;
    QWidget *toolbox;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *checkBox_14;
    QCheckBox *checkBox_15;
    QCheckBox *checkBox_16;
    QCheckBox *checkBox_17;
    QCheckBox *checkBox_18;
    QCheckBox *checkBox_19;
    QCheckBox *checkBox_20;
    QCheckBox *checkBox_21;
    QCheckBox *checkBox_22;

    void setupUi(QWidget *Kits)
    {
        if (Kits->objectName().isEmpty())
            Kits->setObjectName("Kits");
        Kits->resize(768, 600);
        verticalLayout_11 = new QVBoxLayout(Kits);
        verticalLayout_11->setObjectName("verticalLayout_11");
        label = new QLabel(Kits);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("\344\273\277\345\256\213")});
        font.setPointSize(26);
        label->setFont(font);

        verticalLayout_11->addWidget(label);

        widgetbook = new QWidget(Kits);
        widgetbook->setObjectName("widgetbook");
        verticalLayout = new QVBoxLayout(widgetbook);
        verticalLayout->setObjectName("verticalLayout");
        book = new QWidget(widgetbook);
        book->setObjectName("book");
        horizontalLayout = new QHBoxLayout(book);
        horizontalLayout->setObjectName("horizontalLayout");
        tbbook = new QToolButton(book);
        tbbook->setObjectName("tbbook");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font1.setPointSize(12);
        tbbook->setFont(font1);

        horizontalLayout->addWidget(tbbook);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);

        btbook = new QPushButton(book);
        btbook->setObjectName("btbook");

        horizontalLayout->addWidget(btbook);


        verticalLayout->addWidget(book);

        bookbox = new QWidget(widgetbook);
        bookbox->setObjectName("bookbox");
        verticalLayout_6 = new QVBoxLayout(bookbox);
        verticalLayout_6->setObjectName("verticalLayout_6");
        checkBox = new QCheckBox(bookbox);
        checkBox->setObjectName("checkBox");

        verticalLayout_6->addWidget(checkBox);

        checkBox_8 = new QCheckBox(bookbox);
        checkBox_8->setObjectName("checkBox_8");

        verticalLayout_6->addWidget(checkBox_8);


        verticalLayout->addWidget(bookbox);


        verticalLayout_11->addWidget(widgetbook);

        widgetbandage = new QWidget(Kits);
        widgetbandage->setObjectName("widgetbandage");
        verticalLayout_8 = new QVBoxLayout(widgetbandage);
        verticalLayout_8->setObjectName("verticalLayout_8");
        bandage = new QWidget(widgetbandage);
        bandage->setObjectName("bandage");
        horizontalLayout_3 = new QHBoxLayout(bandage);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        tbbandage = new QToolButton(bandage);
        tbbandage->setObjectName("tbbandage");
        tbbandage->setFont(font1);

        horizontalLayout_3->addWidget(tbbandage);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        btbandage = new QPushButton(bandage);
        btbandage->setObjectName("btbandage");

        horizontalLayout_3->addWidget(btbandage);


        verticalLayout_8->addWidget(bandage);

        bandagebox = new QWidget(widgetbandage);
        bandagebox->setObjectName("bandagebox");
        verticalLayout_4 = new QVBoxLayout(bandagebox);
        verticalLayout_4->setObjectName("verticalLayout_4");
        checkBox_2 = new QCheckBox(bandagebox);
        checkBox_2->setObjectName("checkBox_2");

        verticalLayout_4->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(bandagebox);
        checkBox_3->setObjectName("checkBox_3");

        verticalLayout_4->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(bandagebox);
        checkBox_4->setObjectName("checkBox_4");

        verticalLayout_4->addWidget(checkBox_4);

        checkBox_5 = new QCheckBox(bandagebox);
        checkBox_5->setObjectName("checkBox_5");

        verticalLayout_4->addWidget(checkBox_5);

        checkBox_6 = new QCheckBox(bandagebox);
        checkBox_6->setObjectName("checkBox_6");

        verticalLayout_4->addWidget(checkBox_6);

        checkBox_7 = new QCheckBox(bandagebox);
        checkBox_7->setObjectName("checkBox_7");

        verticalLayout_4->addWidget(checkBox_7);


        verticalLayout_8->addWidget(bandagebox);


        verticalLayout_11->addWidget(widgetbandage);

        widgetdisinfect = new QWidget(Kits);
        widgetdisinfect->setObjectName("widgetdisinfect");
        verticalLayout_7 = new QVBoxLayout(widgetdisinfect);
        verticalLayout_7->setObjectName("verticalLayout_7");
        disinfect = new QWidget(widgetdisinfect);
        disinfect->setObjectName("disinfect");
        horizontalLayout_2 = new QHBoxLayout(disinfect);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        tbdisinfect = new QToolButton(disinfect);
        tbdisinfect->setObjectName("tbdisinfect");
        tbdisinfect->setFont(font1);

        horizontalLayout_2->addWidget(tbdisinfect);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btdisinfect = new QPushButton(disinfect);
        btdisinfect->setObjectName("btdisinfect");

        horizontalLayout_2->addWidget(btdisinfect);


        verticalLayout_7->addWidget(disinfect);

        disinfectbox = new QWidget(widgetdisinfect);
        disinfectbox->setObjectName("disinfectbox");
        verticalLayout_2 = new QVBoxLayout(disinfectbox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        checkBox_38 = new QCheckBox(disinfectbox);
        checkBox_38->setObjectName("checkBox_38");

        verticalLayout_2->addWidget(checkBox_38);

        checkBox_37 = new QCheckBox(disinfectbox);
        checkBox_37->setObjectName("checkBox_37");

        verticalLayout_2->addWidget(checkBox_37);

        checkBox_40 = new QCheckBox(disinfectbox);
        checkBox_40->setObjectName("checkBox_40");

        verticalLayout_2->addWidget(checkBox_40);

        checkBox_36 = new QCheckBox(disinfectbox);
        checkBox_36->setObjectName("checkBox_36");

        verticalLayout_2->addWidget(checkBox_36);

        checkBox_35 = new QCheckBox(disinfectbox);
        checkBox_35->setObjectName("checkBox_35");

        verticalLayout_2->addWidget(checkBox_35);

        checkBox_39 = new QCheckBox(disinfectbox);
        checkBox_39->setObjectName("checkBox_39");

        verticalLayout_2->addWidget(checkBox_39);


        verticalLayout_7->addWidget(disinfectbox);


        verticalLayout_11->addWidget(widgetdisinfect);

        widgetmedicine = new QWidget(Kits);
        widgetmedicine->setObjectName("widgetmedicine");
        verticalLayout_9 = new QVBoxLayout(widgetmedicine);
        verticalLayout_9->setObjectName("verticalLayout_9");
        medicine = new QWidget(widgetmedicine);
        medicine->setObjectName("medicine");
        horizontalLayout_4 = new QHBoxLayout(medicine);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        tbmadicine = new QToolButton(medicine);
        tbmadicine->setObjectName("tbmadicine");
        tbmadicine->setFont(font1);

        horizontalLayout_4->addWidget(tbmadicine);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        btmedicine = new QPushButton(medicine);
        btmedicine->setObjectName("btmedicine");

        horizontalLayout_4->addWidget(btmedicine);


        verticalLayout_9->addWidget(medicine);

        medicinebox = new QWidget(widgetmedicine);
        medicinebox->setObjectName("medicinebox");
        verticalLayout_3 = new QVBoxLayout(medicinebox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        checkBox_23 = new QCheckBox(medicinebox);
        checkBox_23->setObjectName("checkBox_23");

        verticalLayout_3->addWidget(checkBox_23);

        checkBox_24 = new QCheckBox(medicinebox);
        checkBox_24->setObjectName("checkBox_24");

        verticalLayout_3->addWidget(checkBox_24);

        checkBox_25 = new QCheckBox(medicinebox);
        checkBox_25->setObjectName("checkBox_25");

        verticalLayout_3->addWidget(checkBox_25);

        checkBox_26 = new QCheckBox(medicinebox);
        checkBox_26->setObjectName("checkBox_26");

        verticalLayout_3->addWidget(checkBox_26);

        checkBox_27 = new QCheckBox(medicinebox);
        checkBox_27->setObjectName("checkBox_27");

        verticalLayout_3->addWidget(checkBox_27);

        checkBox_28 = new QCheckBox(medicinebox);
        checkBox_28->setObjectName("checkBox_28");

        verticalLayout_3->addWidget(checkBox_28);


        verticalLayout_9->addWidget(medicinebox);


        verticalLayout_11->addWidget(widgetmedicine);

        widgettool = new QWidget(Kits);
        widgettool->setObjectName("widgettool");
        verticalLayout_10 = new QVBoxLayout(widgettool);
        verticalLayout_10->setObjectName("verticalLayout_10");
        tool = new QWidget(widgettool);
        tool->setObjectName("tool");
        horizontalLayout_5 = new QHBoxLayout(tool);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        tbtool = new QToolButton(tool);
        tbtool->setObjectName("tbtool");
        tbtool->setFont(font1);

        horizontalLayout_5->addWidget(tbtool);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        bttool = new QPushButton(tool);
        bttool->setObjectName("bttool");

        horizontalLayout_5->addWidget(bttool);


        verticalLayout_10->addWidget(tool);

        toolbox = new QWidget(widgettool);
        toolbox->setObjectName("toolbox");
        verticalLayout_5 = new QVBoxLayout(toolbox);
        verticalLayout_5->setObjectName("verticalLayout_5");
        checkBox_14 = new QCheckBox(toolbox);
        checkBox_14->setObjectName("checkBox_14");

        verticalLayout_5->addWidget(checkBox_14);

        checkBox_15 = new QCheckBox(toolbox);
        checkBox_15->setObjectName("checkBox_15");

        verticalLayout_5->addWidget(checkBox_15);

        checkBox_16 = new QCheckBox(toolbox);
        checkBox_16->setObjectName("checkBox_16");

        verticalLayout_5->addWidget(checkBox_16);

        checkBox_17 = new QCheckBox(toolbox);
        checkBox_17->setObjectName("checkBox_17");

        verticalLayout_5->addWidget(checkBox_17);

        checkBox_18 = new QCheckBox(toolbox);
        checkBox_18->setObjectName("checkBox_18");

        verticalLayout_5->addWidget(checkBox_18);

        checkBox_19 = new QCheckBox(toolbox);
        checkBox_19->setObjectName("checkBox_19");

        verticalLayout_5->addWidget(checkBox_19);

        checkBox_20 = new QCheckBox(toolbox);
        checkBox_20->setObjectName("checkBox_20");

        verticalLayout_5->addWidget(checkBox_20);

        checkBox_21 = new QCheckBox(toolbox);
        checkBox_21->setObjectName("checkBox_21");

        verticalLayout_5->addWidget(checkBox_21);

        checkBox_22 = new QCheckBox(toolbox);
        checkBox_22->setObjectName("checkBox_22");

        verticalLayout_5->addWidget(checkBox_22);


        verticalLayout_10->addWidget(toolbox);


        verticalLayout_11->addWidget(widgettool);


        retranslateUi(Kits);

        QMetaObject::connectSlotsByName(Kits);
    } // setupUi

    void retranslateUi(QWidget *Kits)
    {
        Kits->setWindowTitle(QCoreApplication::translate("Kits", "Form", nullptr));
        label->setText(QCoreApplication::translate("Kits", "<html><head/><body><p align=\"center\">\346\200\245\346\225\221\345\214\205\346\225\264\347\220\206</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        tbbook->setToolTip(QCoreApplication::translate("Kits", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        tbbook->setText(QCoreApplication::translate("Kits", "\346\226\207\344\271\246\347\261\273", nullptr));
        btbook->setText(QString());
        checkBox->setText(QCoreApplication::translate("Kits", "\346\200\245\346\225\221\346\211\213\345\206\214", nullptr));
        checkBox_8->setText(QCoreApplication::translate("Kits", "\346\225\221\346\212\244\345\221\230\350\257\201\357\274\210\345\246\202\346\236\234\346\234\211\357\274\211", nullptr));
#if QT_CONFIG(tooltip)
        tbbandage->setToolTip(QCoreApplication::translate("Kits", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        tbbandage->setText(QCoreApplication::translate("Kits", "\345\214\205\346\211\216\347\261\273", nullptr));
        btbandage->setText(QString());
        checkBox_2->setText(QCoreApplication::translate("Kits", "\347\272\261\345\270\203\345\235\227  |  \344\270\207\344\270\200\346\234\211\350\276\203\345\244\247\347\232\204\345\210\233\351\235\242\346\210\226\350\200\205\346\265\201\350\241\200\345\217\257\344\273\245\347\224\250", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Kits", "\345\210\233\345\217\243\350\264\264  |  \345\244\247\345\260\217\351\203\275\350\246\201\357\274\214\350\276\203\350\275\273\347\232\204\344\274\244\345\217\243\346\257\224\345\246\202\347\243\250\350\204\232\343\200\201\346\223\246\344\274\244\345\217\257\344\273\245\351\232\224\347\273\235\344\270\200\344\270\213", nullptr));
        checkBox_4->setText(QCoreApplication::translate("Kits", "\345\274\271\346\200\247\347\273\267\345\270\246  |  \351\200\202\345\220\210\346\264\273\345\212\250\351\203\250\344\275\215\357\274\214\344\270\215\344\273\205\345\214\205\346\211\216\350\203\275\347\224\250\357\274\214\350\277\230\345\217\257\344\273\245\344\275\234\344\270\272\346\212\244\350\206\235\347\274\240\347\273\225\344\275\277\347\224\250", nullptr));
        checkBox_5->setText(QCoreApplication::translate("Kits", "\344\270\211\350\247\222\347\273\267\345\270\246", nullptr));
        checkBox_6->setText(QCoreApplication::translate("Kits", "\350\203\266\345\270\246  |  \344\270\207\344\270\200\346\234\211\350\276\203\345\244\247\347\232\204\345\210\233\351\235\242\346\210\226\350\200\205\346\265\201\350\241\200\345\217\257\344\273\245\347\224\250", nullptr));
        checkBox_7->setText(QCoreApplication::translate("Kits", "\346\255\242\350\241\200\345\270\246  |  \346\234\200\345\245\275\346\217\220\345\211\215\345\255\246\344\274\232\346\255\243\347\241\256\344\275\277\347\224\250\346\226\271\345\274\217", nullptr));
#if QT_CONFIG(tooltip)
        tbdisinfect->setToolTip(QCoreApplication::translate("Kits", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        tbdisinfect->setText(QCoreApplication::translate("Kits", "\346\266\210\346\257\222\347\261\273", nullptr));
        btdisinfect->setText(QString());
        checkBox_38->setText(QCoreApplication::translate("Kits", "\351\205\222\347\262\276\346\243\211\347\211\207", nullptr));
        checkBox_37->setText(QCoreApplication::translate("Kits", "\347\242\230\344\274\217\346\243\211\347\255\276", nullptr));
        checkBox_40->setText(QCoreApplication::translate("Kits", "\345\215\225\346\224\257\350\243\205\347\224\237\347\220\206\347\233\220\346\260\264", nullptr));
        checkBox_36->setText(QCoreApplication::translate("Kits", "\346\243\211\347\255\276", nullptr));
        checkBox_35->setText(QCoreApplication::translate("Kits", "\346\255\242\350\241\200\347\262\211", nullptr));
        checkBox_39->setText(QCoreApplication::translate("Kits", "\346\260\264\350\203\266\344\275\223\346\225\267\346\226\231  |  \345\244\232\347\224\250\344\272\216\347\203\247\347\203\253\344\274\244", nullptr));
#if QT_CONFIG(tooltip)
        tbmadicine->setToolTip(QCoreApplication::translate("Kits", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        tbmadicine->setText(QCoreApplication::translate("Kits", "\345\214\273\350\215\257\347\261\273", nullptr));
        btmedicine->setText(QString());
        checkBox_23->setText(QCoreApplication::translate("Kits", "\350\216\253\345\214\271\347\275\227\346\230\237\350\275\257\350\206\217\357\274\210\345\244\226\347\224\250\357\274\211", nullptr));
        checkBox_24->setText(QCoreApplication::translate("Kits", "\347\243\272\350\203\272\345\230\247\345\225\266\351\223\266\344\271\263\350\206\217\357\274\210\345\244\226\347\224\250\357\274\211|  \347\224\250\344\272\216\347\203\247\347\203\253\344\274\244", nullptr));
        checkBox_25->setText(QCoreApplication::translate("Kits", "\346\260\237\346\257\224\346\264\233\350\212\254\345\207\235\350\203\266\357\274\210\345\244\226\347\224\250\357\274\211", nullptr));
        checkBox_26->setText(QCoreApplication::translate("Kits", "\345\270\203\346\264\233\350\212\254\347\274\223\351\207\212\350\203\266\345\233\212\357\274\210\345\217\243\346\234\215\357\274\211", nullptr));
        checkBox_27->setText(QCoreApplication::translate("Kits", "\346\260\257\351\233\267\344\273\226\345\256\232\347\211\207\357\274\210\345\217\243\346\234\215\357\274\211", nullptr));
        checkBox_28->setText(QCoreApplication::translate("Kits", "\345\217\243\346\234\215\350\241\245\347\233\220\346\266\262", nullptr));
#if QT_CONFIG(tooltip)
        tbtool->setToolTip(QCoreApplication::translate("Kits", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        tbtool->setText(QCoreApplication::translate("Kits", "\345\267\245\345\205\267\347\261\273", nullptr));
        bttool->setText(QString());
        checkBox_14->setText(QCoreApplication::translate("Kits", "\351\222\235\345\244\264\345\211\252\345\210\200", nullptr));
        checkBox_15->setText(QCoreApplication::translate("Kits", "\344\270\200\346\254\241\346\200\247CPR\351\235\242\347\275\251\357\274\210\345\220\253\345\215\225\345\220\221\351\230\200\357\274\211", nullptr));
        checkBox_16->setText(QCoreApplication::translate("Kits", "\346\225\260\345\255\227\344\275\223\346\270\251\350\256\241\357\274\210\351\230\262\346\260\264\345\236\213\357\274\211", nullptr));
        checkBox_17->setText(QCoreApplication::translate("Kits", "\345\244\232\345\212\237\350\203\275\346\200\245\346\225\221\346\257\257", nullptr));
        checkBox_18->setText(QCoreApplication::translate("Kits", "\346\257\222\346\266\262\345\220\270\345\217\226\345\231\250", nullptr));
        checkBox_19->setText(QCoreApplication::translate("Kits", "\345\217\243\345\223\250  |  \345\217\257\347\224\250\346\235\245\345\221\274\346\225\221", nullptr));
        checkBox_20->setText(QCoreApplication::translate("Kits", "\345\210\253\351\222\210  |  \346\220\255\351\205\215\347\272\261\345\270\203\345\233\272\345\256\232\357\274\214\344\271\237\345\217\257\347\224\250\344\272\216\346\214\221\345\210\272", nullptr));
        checkBox_21->setText(QCoreApplication::translate("Kits", "\351\225\212\345\255\220  |  \345\244\271\345\207\272\347\232\256\350\202\244\351\207\214\347\232\204\350\234\202\351\222\210\343\200\201\345\210\272\347\255\211", nullptr));
        checkBox_22->setText(QCoreApplication::translate("Kits", "SAM\345\244\271\346\235\277", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Kits: public Ui_Kits {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KITS_H
