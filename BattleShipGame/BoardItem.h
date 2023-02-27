#pragma once
#include <string>
#include <vector>
#include "IBoundary.h"

class BoardItem
{
private:
	std::string name;
	IBoundary *boundary;

public:
	BoardItem(std::string _name, IBoundary* _boundary)
	{
		this->name = _name;
		this->boundary = _boundary;
	}
	std::string getName() const {
		return name;
	}

	bool isKilled(const std::vector<Coordinate> hitLocations);

	bool containsCoordinate(Coordinate coordinate);
};

