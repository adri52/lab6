#ifndef TRIANGLE_H
#define TRAIANGLE_H
#include "Shape.h"
#include<iostream> 

using namespace std; 

//any kind of triangle? 
class Triangle : public Shape
{
private:
	double sideA;
	double sideB; 
	double sideC;
public: 
	//This one will set the memer variables to 0
	Triangle();
	//this one will give the member variables a value 
	Triangle(const double &a, const double &b, const double &c);
	void setSideA(const double &a);
	void setSideB(const double &b);
	void setSideC(const double &c);
	virtual double getArea() const;
	virtual double getPerimeter() const;
	virtual void print(std::ostream&) const;

};
#endif // !TRIANGLE_H
