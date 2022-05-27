
// Задание 1

#include <iostream>
#include <vector>
#include <algorithm>

#include "Manipulator.h"


int getOptimalManipulator(std::vector <Manipulator> manipulators, Point point)
{
	auto optimalManipulator = std::min_element(manipulators.begin(), manipulators.end(),
		[point](Manipulator& a, Manipulator& b)
		{
			if (a.getDistanceToPoint(point) == -1)
				return false;
			else if (b.getDistanceToPoint(point) == -1)
				return true;
			else
				return a.getDistanceToPoint(point) < b.getDistanceToPoint(point);
		});

	if (optimalManipulator->getDistanceToPoint(point) == -1)
	{
		return -1;
	}

	return optimalManipulator - manipulators.begin();
}

int main()
{

	Point P1;
	Point O1;
	Point O2;
	double R1;
	double R2;

	std::cout << "Target point: ";
	std::cin >> P1;

	std::cout << "Coordinates of the first manipulator: ";
	std::cin >> O1;

	std::cout << "Radius of the first manipulator:";
	std::cin >> R1;

	std::cout << "Coordinates of the second manipulator: ";
	std::cin >> O2;

	std::cout << "Radius of the second manipulator:";
	std::cin >> R2;

	std::vector <Manipulator> manipulators; // Массив манипуляторов

	// Инициалитзируем манипуляторы
	manipulators.push_back({O1, R1}); 
	manipulators.push_back({O2, R2});

	// Найти номер оптимального манипулятора
	int numOptimalManipulator = getOptimalManipulator(manipulators, P1);
	if (numOptimalManipulator != -1)
		std::cout << "The optimal manipulator has a number: " << numOptimalManipulator << std::endl;
	else 
		std::cout << "OUT OF RANGE" <<  std::endl;


	return 0;
}