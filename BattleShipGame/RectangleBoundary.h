#pragma once
#include "IBoundary.h"

class RectangleBoundary : public IBoundary
{
private:
	Coordinate topLeft;
	Coordinate bottomRight;
public:
	RectangleBoundary(const Coordinate _topLeft, const Coordinate _bottomRight)
	{
		topLeft = _topLeft;
		bottomRight = _bottomRight;
	}
	// Inherited via IBoundary
	virtual std::vector<Coordinate> allCoordinate() override;
	virtual bool contains(const Coordinate coordinate) override;
	virtual std::string toString() override;
};

