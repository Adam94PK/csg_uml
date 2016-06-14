#pragma once
#include "classes.h"
#include "Shape.h"
#include "OPPERATION.h"
#include <memory>

class ComplexShape : public Shape
{
	std::shared_ptr<Shape> shape1;
	std::shared_ptr<Shape> shape2;
	OPPERATION operation;
public:
	ComplexShape(std::shared_ptr<Shape> &s1, std::shared_ptr<Shape> &s2, const Point &p, OPPERATION op);
	bool in(const Point &p) const;
};