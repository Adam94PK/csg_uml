#pragma once
#include "classes.h"
#include <memory>
#include <iostream>
class Renderer
{
	std::shared_ptr<Shape> shape;
	int width;
	int height;
public:
	Renderer(std::shared_ptr<Shape> &shape);
	Renderer(std::shared_ptr<Shape> &shape, int width, int height);
	void operator()();
	~Renderer();
};

