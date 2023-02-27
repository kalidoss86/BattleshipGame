#pragma once
#include <iostream>
#include "player.h"

class IOutputPrinter {
public:
	virtual void PrintMsg(std::string message) = 0;
	virtual void PrintWinner(Player* player) = 0;
	virtual void PrintSelfBoard(Player* player) = 0;
	virtual void PrintOpponenetBoard(Player* player)= 0;
};