#pragma once
class Coordinate
{
private:
	int x;
	int y;

public:
	Coordinate()
	{

	}
	Coordinate(const int _x, const int _y)
	{
		x = _x;
		y = _y;
	}

	int getX() const {
		return x;
	}

	int getY() const {
		return y;
	}
};

