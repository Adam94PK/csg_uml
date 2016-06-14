#pragma once
#include "classes.h"
#include "Shape.h"
#include "Point.h"

class Rectangle : public Shape
{
	float width;
	float height;
public:
	Rectangle(Point &center, float width, float height);
	bool in(const Point &poz) const;
};

