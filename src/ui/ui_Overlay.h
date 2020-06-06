/********************************************************************************
** Form generated from reading UI file 'Overlay.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERLAY_H
#define UI_OVERLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Overlay
{
public:
    QWidget *centralwidget;

    void setupUi(QMainWindow *Overlay)
    {
        if (Overlay->objectName().isEmpty())
            Overlay->setObjectName(QStringLiteral("Overlay"));
        Overlay->resize(451, 253);
        centralwidget = new QWidget(Overlay);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Overlay->setCentralWidget(centralwidget);

        retranslateUi(Overlay);

        QMetaObject::connectSlotsByName(Overlay);
    } // setupUi

    void retranslateUi(QMainWindow *Overlay)
    {
        Overlay->setWindowTitle(QApplication::translate("Overlay", "Overlay", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Overlay: public Ui_Overlay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERLAY_H
