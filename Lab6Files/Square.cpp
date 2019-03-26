#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"
#include<iostream> 
#include<cmath>

//Constructor with no parameters
Square::Square()
{
	side = 0;
}


//Constructor with  parameters
Square::Square(const double &s)
{
	side = abs(s);
}


//We set a value to the side
void Square::setSide(const double &s)
{
	side = abs(s);
}


//Calculate the area
double Square::getArea() const
{
	double area;
	area = (side * side);

	return area;
}


//Calculate the perimeter
double Square::getPerimeter() const
{
	double perimeter;
	perimeter = (4 * side);

	return perimeter;
}


//Print kind of shape and the member variables  
void Square::print(std::ostream& out) const
{
	out << "\nThe Square" << endl;
	out << "Side: " << side << endl;
	out << "Area: " << this->getArea() << endl;
	out << "Perimeter: " << this->getPerimeter() << endl;
	
}