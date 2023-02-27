#pragma once
#include <vector>
class Player;
class PlayerChanceTarget;

class IChanceGenerationStrategy {
public:
	virtual PlayerChanceTarget getPlayerChanceTarget(std::vector<Player*> opponents) = 0;
};