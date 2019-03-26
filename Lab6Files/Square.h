#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"
#include "Rectangle.h"
#include<iostream> 

using namespace std;

class Square: public Rectangle
{
private: 
	double side;

public:
	//This one will set the memer variables to 0
	Square();
	//this one will give the member variables a value 
	Square(const double & s);
	void setSide(const double &s);
	virtual double getArea() const;
	virtual double getPerimeter() const;
	virtual void print(std::ostream&) const;

};
#endif // !SQUARE_H

