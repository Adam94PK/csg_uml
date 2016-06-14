// uml_lab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "classes.h"
#include "Circle.h"
#include "Rectangle.h"
#include "ComplexShape.h"
#include "Point.h"
#include <iostream>
#include <memory>

int main()
{
	Point point_c(2., 2.);
	std::shared_ptr<Shape> circle = std::make_shared<Circle>(point_c, 1.);
	Point point_r(5., 4.);
	std::shared_ptr<Shape> rectangle = std::make_shared<Rectangle>(point_r, 2., 2.);
	Point point_complex(3., 3.);
	ComplexShape complex(circle, rectangle, point_complex, sum);
	Point p_sum(2., 2.);
	Point p_sum2(4.5, 4.);
	Point p_il(4.5, 4.);
	std::cout << "in? = " << complex.in(p_sum+point_complex) << std::endl;
	std::system("PAUSE");
	return 0;
}

