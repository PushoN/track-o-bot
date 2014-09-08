#pragma once

#include "HearthstoneLogWatcher.h"

class HearthstoneLogTracker : public QObject
{
  Q_OBJECT

private:
  HearthstoneLogWatcher mLogWatcher;

  CardHistoryList mCardHistoryList;

  void CardPlayed( Player player, const string& cardId );
  void CardReturned( Player player, const string& cardId );

private slots:
  void HandleLogLine( const QString& line );

signals:
  void HandleOutcome( Outcome outcome );
  void HandleOrder( GoingOrder order );

public:
  HearthstoneLogTracker();

  void Reset();

  const CardHistoryList& CardHistoryList() const { return mCardHistoryList; }
};
