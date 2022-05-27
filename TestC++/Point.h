#pragma once

#include <iostream>
#include <cmath>



class Point
{
public:
	
	Point(double x = 0, double y = 0);

	Point(const Point&); 

	void setCoordinates(double x, double y);

	void getCoordinates(double& x, double& y);

	static double getDistance(const Point& point1, const Point& point2);

	friend std::istream& operator>>(std::istream& is, Point& point);

private:
	double x = 0;
	double y = 0;
};