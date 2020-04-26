#pragma once

#include <QtWidgets/QWidget>

namespace Ui { class SettingsWidget; }

class SettingsTab : public QWidget
{
  Q_OBJECT

private:
  Ui::SettingsWidget *mUI;

private slots:
  void CheckForUpdatesNow();

public:
  explicit SettingsTab( QWidget *parent = 0 );
  ~SettingsTab();

public slots:
  void UpdateAutostart();
  void UpdateAutoUpdateCheck();
  void UpdateDebug();
  void UpdateOverlayEnabled();
  void SelectHearthstoneDirectoryPath();
  void LoadSettings();
};

