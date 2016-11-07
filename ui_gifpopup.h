/********************************************************************************
** Form generated from reading UI file 'gifpopup.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GIFPOPUP_H
#define UI_GIFPOPUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_gifPopup
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *gifFileNameBox;
    QLabel *label;

    void setupUi(QDialog *gifPopup)
    {
        if (gifPopup->objectName().isEmpty())
            gifPopup->setObjectName(QStringLiteral("gifPopup"));
        gifPopup->resize(400, 124);
        gifPopup->setStyleSheet(QLatin1String("QDialog\n"
"{\n"
"\n"
"background-color: #222930;\n"
"\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"color: white;\n"
"}"));
        buttonBox = new QDialogButtonBox(gifPopup);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 80, 341, 32));
        buttonBox->setStyleSheet(QLatin1String("QPushButton {\n"
"color: white;\n"
"/*background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #88d, stop: 0.1 #99e, stop: 0.49 #77c, stop: 0.5 #66b, stop: 1 #77c);*/\n"
"background-color: #4EB1BA;\n"
"border-width: 1px;\n"
"border-color: #4EB1BA;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;\n"
"\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"min-width: 70px;\n"
"max-width: 70px;\n"
"min-height: 20px;\n"
"max-height: 20px;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{ \n"
"background-color: 222930; \n"
"}"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        gifFileNameBox = new QLineEdit(gifPopup);
        gifFileNameBox->setObjectName(QStringLiteral("gifFileNameBox"));
        gifFileNameBox->setGeometry(QRect(160, 40, 113, 20));
        label = new QLabel(gifPopup);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 40, 81, 16));

        retranslateUi(gifPopup);
        QObject::connect(buttonBox, SIGNAL(accepted()), gifPopup, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), gifPopup, SLOT(reject()));

        QMetaObject::connectSlotsByName(gifPopup);
    } // setupUi

    void retranslateUi(QDialog *gifPopup)
    {
        gifPopup->setWindowTitle(QApplication::translate("gifPopup", "Dialog", 0));
        label->setText(QApplication::translate("gifPopup", "Enter File Name", 0));
    } // retranslateUi

};

namespace Ui {
    class gifPopup: public Ui_gifPopup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GIFPOPUP_H
