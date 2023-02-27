#include "LocalChanceGeneration.h"
#include "PlayerChanceTarget.h"

PlayerChanceTarget LocalChanceGeneration::getPlayerChanceTarget(std::vector<Player*> opponents)
{
	PlayerInput playerInput = this->inputProvider->takeInput();

	Player *targetPlayer = nullptr;

	for (auto player : opponents) {
		if (player->getPlayerId() == playerInput.getPlayerNum()) {
			targetPlayer = player;
		}
	}

	//if (targetPlayer == NULL) {
	//	throw std::invalid_argument("Player Id is available");
	//}

	return PlayerChanceTarget(targetPlayer, Coordinate(playerInput.getTargetX(), playerInput.getTargetY()));
}
