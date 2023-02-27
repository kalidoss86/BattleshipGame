#pragma once
#include "IOutputPrinter.h"
class SysOutOutputPrinter :
	public IOutputPrinter
{
	// Inherited via IOutputPrinter
	virtual void PrintMsg(std::string message) override;
	virtual void PrintWinner(Player* player) override;
	virtual void PrintSelfBoard(Player* player) override;
	virtual void PrintOpponenetBoard(Player* player) override;

private:
	void PrintPlayerInfo(Player* player);
};

