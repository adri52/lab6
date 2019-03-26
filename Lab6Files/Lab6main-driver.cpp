#include "catch.hpp"
#include "Shape.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Square.h"
#include<iostream>

using namespace std;

void display(const Shape &);

/*Write a polymorphic driver program. It should create an instance of each of the four derived classes using dimensions input by the user. 
It should then output the name, attributes, area, and perimeter of each object. There should be a function that receives a Shape pointer (or reference)
which outputs all the information of the shape: name, dimension attributes, area, and perimeter.*/
int main()
{
	double temp = 0; 
	Circle c;
	Triangle t;
	Rectangle r; 
	Square s;

	cout << "Shapes!\n We have 4 shapes: circle, triangle, rectangle and a square.\n";
	cout << "We will be asking for their dimentions so we can calculate and display their perimeter and area." << endl;
	cout << "\n\nCircle: \n";
	cout << "Enter the radius: ";
	cin >> temp; 
	c.setRadius(temp);

	cout << "\n\nTraiangle: \n";
	cout << "Enter side A: ";
	cin >> temp;
	t.setSideA(temp);
	cout << "Enter side B: ";
	cin >> temp;
	t.setSideB(temp);
	cout << "Enter side C: ";
	cin >> temp;
	t.setSideC(temp);

	cout << "\n\nRectangle: \n";
	cout << "Enter length: ";
	cin >> temp;
	r.setLength(temp);
	cout << "Enter width: ";
	cin >> temp;
	r.setWidth(temp);
	
	cout << "\n\nSquare: \n";
	cout << "Enter the side: ";
	cin >> temp;
	s.setSide(temp);


	cout << "\n\nBased on the data you entered this is the information about shapes: " << endl;
	display(c);
	display(t);
	display(r);
	display(s);
}


void display(const Shape & s)
{
	s.print(cout);
}


//holis!!! 
