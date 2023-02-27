#pragma once
#include <vector>
#include "player.h"
#include "IOutputPrinter.h"
#include "IWinnerStrategy.h"
#include "IPlayerPickingStrategy.h"
#include "PlayerChanceTarget.h"

class GameLoop {
private:
	std::vector<Player*> players;
	IWinnerStrategy *winnerStrategy;
	IOutputPrinter *printer;
	IPlayerPickingStrategy *nextPlayerStrategy;
public:
	GameLoop(std::vector<Player*> players, IWinnerStrategy *winnerStrategy,
		IOutputPrinter *printer, IPlayerPickingStrategy *nextPlayerStrategy) {
		this->players = players;
		this->winnerStrategy = winnerStrategy;
		this->printer = printer;
		this->nextPlayerStrategy = nextPlayerStrategy;
	}

	void start() {
		int currentPlayerIndex = nextPlayerStrategy->firstPlayer(this->players);
		printer->PrintMsg("Starting game!");
		while (true) {
			Player *currentPlayer = players[currentPlayerIndex];
			//printer->PrintMsg("\n\nPlayer: " + currentPlayer.getPlayerId() + " chance:");
			PlayerChanceTarget playerChanceTarget = currentPlayer->takeChance(this->players);

			try {
				playerChanceTarget.getTargetPlayer()->takeHit(playerChanceTarget.getTarget());
			}
			catch (std::exception e) {
				printer->PrintMsg("Hit was out of bounds.");
			}

			printer->PrintSelfBoard(currentPlayer);
			//printer->PrintOpponentBoard(players, currentPlayer);

			Player* winner = winnerStrategy->getWinner(players);
			//if (winner != nullptr) {
			//	printer->PrintWinner(winner);
			//	break;
			//}
			currentPlayerIndex = nextPlayerStrategy->pickNextPlayer(currentPlayerIndex, this->players);
		}
	}
};
