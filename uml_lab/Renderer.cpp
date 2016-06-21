#include "stdafx.h"
#include "Renderer.h"
#include "Shape.h"
#include "Point.h"

Renderer::Renderer(std::shared_ptr<Shape>& shape) : shape(shape), width(50), height(50)
{
}

Renderer::Renderer(std::shared_ptr<Shape>& shape, int width, int height) : Renderer(shape)
{
	width = width;
	height = height;
}

void Renderer::operator()()
{
	Point p(0, 0);
	for (int y = 0; y < height; ++y)
	{
		std::cout << std::endl;
		p.y = y;
		for (int x = 0; x < width; ++x)
		{
			p.x = x;
			if (shape->in(p))
				std::cout << "x";
			else
				std::cout << ".";
		}
	}
}

Renderer::~Renderer()
{
}
