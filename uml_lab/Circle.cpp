#include "stdafx.h"
#include "Circle.h"
#include "Point.h"
#include <cmath>

Circle::Circle(Point &p, float r) : Shape(p), radius(r)
{
}

bool Circle::in(const Point & poz) const
{
	return std::sqrt(center_point.x - poz.x)*(center_point.x - poz.x) + (center_point.y - poz.y)*(center_point.y - poz.y) <= radius;
}
