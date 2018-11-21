/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QLCDNumber *lcdNumberMin;
    QSlider *horizontalSliderMin;
    QLabel *label;
    QSlider *horizontalSliderMax;
    QLCDNumber *lcdNumberMax;
    QLabel *label_2;
    QSlider *horizontalSliderTiming;
    QLabel *label_3;
    QTextBrowser *textBrowser;
    QLabel *label_4;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonStop;
    QLabel *status;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonDisconnect;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(435, 298);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 10, 191, 21));
        lcdNumberMin = new QLCDNumber(centralWidget);
        lcdNumberMin->setObjectName(QStringLiteral("lcdNumberMin"));
        lcdNumberMin->setGeometry(QRect(160, 90, 41, 21));
        horizontalSliderMin = new QSlider(centralWidget);
        horizontalSliderMin->setObjectName(QStringLiteral("horizontalSliderMin"));
        horizontalSliderMin->setGeometry(QRect(10, 80, 141, 16));
        horizontalSliderMin->setOrientation(Qt::Horizontal);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 70, 41, 16));
        horizontalSliderMax = new QSlider(centralWidget);
        horizontalSliderMax->setObjectName(QStringLiteral("horizontalSliderMax"));
        horizontalSliderMax->setGeometry(QRect(10, 130, 141, 16));
        horizontalSliderMax->setOrientation(Qt::Horizontal);
        lcdNumberMax = new QLCDNumber(centralWidget);
        lcdNumberMax->setObjectName(QStringLiteral("lcdNumberMax"));
        lcdNumberMax->setGeometry(QRect(160, 140, 41, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 120, 41, 16));
        horizontalSliderTiming = new QSlider(centralWidget);
        horizontalSliderTiming->setObjectName(QStringLiteral("horizontalSliderTiming"));
        horizontalSliderTiming->setGeometry(QRect(50, 180, 141, 16));
        horizontalSliderTiming->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 180, 35, 16));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(210, 10, 201, 221));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(190, 170, 31, 31));
        pushButtonStart = new QPushButton(centralWidget);
        pushButtonStart->setObjectName(QStringLiteral("pushButtonStart"));
        pushButtonStart->setGeometry(QRect(10, 210, 91, 21));
        pushButtonStop = new QPushButton(centralWidget);
        pushButtonStop->setObjectName(QStringLiteral("pushButtonStop"));
        pushButtonStop->setGeometry(QRect(110, 210, 91, 21));
        status = new QLabel(centralWidget);
        status->setObjectName(QStringLiteral("status"));
        status->setGeometry(QRect(10, 250, 101, 16));
        pushButtonConnect = new QPushButton(centralWidget);
        pushButtonConnect->setObjectName(QStringLiteral("pushButtonConnect"));
        pushButtonConnect->setGeometry(QRect(10, 40, 91, 21));
        pushButtonDisconnect = new QPushButton(centralWidget);
        pushButtonDisconnect->setObjectName(QStringLiteral("pushButtonDisconnect"));
        pushButtonDisconnect->setGeometry(QRect(110, 40, 91, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 435, 17));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderMax, SIGNAL(valueChanged(int)), lcdNumberMax, SLOT(display(int)));
        QObject::connect(horizontalSliderMin, SIGNAL(valueChanged(int)), lcdNumberMin, SLOT(display(int)));
        QObject::connect(horizontalSliderTiming, SIGNAL(valueChanged(int)), label_4, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        lineEdit->setText(QApplication::translate("MainWindow", "127.0.0.1", nullptr));
        label->setText(QApplication::translate("MainWindow", "Min", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Max", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Timing(s)", nullptr));
        label_4->setText(QApplication::translate("MainWindow", " 1", nullptr));
        pushButtonStart->setText(QApplication::translate("MainWindow", "Start", nullptr));
        pushButtonStop->setText(QApplication::translate("MainWindow", "Stop", nullptr));
        status->setText(QString());
        pushButtonConnect->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        pushButtonDisconnect->setText(QApplication::translate("MainWindow", "Disconnect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
