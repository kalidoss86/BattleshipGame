#pragma once
class PlayerInput {
	int playerNum;
	int targetX;
	int targetY;

public:
	PlayerInput(int _playerNum, int _targetX, int _targetY)
	{
		this->playerNum = _playerNum;
		this->targetX = _targetX;
		this->targetY = _targetY;
	}

	int getPlayerNum() const {
		return playerNum;
	}

	int getTargetX() const {
		return targetX;
	}

	int getTargetY() const {
		return targetY;
	}
};