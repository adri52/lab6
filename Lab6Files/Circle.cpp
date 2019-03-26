#include "Shape.h"
#include "Circle.h"
#include<iostream> 
#include<cmath>

//Constructor with no parameters
Circle::Circle()
{
	radius = 0;
	
}


//Constructor with  parameters
Circle::Circle( const double & r)
{

	radius = abs(r);
}


//We set a value to the radius
void Circle::setRadius(double &r)
{
	radius = abs(r);
}


//Calculate the area
double Circle::getArea() const
{
	double area;
	area = abs((PI)*(radius*radius));

	return area;
}


//Calculate the perimeter
double Circle::getPerimeter() const 
{
	double circumference;
	circumference = abs(2 * (PI)*(radius));
	

	return circumference;
}


//Print kind of shape and the member variables  
void Circle::print(std::ostream& out) const
{
	out << "\nThe Circle" << endl;
	out << "Radious: " << radius << endl; 
	out << "Area: " << this->getArea() << endl;
	out << "Perimeter: " << this ->getPerimeter() << endl;
}