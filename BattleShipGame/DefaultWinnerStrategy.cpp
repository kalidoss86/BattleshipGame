#include "DefaultWinnerStrategy.h"

Player* DefaultWinnerStrategy::getWinner(const std::vector<Player*> playerList) {
	std::vector<Player*> alivePlayers;
	for (auto player : playerList) {
		if (!player->areAllShipsKilled()) {
			alivePlayers.push_back(player);
		}
	}
	if (alivePlayers.size() == 1) {
		return alivePlayers.at(0) ;
	}
	else {
		//throw std::exception("No Winner found", 1);
		playerList.at(0);
	}
	
}