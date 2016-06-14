#pragma once
#include "classes.h"
#include "Shape.h"

class Circle : public Shape
{
	float radius;
public:
	Circle(Point &p, float r);
	bool in(const Point &poz) const;
};

