#include "SysOutOutputPrinter.h"
using namespace std;

void SysOutOutputPrinter::PrintMsg(std::string message)
{
	cout << message << endl;
}

void SysOutOutputPrinter::PrintWinner(Player* player)
{
	cout << "Game Finished!!!" << endl;
}

void SysOutOutputPrinter::PrintSelfBoard(Player* player)
{
	cout << "Your board Status" << endl;
	PrintPlayerInfo(player);
	cout << "Board Boundary: " << player->getBoard()->getBoundary()->toString();
}

void SysOutOutputPrinter::PrintOpponenetBoard(Player* player)
{
}

void SysOutOutputPrinter::PrintPlayerInfo(Player* player)
{
	cout << "Player Id: " << player->getPlayerId();
}
