/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "renderarea.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    RenderArea *renderArea;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnAstroid;
    QPushButton *btnCycloid;
    QPushButton *btnHypo;
    QPushButton *btnHuygens;
    QPushButton *btnLine;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *spinScale;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpinBox *spinCount;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QDoubleSpinBox *spinInterval;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 537);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        renderArea = new RenderArea(centralwidget);
        renderArea->setObjectName(QString::fromUtf8("renderArea"));
        renderArea->setGeometry(QRect(71, 90, 271, 241));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(610, 91, 96, 141));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnAstroid = new QPushButton(widget);
        btnAstroid->setObjectName(QString::fromUtf8("btnAstroid"));

        verticalLayout->addWidget(btnAstroid);

        btnCycloid = new QPushButton(widget);
        btnCycloid->setObjectName(QString::fromUtf8("btnCycloid"));

        verticalLayout->addWidget(btnCycloid);

        btnHypo = new QPushButton(widget);
        btnHypo->setObjectName(QString::fromUtf8("btnHypo"));

        verticalLayout->addWidget(btnHypo);

        btnHuygens = new QPushButton(widget);
        btnHuygens->setObjectName(QString::fromUtf8("btnHuygens"));

        verticalLayout->addWidget(btnHuygens);

        btnLine = new QPushButton(widget);
        btnLine->setObjectName(QString::fromUtf8("btnLine"));

        verticalLayout->addWidget(btnLine);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(530, 260, 172, 92));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        spinScale = new QDoubleSpinBox(widget1);
        spinScale->setObjectName(QString::fromUtf8("spinScale"));
        spinScale->setDecimals(1);
        spinScale->setSingleStep(0.100000000000000);
        spinScale->setValue(0.000000000000000);

        horizontalLayout->addWidget(spinScale);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        spinCount = new QSpinBox(widget1);
        spinCount->setObjectName(QString::fromUtf8("spinCount"));
        spinCount->setMaximum(512);
        spinCount->setSingleStep(1);

        horizontalLayout_3->addWidget(spinCount);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        spinInterval = new QDoubleSpinBox(widget1);
        spinInterval->setObjectName(QString::fromUtf8("spinInterval"));
        spinInterval->setDecimals(1);
        spinInterval->setMaximum(100.000000000000000);

        horizontalLayout_2->addWidget(spinInterval);


        verticalLayout_2->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnAstroid->setText(QCoreApplication::translate("MainWindow", "Astroid", nullptr));
        btnCycloid->setText(QCoreApplication::translate("MainWindow", "Cycloid", nullptr));
        btnHypo->setText(QCoreApplication::translate("MainWindow", "Hypo Cycloid", nullptr));
        btnHuygens->setText(QCoreApplication::translate("MainWindow", "Huygens", nullptr));
        btnLine->setText(QCoreApplication::translate("MainWindow", "Line", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Scale", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Interval Length", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Step Count", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
