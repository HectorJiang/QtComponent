/********************************************************************************
** Form generated from reading UI file 'hectorcomponent.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HECTORCOMPONENT_H
#define UI_HECTORCOMPONENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_HectorComponent
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *HectorComponent)
    {
        if (HectorComponent->objectName().isEmpty())
            HectorComponent->setObjectName(QString::fromUtf8("HectorComponent"));
        HectorComponent->resize(800, 600);
        pushButton = new QPushButton(HectorComponent);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 190, 80, 16));

        retranslateUi(HectorComponent);

        QMetaObject::connectSlotsByName(HectorComponent);
    } // setupUi

    void retranslateUi(QDialog *HectorComponent)
    {
        HectorComponent->setWindowTitle(QCoreApplication::translate("HectorComponent", "HectorComponent", nullptr));
        pushButton->setText(QCoreApplication::translate("HectorComponent", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HectorComponent: public Ui_HectorComponent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HECTORCOMPONENT_H
