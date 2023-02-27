// BattleShipGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "player.h"
#include "RectangleBoundary.h"
#include "LocalChanceGeneration.h"
#include "SysInInputProvider.h"
#include "SysOutOutputPrinter.h"
#include "GameLoop.h"
#include "DefaultWinnerStrategy.h"
#include "RoundRobinPlayerPickingStrategy.h"


static Player* getPlayer1();
static Player* getPlayer2();


int main()
{
	
	Player* player1 = getPlayer1();
	Player* player2 = getPlayer2();
	IWinnerStrategy *winnerStrategy = new DefaultWinnerStrategy();
	IPlayerPickingStrategy *playerPickingStrategy = new RoundRobinPlayerPickingStrategy();
	IOutputPrinter *sysoutPrinter = new SysOutOutputPrinter();

	std::vector<Player*> players;

	players.push_back(player1);
	players.push_back(player2);


	GameLoop gameLoop(players, winnerStrategy, sysoutPrinter, playerPickingStrategy);

	gameLoop.start();
}

static Player* getPlayer1() {
	Coordinate topLeft(0, 0);
	Coordinate bottomRight(8, 8);
	IBoundary *boardBoundary = new RectangleBoundary(topLeft, bottomRight);

	IBoundary *ship1Boundary = new RectangleBoundary(Coordinate(2, 2), Coordinate(4, 4));
	BoardItem ship1("Carrier", ship1Boundary);

	std::vector<BoardItem> ships;
	ships.push_back(ship1);

	Board *board = new Board(ships, boardBoundary);
	IInputProvider *inputProvider = new SysInInputProvider();
	IChanceGenerationStrategy *chanceGeneration = new LocalChanceGeneration(inputProvider);
	Player *player1 = new Player(1, board, chanceGeneration);

	return player1;
}


static Player* getPlayer2() {
	Coordinate topLeft(0, 0);
	Coordinate bottomRight(8, 8);
	IBoundary *boardBoundary = new RectangleBoundary(topLeft, bottomRight);

	IBoundary *ship1Boundary = new RectangleBoundary(Coordinate(2, 2), Coordinate(4, 4));
	BoardItem ship1("Carrier", ship1Boundary);

	std::vector<BoardItem> ships;
	ships.push_back(ship1);

	Board *board = new Board(ships, boardBoundary);
	IInputProvider *inputProvider = new SysInInputProvider();
	IChanceGenerationStrategy *chanceGeneration = new LocalChanceGeneration(inputProvider);

	Player *player2 = new Player(2, board, chanceGeneration);

	return player2;
}