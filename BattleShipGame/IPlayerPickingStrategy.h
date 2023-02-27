#pragma once
#include <vector>
#include "player.h"

class IPlayerPickingStrategy {
public:
	virtual int firstPlayer(std::vector<Player*> allPlayers) = 0;
	virtual int pickNextPlayer(int currentPlayerIndex, std::vector<Player*> allPlayers) = 0;
};