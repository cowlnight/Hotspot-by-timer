/********************************************************************************
** Form generated from reading UI file 'HotspotytlMCs.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef HOTSPOTYTLMCS_H
#define HOTSPOTYTLMCS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HotspotClass
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_height;
    QLineEdit *lineEdit_width;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *lineEdit_x;
    QLabel *label_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit_y;
    QPushButton *pushButton_stop;

    void setupUi(QMainWindow *HotspotClass)
    {
        if (HotspotClass->objectName().isEmpty())
            HotspotClass->setObjectName(QString::fromUtf8("HotspotClass"));
        HotspotClass->resize(306, 228);
        centralWidget = new QWidget(HotspotClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 40, 241, 176));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_height = new QLineEdit(gridLayoutWidget);
        lineEdit_height->setObjectName(QString::fromUtf8("lineEdit_height"));

        gridLayout->addWidget(lineEdit_height, 4, 1, 1, 1);

        lineEdit_width = new QLineEdit(gridLayoutWidget);
        lineEdit_width->setObjectName(QString::fromUtf8("lineEdit_width"));

        gridLayout->addWidget(lineEdit_width, 5, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_x = new QLineEdit(gridLayoutWidget);
        lineEdit_x->setObjectName(QString::fromUtf8("lineEdit_x"));

        gridLayout->addWidget(lineEdit_x, 1, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 6, 2, 1, 1);

        lineEdit_y = new QLineEdit(gridLayoutWidget);
        lineEdit_y->setObjectName(QString::fromUtf8("lineEdit_y"));

        gridLayout->addWidget(lineEdit_y, 3, 1, 1, 1);

        pushButton_stop = new QPushButton(gridLayoutWidget);
        pushButton_stop->setObjectName(QString::fromUtf8("pushButton_stop"));

        gridLayout->addWidget(pushButton_stop, 7, 2, 1, 1);

        HotspotClass->setCentralWidget(centralWidget);

        retranslateUi(HotspotClass);

        QMetaObject::connectSlotsByName(HotspotClass);
    } // setupUi

    void retranslateUi(QMainWindow *HotspotClass)
    {
        HotspotClass->setWindowTitle(QApplication::translate("HotspotClass", "Hotspot", nullptr));
        label_5->setText(QApplication::translate("HotspotClass", "Width:", nullptr));
        label_3->setText(QApplication::translate("HotspotClass", "Y:", nullptr));
        label_4->setText(QApplication::translate("HotspotClass", "Height:", nullptr));
        label->setText(QApplication::translate("HotspotClass", "Hotspot Area\357\274\232", nullptr));
        label_2->setText(QApplication::translate("HotspotClass", "X:", nullptr));
        pushButton->setText(QApplication::translate("HotspotClass", "Confirm", nullptr));
        pushButton_stop->setText(QApplication::translate("HotspotClass", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HotspotClass: public Ui_HotspotClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // HOTSPOTYTLMCS_H
