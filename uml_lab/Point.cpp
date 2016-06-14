#include "stdafx.h"
#include "Point.h"

Point::Point() : x(0), y(0)
{
}

Point::Point(float x, float y) : x(x), y(y)
{
}

Point::Point(const Point & p) : x(p.x), y(p.y)
{
}

Point Point::operator-(const Point & input) const
{
	return Point(x - input.x, y - input.y);
}

Point Point::operator+(const Point & input) const
{
	return Point(x + input.x, y + input.y);
}
