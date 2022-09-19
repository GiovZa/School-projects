#include <iostream>
using namespace std;

class Rectangle
{
private: 
	double length;
	double width;

public:

	Rectangle()
	{
		length = 1;
		width = 1;
	}

	Rectangle(double w, double l)
	{
		setLength(l);
		setWidth(w);
	}

	double getLength()
	{
		return length;
	}

	void setLength(double len)
	{
		if(len >= 0)
			length = len;
	}

	double getWidth()
	{
		return width;
	}

	void setWidth(double w)
	{
		if (w >= 0)
			width = w;
	}

	double area()
	{
		return length * width;
	}

	double perimeter()
	{
		return 2 * length + 2 * width;
	}
};

int main()
{
	Rectangle r; // creates rectangle object

	r.setLength(5.5);
	r.setWidth(4);

	cout << "Rect dimensions: ";
	cout << r.getWidth() << " x " << r.getLength() << endl;
	cout << "Rectangle area: " << r.area() << endl;
	cout << "Perimeter: " << r.perimeter() << endl;

	Rectangle r2(8.5, 11); // creates rectangle object

	cout << "Rect dimensions: ";
	cout << r2.getWidth() << " x " << r2.getLength() << endl;
	cout << "Rectangle area: " << r2.area() << endl;
	cout << "Perimeter: " << r2.perimeter() << endl;

	Rectangle *BoxPtr;

}