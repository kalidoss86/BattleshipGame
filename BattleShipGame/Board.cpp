#include "Board.h"

void Board::takeHit(const Coordinate coordinate)
{
	if (!boundary->contains(coordinate)) {
		throw std::out_of_range("Coordinate is out of Range!");
	}

	allBombLocations.push_back(coordinate);
}

bool Board::areAllShipsKilled()
{
	for (auto ship : ships) {
		if (!ship.isKilled(allBombLocations))
			return false;
	}
	return true;
}

std::vector<Coordinate> Board::hitLocations()
{
	std::vector<Coordinate> hitLocations;

	for (auto bombLocation : allBombLocations) {
		for (auto ship : ships) {
			if (ship.containsCoordinate(bombLocation)) {
				hitLocations.push_back(bombLocation);
			}
		}
	}

	return hitLocations;
}

std::vector<Coordinate> Board::missLocations()
{
	std::vector<Coordinate> missLocations;

	for (auto bombLocations : allBombLocations) {
		for (auto ship : ships) {
			if (!ship.containsCoordinate(bombLocations)) {
				missLocations.push_back(bombLocations);
			}
		}
	}
	return missLocations;
}
