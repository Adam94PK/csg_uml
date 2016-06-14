// uml_lab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "classes.h"
#include "Circle.h"
#include "Rectangle.h"
#include "ComplexShape.h"
#include "Point.h"
#include <iostream>

int main()
{
	Point point_c(2., 2.);
	Circle circle(point_c, 1.);
	Point point_r(5., 4.);
	Rectangle rectangle(point_r, 2., 2.);
	Point point_complex(3., 3.);
	ComplexShape complex(&circle, &rectangle, point_complex, sum);
	Point p_sum(2., 2.);
	Point p_sum2(4.5, 4.);
	Point p_il(4.5, 4.);
	std::cout << "in? = " << complex.in(p_sum+point_complex) << std::endl;
	std::system("PAUSE");
	return 0;
}

