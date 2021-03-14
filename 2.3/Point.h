//Point.h
#include <iostream>
#include <string>
#pragma once
using namespace std;
class Point
{
private:
	double x;
	double y;
public:
	double GetX() { return x; }
	double GetY() { return y; }
	double Vidstan()
	{
		return sqrt(x * x + y * y);
	}
	void SetX(double value) { x = value; }
	void SetY(double value) { y = value; }

	Point();
	Point(double, double); 
	Point(const Point&); 
	operator string() const;
	Point& operator ++();
	Point& operator --();
	Point operator ++(int);
	Point operator --(int);
	friend ostream& operator <<(ostream&, const Point&);
	friend istream& operator >>(istream&, Point&);
	
	const char* VidstanToNumeral();

};

