//Point.h
#pragma once
#include<iostream>
#include<string>
using namespace std;
class Point
{
private:
	double x;
	double y;
public:
	double GetX() { return x; }
	double GetY() { return y; }
	double SetX(double value) { x = value; return value; }
	double SetY(double value) { y = value; return value; }

	void Init(double value_x, double value_y)
	{
		x = value_x;
		y = value_y;
	}
	void Read();
	void Display();
	double Vidstan()
	{
		return sqrt(x * x + y * y);
	}
	double Vidstan_do_pochatky();
	const char* VidstanToNumeral();
	const char* toString();
	Point();
	Point(double, double);
	Point(const Point&);
	Point& operator =(const Point&);
	operator string() const;
	Point& operator ++();
	Point& operator --();
	Point operator ++(int);
	Point operator --(int);
	friend ostream& operator <<(ostream&, const Point&);
	friend istream& operator >>(istream&, Point&);
};

