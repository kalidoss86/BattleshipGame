#include "player.h"
#include "PlayerChanceTarget.h"

PlayerChanceTarget Player::takeChance(std::vector<Player*> allPlayers)
{
	std::vector<Player*> opponents;
	for (auto player : allPlayers) {
		if (player->getPlayerId() != this->getPlayerId()) {
			opponents.push_back(player);
		}
	}
	return chanceGenerationStrategy->getPlayerChanceTarget(opponents);
}

void Player::takeHit(Coordinate coordinate)
{
	board->takeHit(coordinate);
}

bool Player::areAllShipsKilled()
{
	return board->areAllShipsKilled();
}