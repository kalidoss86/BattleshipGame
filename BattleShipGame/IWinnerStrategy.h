#pragma once
#include <vector>
#include "player.h"
class IWinnerStrategy {
public:
	virtual Player* getWinner(std::vector<Player*> playerList) = 0;
};