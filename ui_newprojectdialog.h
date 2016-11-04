/********************************************************************************
** Form generated from reading UI file 'newprojectdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPROJECTDIALOG_H
#define UI_NEWPROJECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewProjectDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *sizeComboBox;

    void setupUi(QDialog *NewProjectDialog)
    {
        if (NewProjectDialog->objectName().isEmpty())
            NewProjectDialog->setObjectName(QStringLiteral("NewProjectDialog"));
        NewProjectDialog->resize(400, 88);
        buttonBox = new QDialogButtonBox(NewProjectDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(290, 20, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        widget = new QWidget(NewProjectDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 20, 186, 22));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        sizeComboBox = new QComboBox(widget);
        sizeComboBox->setObjectName(QStringLiteral("sizeComboBox"));

        horizontalLayout->addWidget(sizeComboBox);


        retranslateUi(NewProjectDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewProjectDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewProjectDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewProjectDialog);
    } // setupUi

    void retranslateUi(QDialog *NewProjectDialog)
    {
        NewProjectDialog->setWindowTitle(QApplication::translate("NewProjectDialog", "Dialog", 0));
        label->setText(QApplication::translate("NewProjectDialog", "Pick Pixel Size of Sprite", 0));
    } // retranslateUi

};

namespace Ui {
    class NewProjectDialog: public Ui_NewProjectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPROJECTDIALOG_H
