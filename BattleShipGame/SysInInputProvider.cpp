#include "SysInInputProvider.h"

using namespace std;
PlayerInput SysInInputProvider::takeInput()
{
	string line;
	cout << "Enter Target coordinateX coordinateY:" << endl;
	
	getline(cin, line);
	istringstream ss(line);
	int input;
	std::vector<int> input_num;
	while (ss >> input) {
		input_num.push_back(input);
	}
	int playerNum = input_num[0];
	int coordX = input_num[1];
	int coordY = input_num[2];

	return PlayerInput(playerNum, coordX, coordY);
}
