#include "RectangleBoundary.h"
#include <sstream>

std::vector<Coordinate> RectangleBoundary::allCoordinate()
{
	std::vector<Coordinate> coordinates;

	for (int i = topLeft.getX(); i < bottomRight.getX(); i++)
	{
		for (int j = topLeft.getY(); j < bottomRight.getY(); j++)
		{
			coordinates.push_back(Coordinate(i, j));
		}
	}
	return coordinates;
}

bool RectangleBoundary::contains(const  Coordinate coordinate)
{
	return coordinate.getX() >= topLeft.getX() && coordinate.getX() <= bottomRight.getX()
		&& coordinate.getY() <= bottomRight.getY() && coordinate.getY() >= topLeft.getY();
}

std::string RectangleBoundary::toString()
{
	std::stringstream strstream;
	strstream << "topLeft(" << this->topLeft.getX() << ", " << this->topLeft.getY() << ")" << std::endl
			 << "bottomRight(" << this->bottomRight.getX() << ", " << this->bottomRight.getY() << ")";

	
	return strstream.str();
}
