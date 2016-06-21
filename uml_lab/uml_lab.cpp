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
#include "Renderer.h"

int main()
{
	Point point_c(16., 16.);
	std::shared_ptr<Shape> circle = std::make_shared<Circle>(point_c, 8.);
	Point point_c2(30., 34.);
	std::shared_ptr<Shape> circle2 = std::make_shared<Circle>(point_c2, 6.);
	Point point_c3(20., 24.);
	std::shared_ptr<Shape> circle3 = std::make_shared<Circle>(point_c3, 3.);
	Point point_r(24., 24.);
	std::shared_ptr<Shape> rectangle = std::make_shared<Rectangle>(point_r, 20., 15.);
	Point point_complex(1., 3.);
	Point point_complex2(0., 0.);
	std::shared_ptr<Shape> complex = std::make_shared<ComplexShape>(circle, rectangle, point_complex, sum);
	std::shared_ptr<Shape> complex2 = std::make_shared<ComplexShape>(complex, circle2, point_complex2, diff);
	std::shared_ptr<Shape> complex3 = std::make_shared<ComplexShape>(complex2, circle3, point_complex2, diff);
	Point p_sum(2., 2.);
	Point p_sum2(4.5, 4.);
	Point p_il(4.5, 4.);
	std::cout << "in? = " << complex->in(p_sum+point_complex) << std::endl;
	Renderer renderer(complex3, 80,80);
	renderer();
	std::system("PAUSE");
	return 0;
}

