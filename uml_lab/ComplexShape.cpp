#include "stdafx.h"
#include "ComplexShape.h"
#include "Point.h"
#include <iostream>

ComplexShape::ComplexShape(Shape *s1, Shape *s2,const Point & p, OPPERATION op) : Shape(p), shape1(s1), shape2(s2), operation(op)
{
}

bool ComplexShape::in(const Point & poz) const
{
	Point temp = poz - center_point;
	std::cout << "center_p " << center_point.x << center_point.y<<std::endl;
	std::cout << "poz " << poz.x << poz.y << std::endl;
	std::cout << "x = " << temp.x << " y = " << temp.y << std::endl;
	switch(operation)
	{
		case il:
			return (shape1->in(temp) && shape2->in(temp));
			break;
		case diff:
			return ((shape1->in(temp) && !shape2->in(temp)) || (!shape1->in(temp) && shape2->in(temp)));
			break;
		case sum:
			return (shape1->in(temp) || shape2->in(temp));
			break;
	}
}

