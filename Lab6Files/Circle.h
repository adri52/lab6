#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
#include<iostream> 


using namespace std;

//A constant global variable for pi
const double PI = 3.14159265359;


class Circle : public Shape
{
private:
	double radius;
public:
	//This one will set the memer variables to 0
	Circle();
	//this one will give the member variables a value 
	Circle(const double &r);
	void setRadius(double &r);
	double getArea() const;
	double getPerimeter() const;
	void print(std::ostream&) const;
};


#endif // !CIRCLE_H