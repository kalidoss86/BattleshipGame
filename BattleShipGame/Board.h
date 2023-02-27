#pragma once
#include <vector>
//#include "Coordinate.h"
#include "BoardItem.h"

class Board
{
private:
	std::vector<BoardItem> ships;
	IBoundary *boundary;
	std::vector<Coordinate> allBombLocations;

public:
	Board(std::vector<BoardItem> _ships, IBoundary *_boundary)
	{
		boundary = _boundary;
		ships = _ships;
	}

	IBoundary *getBoundary() const {
		return boundary;
	}

	void takeHit(const Coordinate coordinate);

	bool areAllShipsKilled();

	std::vector<Coordinate> hitLocations();

	std::vector<Coordinate> missLocations();


};

