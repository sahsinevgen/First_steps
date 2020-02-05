/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settings
{
public:
    QSpinBox *box_weight;
    QSpinBox *box_height;
    QPushButton *pb;
    QCheckBox *first_player;
    QSpinBox *box_len;
    QCheckBox *with_computer;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *settings)
    {
        if (settings->objectName().isEmpty())
            settings->setObjectName(QStringLiteral("settings"));
        settings->setEnabled(true);
        settings->resize(296, 300);
        box_weight = new QSpinBox(settings);
        box_weight->setObjectName(QStringLiteral("box_weight"));
        box_weight->setGeometry(QRect(10, 10, 51, 31));
        box_weight->setValue(3);
        box_height = new QSpinBox(settings);
        box_height->setObjectName(QStringLiteral("box_height"));
        box_height->setGeometry(QRect(10, 50, 51, 31));
        box_height->setReadOnly(false);
        box_height->setValue(3);
        pb = new QPushButton(settings);
        pb->setObjectName(QStringLiteral("pb"));
        pb->setGeometry(QRect(60, 260, 161, 25));
        first_player = new QCheckBox(settings);
        first_player->setObjectName(QStringLiteral("first_player"));
        first_player->setGeometry(QRect(30, 140, 21, 31));
        first_player->setChecked(true);
        box_len = new QSpinBox(settings);
        box_len->setObjectName(QStringLiteral("box_len"));
        box_len->setGeometry(QRect(10, 90, 51, 31));
        box_len->setValue(3);
        with_computer = new QCheckBox(settings);
        with_computer->setObjectName(QStringLiteral("with_computer"));
        with_computer->setEnabled(false);
        with_computer->setGeometry(QRect(30, 200, 21, 31));
        label = new QLabel(settings);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 10, 111, 31));
        label->setWordWrap(true);
        label_2 = new QLabel(settings);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 50, 111, 31));
        label_2->setWordWrap(true);
        label_3 = new QLabel(settings);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 90, 211, 31));
        label_3->setWordWrap(true);
        label_4 = new QLabel(settings);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 130, 211, 51));
        label_4->setWordWrap(true);
        label_5 = new QLabel(settings);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 190, 211, 51));
        label_5->setWordWrap(true);

        retranslateUi(settings);

        QMetaObject::connectSlotsByName(settings);
    } // setupUi

    void retranslateUi(QWidget *settings)
    {
        settings->setWindowTitle(QApplication::translate("settings", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", Q_NULLPTR));
        pb->setText(QApplication::translate("settings", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", Q_NULLPTR));
        first_player->setText(QApplication::translate("settings", "CheckBox", Q_NULLPTR));
        with_computer->setText(QApplication::translate("settings", "CheckBox", Q_NULLPTR));
        label->setText(QApplication::translate("settings", "\320\250\320\270\321\200\320\270\320\275\320\260 \320\277\320\276\320\273\321\217", Q_NULLPTR));
        label_2->setText(QApplication::translate("settings", "\320\222\321\213\321\201\320\276\321\202\320\260 \320\277\320\276\320\273\321\217", Q_NULLPTR));
        label_3->setText(QApplication::translate("settings", "\320\224\320\273\320\270\320\275\320\260 \320\273\320\270\320\275\320\270\320\270 \320\264\320\273\321\217 \320\277\320\276\320\261\320\265\320\264\321\213", Q_NULLPTR));
        label_4->setText(QApplication::translate("settings", "\320\236\321\202\320\274\320\265\321\202\321\214\321\202\320\265, \320\265\321\201\320\273\320\270 \320\277\320\265\321\200\320\262\321\213\320\274\320\270 \321\205\320\276\320\264\321\217\321\202 \320\272\321\200\320\265\321\201\321\202\320\270\320\272\320\270", Q_NULLPTR));
        label_5->setText(QApplication::translate("settings", "\320\236\321\202\320\274\320\265\321\202\321\214\321\202\320\265, \320\265\321\201\320\273\320\270 \320\262\321\213 \321\205\320\276\321\202\320\270\321\202\320\265 \320\270\320\263\321\200\320\260\321\202\321\214 \320\277\321\200\320\276\321\202\320\270\320\262 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class settings: public Ui_settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
