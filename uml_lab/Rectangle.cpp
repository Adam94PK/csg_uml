#include "stdafx.h"
#include "Rectangle.h"
#include "Point.h"
#include <cmath>

Rectangle::Rectangle(Point &center, float width, float height) : Shape(center), width(width), height(height)
{
}

bool Rectangle::in(const Point & poz) const
{
	return (std::abs(center_point.x - poz.x) <= (width*0.5) && std::abs(center_point.y - poz.y) <= (height*0.5));
}