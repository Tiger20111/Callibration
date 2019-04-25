/********************************************************************************
** Form generated from reading UI file 'calib.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALIB_H
#define UI_CALIB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calibClass
{
public:

    void setupUi(QWidget *calibClass)
    {
        if (calibClass->objectName().isEmpty())
            calibClass->setObjectName(QString::fromUtf8("calibClass"));
        calibClass->resize(600, 400);

        retranslateUi(calibClass);

        QMetaObject::connectSlotsByName(calibClass);
    } // setupUi

    void retranslateUi(QWidget *calibClass)
    {
        calibClass->setWindowTitle(QApplication::translate("calibClass", "calib", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calibClass: public Ui_calibClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALIB_H
