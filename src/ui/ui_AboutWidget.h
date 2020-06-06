/********************************************************************************
** Form generated from reading UI file 'AboutWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTWIDGET_H
#define UI_ABOUTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QTextBrowser *aboutText;

    void setupUi(QWidget *AboutWidget)
    {
        if (AboutWidget->objectName().isEmpty())
            AboutWidget->setObjectName(QStringLiteral("AboutWidget"));
        AboutWidget->setStyleSheet(QLatin1String("#title {\n"
"	font-size: 24px;\n"
" 	font-weight: bold;\n"
"}\n"
"#slogan, #version {\n"
"	color: #898989;\n"
"}\n"
"#version {\n"
"	font-size: 11px;\n"
"}"));
        horizontalLayout = new QHBoxLayout(AboutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        aboutText = new QTextBrowser(AboutWidget);
        aboutText->setObjectName(QStringLiteral("aboutText"));
        aboutText->setMinimumSize(QSize(0, 150));
        aboutText->setOpenExternalLinks(true);

        horizontalLayout->addWidget(aboutText);


        retranslateUi(AboutWidget);

        QMetaObject::connectSlotsByName(AboutWidget);
    } // setupUi

    void retranslateUi(QWidget *AboutWidget)
    {
        AboutWidget->setWindowTitle(QApplication::translate("AboutWidget", "Form", Q_NULLPTR));
        aboutText->setHtml(QApplication::translate("AboutWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:8px;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/icons/logo.png\" width=\"48\" height=\"48\" /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:24px;\">Track-o-Bot</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:4px; margi"
                        "n-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:12px;\">The friendly Hearthstone Tracker</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:12px; font-weight:600;\">VERSION</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:8px;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://github.com/stevschmid/track-o-bot\"><span style=\" font-family:'Arial'; font-size:12px; text-decoration: underline; color:#0000ff;\">GitHub</span></a><span style=\" font-family:'Arial'; font-size:12px;\"> | </span><a href=\"https://www.reddit.com/r/trackobot"
                        "\"><span style=\" font-family:'Arial'; font-size:12px; text-decoration: underline; color:#0000ff;\">Reddit</span></a><span style=\" font-family:'Arial'; font-size:12px;\"> | </span><a href=\"https://twitter.com/trackobot\"><span style=\" font-family:'Arial'; font-size:12px; text-decoration: underline; color:#0000ff;\">Twitter</span></a></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AboutWidget: public Ui_AboutWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTWIDGET_H
