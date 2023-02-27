#pragma once
#include "IWinnerStrategy.h"
class DefaultWinnerStrategy : public IWinnerStrategy
{
	// Inherited via IWinnerStrategy
	virtual Player* getWinner(std::vector<Player*> playerList) override;
};

