#pragma once

#include "Coordinate.h"
#include <vector>

class IBoundary {


public:
	Coordinate topLeft;
	Coordinate bottomRight;

	IBoundary() {};
	virtual ~IBoundary() {};
	virtual std::vector<Coordinate> allCoordinate() = 0;
	virtual bool contains(const Coordinate coordinate) = 0;
	virtual std::string toString() = 0;
};