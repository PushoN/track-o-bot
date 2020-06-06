/********************************************************************************
** Form generated from reading UI file 'SettingsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWIDGET_H
#define UI_SETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *hearthstoneDirectoryPath;
    QLabel *hearthstonePathDescription;
    QVBoxLayout *verticalLayout_4;
    QPushButton *selectHearthstoneDirectoryPath;
    QSpacerItem *verticalSpacer_4;
    QCheckBox *checkOverlay;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_4;
    QCheckBox *startAtLogin;
    QLabel *startDescription;
    QSpacerItem *verticalSpacer_2;
    QCheckBox *checkForUpdates;
    QLabel *updateDescription;
    QPushButton *checkForUpdatesNowButton;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QCheckBox *checkDebug;
    QLabel *debugDescription;
    QLabel *overlayDescription;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;

    void setupUi(QWidget *SettingsWidget)
    {
        if (SettingsWidget->objectName().isEmpty())
            SettingsWidget->setObjectName(QStringLiteral("SettingsWidget"));
        SettingsWidget->resize(486, 307);
        SettingsWidget->setMinimumSize(QSize(0, 290));
        SettingsWidget->setStyleSheet(QLatin1String("QLabel#startDescription,\n"
"QLabel#debugDescription,\n"
"QLabel#hearthstonePathDescription,\n"
"QLabel#overlayDescription,\n"
"QLabel#updateDescription {\n"
"	font-size: 11px;\n"
"	color: #898989;\n"
"}"));
        horizontalLayout = new QHBoxLayout(SettingsWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setVerticalSpacing(2);
        formLayout->setContentsMargins(10, 0, 10, 0);
        label = new QLabel(SettingsWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        hearthstoneDirectoryPath = new QLabel(SettingsWidget);
        hearthstoneDirectoryPath->setObjectName(QStringLiteral("hearthstoneDirectoryPath"));

        verticalLayout->addWidget(hearthstoneDirectoryPath);

        hearthstonePathDescription = new QLabel(SettingsWidget);
        hearthstonePathDescription->setObjectName(QStringLiteral("hearthstonePathDescription"));

        verticalLayout->addWidget(hearthstonePathDescription);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        selectHearthstoneDirectoryPath = new QPushButton(SettingsWidget);
        selectHearthstoneDirectoryPath->setObjectName(QStringLiteral("selectHearthstoneDirectoryPath"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(selectHearthstoneDirectoryPath->sizePolicy().hasHeightForWidth());
        selectHearthstoneDirectoryPath->setSizePolicy(sizePolicy);
        selectHearthstoneDirectoryPath->setMaximumSize(QSize(50, 16777215));

        verticalLayout_4->addWidget(selectHearthstoneDirectoryPath);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_4->addItem(verticalSpacer_4);


        horizontalLayout_2->addLayout(verticalLayout_4);

        horizontalLayout_2->setStretch(0, 5);
        horizontalLayout_2->setStretch(1, 1);

        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_2);

        checkOverlay = new QCheckBox(SettingsWidget);
        checkOverlay->setObjectName(QStringLiteral("checkOverlay"));

        formLayout->setWidget(2, QFormLayout::FieldRole, checkOverlay);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout->setItem(4, QFormLayout::FieldRole, verticalSpacer_3);

        label_4 = new QLabel(SettingsWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_4);

        startAtLogin = new QCheckBox(SettingsWidget);
        startAtLogin->setObjectName(QStringLiteral("startAtLogin"));

        formLayout->setWidget(5, QFormLayout::FieldRole, startAtLogin);

        startDescription = new QLabel(SettingsWidget);
        startDescription->setObjectName(QStringLiteral("startDescription"));

        formLayout->setWidget(6, QFormLayout::FieldRole, startDescription);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout->setItem(8, QFormLayout::FieldRole, verticalSpacer_2);

        checkForUpdates = new QCheckBox(SettingsWidget);
        checkForUpdates->setObjectName(QStringLiteral("checkForUpdates"));

        formLayout->setWidget(9, QFormLayout::FieldRole, checkForUpdates);

        updateDescription = new QLabel(SettingsWidget);
        updateDescription->setObjectName(QStringLiteral("updateDescription"));

        formLayout->setWidget(10, QFormLayout::FieldRole, updateDescription);

        checkForUpdatesNowButton = new QPushButton(SettingsWidget);
        checkForUpdatesNowButton->setObjectName(QStringLiteral("checkForUpdatesNowButton"));
        checkForUpdatesNowButton->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(checkForUpdatesNowButton->sizePolicy().hasHeightForWidth());
        checkForUpdatesNowButton->setSizePolicy(sizePolicy1);
        checkForUpdatesNowButton->setMinimumSize(QSize(180, 0));
        checkForUpdatesNowButton->setAutoDefault(false);

        formLayout->setWidget(11, QFormLayout::FieldRole, checkForUpdatesNowButton);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout->setItem(12, QFormLayout::FieldRole, verticalSpacer);

        label_2 = new QLabel(SettingsWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(13, QFormLayout::LabelRole, label_2);

        checkDebug = new QCheckBox(SettingsWidget);
        checkDebug->setObjectName(QStringLiteral("checkDebug"));

        formLayout->setWidget(13, QFormLayout::FieldRole, checkDebug);

        debugDescription = new QLabel(SettingsWidget);
        debugDescription->setObjectName(QStringLiteral("debugDescription"));
        debugDescription->setWordWrap(true);

        formLayout->setWidget(14, QFormLayout::FieldRole, debugDescription);

        overlayDescription = new QLabel(SettingsWidget);
        overlayDescription->setObjectName(QStringLiteral("overlayDescription"));
        overlayDescription->setWordWrap(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, overlayDescription);

        verticalSpacer_5 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout->setItem(1, QFormLayout::FieldRole, verticalSpacer_5);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(15, QFormLayout::FieldRole, verticalSpacer_6);


        horizontalLayout->addLayout(formLayout);


        retranslateUi(SettingsWidget);

        QMetaObject::connectSlotsByName(SettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *SettingsWidget)
    {
        SettingsWidget->setWindowTitle(QApplication::translate("SettingsWidget", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("SettingsWidget", "Game", Q_NULLPTR));
        hearthstoneDirectoryPath->setText(QApplication::translate("SettingsWidget", "Select path...", Q_NULLPTR));
        hearthstonePathDescription->setText(QApplication::translate("SettingsWidget", "This should point to the Hearthstone directory.", Q_NULLPTR));
        selectHearthstoneDirectoryPath->setText(QApplication::translate("SettingsWidget", "...", Q_NULLPTR));
        checkOverlay->setText(QApplication::translate("SettingsWidget", "Enable in-game overlay", Q_NULLPTR));
        label_4->setText(QApplication::translate("SettingsWidget", "System", Q_NULLPTR));
        startAtLogin->setText(QApplication::translate("SettingsWidget", "Start at login ", Q_NULLPTR));
        startDescription->setText(QApplication::translate("SettingsWidget", "Open Track-o-Bot when you log in.", Q_NULLPTR));
        checkForUpdates->setText(QApplication::translate("SettingsWidget", "Check for updates", Q_NULLPTR));
        updateDescription->setText(QApplication::translate("SettingsWidget", "Check for updates automatically.", Q_NULLPTR));
        checkForUpdatesNowButton->setText(QApplication::translate("SettingsWidget", "Check for updates now", Q_NULLPTR));
        label_2->setText(QApplication::translate("SettingsWidget", "Debug", Q_NULLPTR));
        checkDebug->setText(QApplication::translate("SettingsWidget", "Enable debug mode", Q_NULLPTR));
        debugDescription->setText(QApplication::translate("SettingsWidget", "Debug mode increases verbosity of output in the log tab and sends diagnostic data.", Q_NULLPTR));
        overlayDescription->setText(QApplication::translate("SettingsWidget", "Hover over your or your opponent's deck to see which cards were drawn or played.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingsWidget: public Ui_SettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWIDGET_H
