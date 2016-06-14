#pragma once
#include "classes.h"
#include "Shape.h"
#include "OPPERATION.h"

class ComplexShape : public Shape
{
	Shape * shape1;
	Shape * shape2;
	OPPERATION operation;
public:
	ComplexShape(Shape * s1, Shape * s2, const Point &p, OPPERATION op);
	bool in(const Point &p) const;
};