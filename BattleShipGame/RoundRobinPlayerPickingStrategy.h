#pragma once
#include "IPlayerPickingStrategy.h"
class RoundRobinPlayerPickingStrategy : public IPlayerPickingStrategy 
{
	// Inherited via IPlayerPickingStrategy
	virtual int firstPlayer(std::vector<Player*> allPlayers) override;
	virtual int pickNextPlayer(int currentPlayerIndex, std::vector<Player*> allPlayers) override;
};

