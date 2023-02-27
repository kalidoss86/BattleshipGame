#pragma once
#include "player.h"

class PlayerChanceTarget {
public:
	Player* player;
	Coordinate target;

	PlayerChanceTarget() {};

	PlayerChanceTarget(Player* _player, Coordinate _target)
	{
		this->player = _player;
		this->target = _target;
	};


	Player* getTargetPlayer() const {
		return player;
	}

	Coordinate getTarget() const {
		return target;
	}
};
