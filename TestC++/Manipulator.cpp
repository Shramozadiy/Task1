
#include "Manipulator.h"

Manipulator::Manipulator(Point center, double radius)
{
	center_ = center;
	radius_ = radius;
}

Point Manipulator::getCenter()
{
	return center_;
}


double Manipulator::getRadius()
{
	return radius_;
}

double Manipulator::getDistanceToPoint(Point point)
{
	double distance = Point::getDistance(center_, point);
	if (distance <= radius_)
		return distance;
	else
		return -1;
}



