#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
#include<iostream> 

using namespace std;

class Rectangle : public Shape
{
private:
	double length;
	double width;
public:
	//This one will set the memer variables to 0
	Rectangle();
	//this one will give the member variables a value 
	Rectangle(const double & l, const double & w);
	void setLength(const double & l);
	void setWidth(const double & w);
	virtual double getArea() const;
	virtual double getPerimeter() const;
	virtual void print(std::ostream&) const;

};
#endif // !RECTANGLE_H
