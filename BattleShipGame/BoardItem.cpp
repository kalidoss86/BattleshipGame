#include "BoardItem.h"

bool BoardItem::isKilled(const std::vector<Coordinate> hitLocations)
{
	for (auto hitLocation : hitLocations) {
		if (!boundary->contains(hitLocation)) return false;
	}
	return true;
}

bool BoardItem::containsCoordinate(Coordinate coordinate)
{
	std::vector<Coordinate> boardItemCoordinates =  boundary->allCoordinate();

	for (auto boardItemCoordinate : boardItemCoordinates) {
		if (boardItemCoordinate.getX() == coordinate.getX() && boardItemCoordinate.getY() == coordinate.getY())
			return true;
	}

	return false;
}
