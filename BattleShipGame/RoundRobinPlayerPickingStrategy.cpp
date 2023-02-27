#include "RoundRobinPlayerPickingStrategy.h"

int RoundRobinPlayerPickingStrategy::firstPlayer(std::vector<Player*> allPlayers)
{
	if (allPlayers.size() == 0) {
		throw std::invalid_argument("Invalid Input Exception");
	}
	return 0;
}

int RoundRobinPlayerPickingStrategy::pickNextPlayer(int currentPlayerIndex, std::vector<Player*> allPlayers)
{
	return (currentPlayerIndex + 1) % allPlayers.size();
}
