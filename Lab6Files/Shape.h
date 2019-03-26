#ifndef SHAPE_H
#define SHAPE_H
#include<iostream> 

using namespace std;

class Shape
{


public:
	virtual double getArea() const = 0;
	virtual double getPerimeter() const = 0;
	virtual void print(std::ostream& ) const = 0;
};


#endif // !SHAPE_H

