#include "Shape.h"
#include "Triangle.h"
#include<iostream> 
#include<cmath>


//Constructor with no parameters
Triangle::Triangle()
{
	sideA = 0;
	sideB = 0;
	sideC = 0;
}


//Constructor with  parameters
Triangle::Triangle(const double &a, const double &b, const double &c)
{
	sideA = abs(a);
	sideB = abs(b);
	sideC = abs(c);

}


//We set a value to side A
void Triangle::setSideA(const double &a)
{
	sideA = abs(a);
}


//We set a value to side B
void Triangle::setSideB(const double &b)
{
	sideB = abs(b);
}


//We set a value to side C
void Triangle::setSideC(const double &c)
{
	sideC = abs(c);
}


//Calculate the area
double Triangle::getArea() const
{
	double s, area;
	s = (sideA + sideB + sideC) / 2;
	area = sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));

	return area;
}


//Calculate the perimeter
double Triangle::getPerimeter() const
{
	double perimeter;
	perimeter = sideA + sideB + sideC;

	return perimeter;
}



//Print kind of shape and the member variables  
void Triangle::print(std::ostream& out) const
{
	out << "\nThe Triangle" << endl;
	out << "Side A: " << sideA << endl;
	out << "Side B: " << sideB << endl; 
	out << "Side C: " << sideC << endl;
	out << "Area: " << this->getArea() << endl;
	out << "Perimeter: " << this->getPerimeter() << endl;
}