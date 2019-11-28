/********************************************************************************
** Form generated from reading UI file 'MessageWindowanVPBz.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MESSAGEWINDOWANVPBZ_H
#define MESSAGEWINDOWANVPBZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MessageWindow
{
public:
    QLabel *label;

    void setupUi(QWidget *MessageWindow)
    {
        if (MessageWindow->objectName().isEmpty())
            MessageWindow->setObjectName(QString::fromUtf8("MessageWindow"));
        MessageWindow->resize(400, 300);
        label = new QLabel(MessageWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 90, 231, 101));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(MessageWindow);

        QMetaObject::connectSlotsByName(MessageWindow);
    } // setupUi

    void retranslateUi(QWidget *MessageWindow)
    {
        MessageWindow->setWindowTitle(QApplication::translate("MessageWindow", "MessageWindow", nullptr));
        label->setText(QApplication::translate("MessageWindow", "Hello!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MessageWindow: public Ui_MessageWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MESSAGEWINDOWANVPBZ_H
