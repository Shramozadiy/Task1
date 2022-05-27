#pragma once

#include "Point.h"

class Manipulator
{

public:

	Manipulator(Point center, double radius);

	Point getCenter();

	double getRadius();

	double getDistanceToPoint(Point point);

private:
	Point center_ = { 0.0, 0.0 };
	double radius_ = 0.0;

};