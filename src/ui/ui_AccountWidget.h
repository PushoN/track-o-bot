/********************************************************************************
** Form generated from reading UI file 'AccountWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTWIDGET_H
#define UI_ACCOUNTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccountWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *account;
    QLabel *importExportDescription;
    QLabel *importExportDescription2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *exportAccountButton;
    QPushButton *importAccountButton;

    void setupUi(QWidget *AccountWidget)
    {
        if (AccountWidget->objectName().isEmpty())
            AccountWidget->setObjectName(QStringLiteral("AccountWidget"));
        AccountWidget->setEnabled(true);
        AccountWidget->resize(361, 180);
        AccountWidget->setMinimumSize(QSize(0, 180));
        AccountWidget->setAutoFillBackground(false);
        AccountWidget->setStyleSheet(QLatin1String("QLabel#importExportDescription,\n"
"QLabel#importExportDescription2 {\n"
"	font-size: 11px;\n"
"	color: #898989;\n"
"}"));
        horizontalLayout = new QHBoxLayout(AccountWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(12, -1, -1, -1);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setRowWrapPolicy(QFormLayout::DontWrapRows);
        formLayout->setVerticalSpacing(4);
        formLayout->setContentsMargins(10, 10, 10, 10);
        label = new QLabel(AccountWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        account = new QLabel(AccountWidget);
        account->setObjectName(QStringLiteral("account"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        account->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, account);

        importExportDescription = new QLabel(AccountWidget);
        importExportDescription->setObjectName(QStringLiteral("importExportDescription"));
        importExportDescription->setWordWrap(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, importExportDescription);

        importExportDescription2 = new QLabel(AccountWidget);
        importExportDescription2->setObjectName(QStringLiteral("importExportDescription2"));
        importExportDescription2->setWordWrap(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, importExportDescription2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_2->setContentsMargins(0, -1, -1, 0);
        exportAccountButton = new QPushButton(AccountWidget);
        exportAccountButton->setObjectName(QStringLiteral("exportAccountButton"));
        exportAccountButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(exportAccountButton);

        importAccountButton = new QPushButton(AccountWidget);
        importAccountButton->setObjectName(QStringLiteral("importAccountButton"));
        importAccountButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(importAccountButton);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_2);


        horizontalLayout->addLayout(formLayout);


        retranslateUi(AccountWidget);

        QMetaObject::connectSlotsByName(AccountWidget);
    } // setupUi

    void retranslateUi(QWidget *AccountWidget)
    {
        AccountWidget->setWindowTitle(QApplication::translate("AccountWidget", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("AccountWidget", "Account", Q_NULLPTR));
        account->setText(QApplication::translate("AccountWidget", "None", Q_NULLPTR));
        importExportDescription->setText(QApplication::translate("AccountWidget", "Use export to back up your account or to import it on another device. You can use the account on multiple devices simultaneously. ", Q_NULLPTR));
        importExportDescription2->setText(QApplication::translate("AccountWidget", "The file contains only your account credentials. The results are stored online!", Q_NULLPTR));
        exportAccountButton->setText(QApplication::translate("AccountWidget", "Export...", Q_NULLPTR));
        importAccountButton->setText(QApplication::translate("AccountWidget", "Import...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AccountWidget: public Ui_AccountWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTWIDGET_H
