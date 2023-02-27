#pragma once
#include "Board.h"
#include "IChanceGenerationStrategy.h"

class PlayerChanceTarget;

class Player
{
private:
	int playerId;
	Board *board;
	IChanceGenerationStrategy *chanceGenerationStrategy;

public:
	Player(const int _playerId, Board *_board, IChanceGenerationStrategy* _chanceGenerationStrategy)
	{
		playerId = _playerId;
		board = _board;
		chanceGenerationStrategy = _chanceGenerationStrategy;
	}


	Board* getBoard() const {
		return board;
	}

	int getPlayerId() const {
		return playerId;
	}

	//PlayerChanceTarget takeChance(std::vector<Player> allPlayers);
	PlayerChanceTarget takeChance(std::vector<Player*> allPlayers);

	void takeHit(Coordinate coordinate);

	bool areAllShipsKilled();

};

