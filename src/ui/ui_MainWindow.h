/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSettings;
    QAction *actionLog;
    QAction *actionAbout;
    QAction *actionAccount;
    QWidget *mainWidget;
    QVBoxLayout *verticalLayout;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(428, 296);
        MainWindow->setMinimumSize(QSize(400, 150));
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->setUnifiedTitleAndToolBarOnMac(true);
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        actionSettings->setCheckable(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/switch.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettings->setIcon(icon);
        actionLog = new QAction(MainWindow);
        actionLog->setObjectName(QStringLiteral("actionLog"));
        actionLog->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/log@2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLog->setIcon(icon1);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/info@2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon2);
        actionAccount = new QAction(MainWindow);
        actionAccount->setObjectName(QStringLiteral("actionAccount"));
        actionAccount->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/person@2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAccount->setIcon(icon3);
        mainWidget = new QWidget(MainWindow);
        mainWidget->setObjectName(QStringLiteral("mainWidget"));
        verticalLayout = new QVBoxLayout(mainWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        MainWindow->setCentralWidget(mainWidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setMinimumSize(QSize(0, 0));
        toolBar->setMovable(false);
        toolBar->setAllowedAreas(Qt::NoToolBarArea);
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionSettings);
        toolBar->addAction(actionAccount);
        toolBar->addAction(actionLog);
        toolBar->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionSettings->setText(QApplication::translate("MainWindow", "Settings", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSettings->setToolTip(QApplication::translate("MainWindow", "Settings", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionLog->setText(QApplication::translate("MainWindow", "Log", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAbout->setToolTip(QApplication::translate("MainWindow", "About", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionAccount->setText(QApplication::translate("MainWindow", "Account", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAccount->setToolTip(QApplication::translate("MainWindow", "Account", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
