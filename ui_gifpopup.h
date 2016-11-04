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
        buttonBox = new QDialogButtonBox(gifPopup);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 80, 341, 32));
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
