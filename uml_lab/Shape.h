#pragma once
#include "classes.h"
#include "Point.h"

class Shape
{
protected:
	Point center_point;
public:
	Shape(const Point& p);
	virtual bool in(const Point & point) const = 0;
};

