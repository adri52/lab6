#include "Shape.h"
#include "Rectangle.h"
#include<iostream> 
#include<cmath>

//Constructor with no parameters
Rectangle::Rectangle()
{
	length = 0;
	width = 0;
}


//Constructor with  parameters
Rectangle::Rectangle(const double &l, const double &w)
{
	length = abs(l);
	width = abs(w);

}


//We set a value to the length
void Rectangle::setLength(const double &l)
{
	length = abs(l);
}


//We set a value to the width
void Rectangle::setWidth(const double &w)
{
	width = abs(w);
}


//Calculate the area
double Rectangle::getArea() const
{
	double area;
	area = (length * width);

	return area;
}


//Calculate the perimeter
double Rectangle::getPerimeter() const
{
	double perimeter;
	perimeter = (2 * length) + (2 * width);

	return perimeter;
}


//Print kind of shape and the member variables  
void Rectangle::print(std::ostream& out) const
{
	out << "\nThe Rectangle" << endl;
	out << "Length: " << length << endl;
	out << "Width: " << width << endl;
	out << "Area: " << this->getArea() << endl;
	out << "Perimeter: " << this->getPerimeter() << endl;
}