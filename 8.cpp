#include<iostream>
using namespace std;

class Circle
{
	double radius;
	double pi = 3.14159;
	
	public:
		Circle()
		{
			this -> radius = 0;
		}
		Circle(double radius)
		{
			this -> radius = radius;
		}
		void setRadius(double radius)
		{
			this -> radius = radius;
		}
		double getRadius()
		{
			return this -> radius;
		}
		double getArea()
		{
			return pi * radius * radius;
		}
		double getDiameter()
		{
			return radius * 2;
		}
		double getCircumference()
		{
			return 2 * pi * radius;
		}
};

int main()
{
	double radius;
	double pi = 3.14159;
	
	cout << "Enter the radius: " << endl;
	cin >> radius;
	
	Circle newC = Circle(radius);
	
	cout << "Area: " << newC.getArea() << endl;
	cout << "Diameter: " << newC.getDiameter() << endl;
	cout << "Circumference: " << newC.getCircumference();
	
	return 0;
}
