#pragma once

#include <QtWidgets/QWidget>
#include "../Logger.h"

namespace Ui { class LogWidget; }

class LogTab : public QWidget
{
  Q_OBJECT

private:
  Ui::LogWidget *mUI;

private slots:
  void AddLogEntry( LogEventType type, const QString& message );

public:
  explicit LogTab( QWidget *parent = 0 );
  ~LogTab();
  /* virtual QSize sizeHint() const; */

};

