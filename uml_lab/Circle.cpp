#include "stdafx.h"
#include "Circle.h"
#include "Point.h"
#include <cmath>

Circle::Circle(Point &p, float r) : Shape(p), radius(r)
{
}

bool Circle::in(const Point & poz) const
{
	return std::sqrt(pow((center_point.x - poz.x),2) + pow((center_point.y - poz.y),2)) <= radius;
}
