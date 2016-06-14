#pragma once
class Point
{
public:
	Point();
	Point(float x, float y);
	Point(const Point &);
	float x;
	float y;
	Point operator-(const Point &) const;
	Point operator+(const Point &) const;
};

