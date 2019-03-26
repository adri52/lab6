#include "catch.hpp"
#include "Shape.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Square.h"
#include<iostream>
#include<cmath>

using namespace std;


TEST_CASE("Circle")
{
	Circle c(5);
	
	SECTION("getArea")
	{
		REQUIRE(c.getArea() == Approx(78.5398).epsilon(1e-4));
	}
	SECTION("getPerimeter")
	{
		REQUIRE(c.getPerimeter() == Approx(31.4159).epsilon(1e-4));
	}
	SECTION("print")
	{
	/*
		ostringstream out;
		c.print(out);
		REQUIRE(out.str() == "The Circle[radius: 1]");
		*/
	}
	
}

TEST_CASE("Triangle")
{

	Triangle t(3, 4, 5);

	SECTION("getArea")
	{
		REQUIRE(t.getArea() == 6);
	}
	SECTION("getPerimeter")
	{
		REQUIRE(t.getPerimeter() == 12);
	}
	SECTION("print")
	{

	}

}

TEST_CASE("Rectangle")
{

	Rectangle r(-5, 4);

	SECTION("getArea")
	{
		REQUIRE(r.getArea() == 20);
	}
	SECTION("getPerimeter")
	{
		REQUIRE(r.getPerimeter() == 18);
	}
	SECTION("print")
	{

	}

}

TEST_CASE("Square")
{

	Square s(4.5);
	SECTION("getArea")
	{
		REQUIRE(s.getArea() == 20.25);
	}
	SECTION("getPerimeter")
	{
		REQUIRE(s.getPerimeter() == 18);
	}
	SECTION("print")
	{

	}

}