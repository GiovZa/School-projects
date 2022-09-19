#include <cmath>
#include <iomanip>
#include <iostream>
#include "CartesianCoordinate2D.h"

int main()
{
	CartesianCoordinate2D a;
	CartesianCoordinate2D b(9.0, 6.0);
	CartesianCoordinate2D c(3.0, 4.0);
	CartesianCoordinate2D d = b;
	d = b - c;

	std::cout << a << d << c << std::endl;
	if (d > c)
		std::cout << "D";
	else
		std::cout << "C";
	system("PAUSE");
	return 0;
}