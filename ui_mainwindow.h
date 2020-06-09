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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
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
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    RenderArea *renderArea;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnBackground;
    QPushButton *btnLineColor;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *btnAstroid;
    QPushButton *btnCycloid;
    QPushButton *btnHypo;
    QPushButton *btnHuygens;
    QPushButton *btnLine;
    QPushButton *btnCircle;
    QPushButton *btnEllipse;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QDoubleSpinBox *spinScale;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *spinCount;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QDoubleSpinBox *spinInterval;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(640, 491);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 579, 435));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        renderArea = new RenderArea(layoutWidget);
        renderArea->setObjectName(QString::fromUtf8("renderArea"));
        renderArea->setMinimumSize(QSize(400, 400));

        verticalLayout_2->addWidget(renderArea);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        btnBackground = new QPushButton(layoutWidget);
        btnBackground->setObjectName(QString::fromUtf8("btnBackground"));

        horizontalLayout_4->addWidget(btnBackground);

        btnLineColor = new QPushButton(layoutWidget);
        btnLineColor->setObjectName(QString::fromUtf8("btnLineColor"));

        horizontalLayout_4->addWidget(btnLineColor);

        horizontalSpacer = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnAstroid = new QPushButton(layoutWidget);
        btnAstroid->setObjectName(QString::fromUtf8("btnAstroid"));

        verticalLayout->addWidget(btnAstroid);

        btnCycloid = new QPushButton(layoutWidget);
        btnCycloid->setObjectName(QString::fromUtf8("btnCycloid"));

        verticalLayout->addWidget(btnCycloid);

        btnHypo = new QPushButton(layoutWidget);
        btnHypo->setObjectName(QString::fromUtf8("btnHypo"));

        verticalLayout->addWidget(btnHypo);

        btnHuygens = new QPushButton(layoutWidget);
        btnHuygens->setObjectName(QString::fromUtf8("btnHuygens"));

        verticalLayout->addWidget(btnHuygens);

        btnLine = new QPushButton(layoutWidget);
        btnLine->setObjectName(QString::fromUtf8("btnLine"));

        verticalLayout->addWidget(btnLine);

        btnCircle = new QPushButton(layoutWidget);
        btnCircle->setObjectName(QString::fromUtf8("btnCircle"));

        verticalLayout->addWidget(btnCircle);

        btnEllipse = new QPushButton(layoutWidget);
        btnEllipse->setObjectName(QString::fromUtf8("btnEllipse"));

        verticalLayout->addWidget(btnEllipse);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label);

        spinScale = new QDoubleSpinBox(layoutWidget);
        spinScale->setObjectName(QString::fromUtf8("spinScale"));
        spinScale->setMaximumSize(QSize(60, 16777215));
        spinScale->setDecimals(1);
        spinScale->setMaximum(150.000000000000000);
        spinScale->setSingleStep(0.100000000000000);
        spinScale->setValue(0.000000000000000);

        horizontalLayout_3->addWidget(spinScale);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        spinCount = new QSpinBox(layoutWidget);
        spinCount->setObjectName(QString::fromUtf8("spinCount"));
        spinCount->setMinimumSize(QSize(60, 0));
        spinCount->setMaximumSize(QSize(60, 16777215));
        spinCount->setMaximum(512);
        spinCount->setSingleStep(1);

        horizontalLayout_2->addWidget(spinCount);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_3);

        spinInterval = new QDoubleSpinBox(layoutWidget);
        spinInterval->setObjectName(QString::fromUtf8("spinInterval"));
        spinInterval->setMaximumSize(QSize(60, 16777215));
        spinInterval->setDecimals(1);
        spinInterval->setMaximum(100.000000000000000);

        horizontalLayout->addWidget(spinInterval);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 20));
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
        btnBackground->setText(QCoreApplication::translate("MainWindow", "Backround", nullptr));
        btnLineColor->setText(QCoreApplication::translate("MainWindow", "Line Color", nullptr));
        btnAstroid->setText(QCoreApplication::translate("MainWindow", "Astroid", nullptr));
        btnCycloid->setText(QCoreApplication::translate("MainWindow", "Cycloid", nullptr));
        btnHypo->setText(QCoreApplication::translate("MainWindow", "Hypo Cycloid", nullptr));
        btnHuygens->setText(QCoreApplication::translate("MainWindow", "Huygens", nullptr));
        btnLine->setText(QCoreApplication::translate("MainWindow", "Line", nullptr));
        btnCircle->setText(QCoreApplication::translate("MainWindow", "Circle", nullptr));
        btnEllipse->setText(QCoreApplication::translate("MainWindow", "Ellipse", nullptr));
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
