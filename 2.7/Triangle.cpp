//Triangle.cpp
#include "Triangle.h"
#include "Point.h"
#include <string>
#include<iostream>
#include<sstream>
#include<cmath>

using namespace std;

void Triangle::Read()
{
	cout << "Coord:" << endl;
	cout << "X1 = " << P1.SetX(5) << endl;
	cout << "Y1 = " << P1.SetY(6) << endl;
	cout << "X2 = " << P2.SetX(7) << endl;
	cout << "Y2 = " << P2.SetY(8) << endl;
	cout << "X3 = " << P3.SetX(9) << endl;
	cout << "Y3 = " << P3.SetY(2) << endl;

}
void Triangle::Display()
{
	cout << endl;
	cout << "Change:" << endl;
	cout << "X1 = " << P1.SetX(1) << endl;
	cout << "Y1 = " << P1.SetY(0) << endl;
	cout << "X2 = " << P2.SetX(-4) << endl;
	cout << "Y2 = " << P2.SetY(5) << endl;
	cout << "X3 = " << P3.SetX(8) << endl;
	cout << "Y3 = " << P3.SetY(-2) << endl;
	cout << endl;
}
double Triangle::get_a()
{
	double a = (P2.SetX(-4) - P1.SetX(1)) * (P2.SetX(-4) - P1.SetX(1));
	double b = (P2.SetY(5) - P1.SetY(0)) * (P2.SetY(5) - P1.SetY(0));
	return sqrt(a + b);
}
double Triangle::get_b()
{
	double a = (P3.SetX(8) - P2.SetX(-4)) * (P3.SetX(8) - P2.SetX(-4));
	double b = (P3.SetY(-2) - P2.SetY(5)) * (P3.SetY(-2) - P2.SetY(5));
	return sqrt(a + b);
}
double Triangle::get_c()
{
	double a = (P3.SetX(8) - P2.SetX(1)) * (P3.SetX(8) - P2.SetX(1));
	double b = (P3.SetY(-2) - P2.SetY(0)) * (P3.SetY(-2) - P2.SetY(0));
	return sqrt(a + b);
}
double Triangle::p()
{
	double a = sqrt((P2.SetX(-4) - P1.SetX(1)) * (P2.SetX(-4) - P1.SetX(1)) + (P2.SetY(5) - P1.SetY(0)) * (P2.SetY(5) - P1.SetY(0)));
	double b = sqrt((P3.SetX(8) - P2.SetX(-4)) * (P3.SetX(8) - P2.SetX(-4)) + (P3.SetY(-2) - P2.SetY(5)) * (P3.SetY(-2) - P2.SetY(5)));
	double c = sqrt((P3.SetX(8) - P2.SetX(1)) * (P3.SetX(8) - P2.SetX(1)) + (P3.SetY(-2) - P2.SetY(0)) * (P3.SetY(-2) - P2.SetY(0)));
	return a + b + c;
}
double Triangle::h1()
{
	cout << endl;
	double a = sqrt((P2.SetX(-4) - P1.SetX(1)) * (P2.SetX(-4) - P1.SetX(1)) + (P2.SetY(5) - P1.SetY(0)) * (P2.SetY(5) - P1.SetY(0)));
	double b = sqrt((P3.SetX(8) - P2.SetX(-4)) * (P3.SetX(8) - P2.SetX(-4)) + (P3.SetY(-2) - P2.SetY(5)) * (P3.SetY(-2) - P2.SetY(5)));
	double c = sqrt((P3.SetX(8) - P2.SetX(1)) * (P3.SetX(8) - P2.SetX(1)) + (P3.SetY(-2) - P2.SetY(0)) * (P3.SetY(-2) - P2.SetY(0)));
	double p = (a + b + c) / 2;
	return (2 / a) * sqrt(p * (p - a) * (p - b) * (p - c));
}
double Triangle::h2()
{
	double a = sqrt((P2.SetX(-4) - P1.SetX(1)) * (P2.SetX(-4) - P1.SetX(1)) + (P2.SetY(5) - P1.SetY(0)) * (P2.SetY(5) - P1.SetY(0)));
	double b = sqrt((P3.SetX(8) - P2.SetX(-4)) * (P3.SetX(8) - P2.SetX(-4)) + (P3.SetY(-2) - P2.SetY(5)) * (P3.SetY(-2) - P2.SetY(5)));
	double c = sqrt((P3.SetX(8) - P2.SetX(1)) * (P3.SetX(8) - P2.SetX(1)) + (P3.SetY(-2) - P2.SetY(0)) * (P3.SetY(-2) - P2.SetY(0)));
	double p = (a + b + c) / 2;
	return (2 / b) * sqrt(p * (p - a) * (p - b) * (p - c));
}
double Triangle::h3()
{
	double a = sqrt((P2.SetX(-4) - P1.SetX(1)) * (P2.SetX(-4) - P1.SetX(1)) + (P2.SetY(5) - P1.SetY(0)) * (P2.SetY(5) - P1.SetY(0)));
	double b = sqrt((P3.SetX(8) - P2.SetX(-4)) * (P3.SetX(8) - P2.SetX(-4)) + (P3.SetY(-2) - P2.SetY(5)) * (P3.SetY(-2) - P2.SetY(5)));
	double c = sqrt((P3.SetX(8) - P2.SetX(1)) * (P3.SetX(8) - P2.SetX(1)) + (P3.SetY(-2) - P2.SetY(0)) * (P3.SetY(-2) - P2.SetY(0)));
	double p = (a + b + c) / 2;
	return (2 / c) * sqrt(p * (p - a) * (p - b) * (p - c));
}
double Triangle::get_A()
{
	cout << endl;
	double a = sqrt((P2.SetX(-4) - P1.SetX(1)) * (P2.SetX(-4) - P1.SetX(1)) + (P2.SetY(5) - P1.SetY(0)) * (P2.SetY(5) - P1.SetY(0)));
	double b = sqrt((P3.SetX(8) - P2.SetX(-4)) * (P3.SetX(8) - P2.SetX(-4)) + (P3.SetY(-2) - P2.SetY(5)) * (P3.SetY(-2) - P2.SetY(5)));
	double c = sqrt((P3.SetX(8) - P2.SetX(1)) * (P3.SetX(8) - P2.SetX(1)) + (P3.SetY(-2) - P2.SetY(0)) * (P3.SetY(-2) - P2.SetY(0)));
	double t = ((b * b + c * c - a * a) / (2 * b * c));
	return t;
}
double Triangle::get_B()
{
	double a = sqrt((P2.SetX(-4) - P1.SetX(1)) * (P2.SetX(-4) - P1.SetX(1)) + (P2.SetY(5) - P1.SetY(0)) * (P2.SetY(5) - P1.SetY(0)));
	double b = sqrt((P3.SetX(8) - P2.SetX(-4)) * (P3.SetX(8) - P2.SetX(-4)) + (P3.SetY(-2) - P2.SetY(5)) * (P3.SetY(-2) - P2.SetY(5)));
	double c = sqrt((P3.SetX(8) - P2.SetX(1)) * (P3.SetX(8) - P2.SetX(1)) + (P3.SetY(-2) - P2.SetY(0)) * (P3.SetY(-2) - P2.SetY(0)));
	double z = ((a * a + c * c - b * b) / (2 * a * c));
	return z;
}
double Triangle::get_C()
{
	double a = sqrt((P2.SetX(-4) - P1.SetX(1)) * (P2.SetX(-4) - P1.SetX(1)) + (P2.SetY(5) - P1.SetY(0)) * (P2.SetY(5) - P1.SetY(0)));
	double b = sqrt((P3.SetX(8) - P2.SetX(-4)) * (P3.SetX(8) - P2.SetX(-4)) + (P3.SetY(-2) - P2.SetY(5)) * (P3.SetY(-2) - P2.SetY(5)));
	double c = sqrt((P3.SetX(8) - P2.SetX(1)) * (P3.SetX(8) - P2.SetX(1)) + (P3.SetY(-2) - P2.SetY(0)) * (P3.SetY(-2) - P2.SetY(0)));
	double x = ((a * a + b * b - c * c) / (2 * a * b));
	return x;
}


double Triangle::s()
{
	cout << endl;
	double a = sqrt((P2.SetX(-4) - P1.SetX(1)) * (P2.SetX(-4) - P1.SetX(1)) + (P2.SetY(5) - P1.SetY(0)) * (P2.SetY(5) - P1.SetY(0)));
	double b = sqrt((P3.SetX(8) - P2.SetX(-4)) * (P3.SetX(8) - P2.SetX(-4)) + (P3.SetY(-2) - P2.SetY(5)) * (P3.SetY(-2) - P2.SetY(5)));
	double c = sqrt((P3.SetX(8) - P2.SetX(1)) * (P3.SetX(8) - P2.SetX(1)) + (P3.SetY(-2) - P2.SetY(0)) * (P3.SetY(-2) - P2.SetY(0)));
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
char Triangle::vud()
{
	cout << endl;
	double a = sqrt((P2.SetX(-4) - P1.SetX(1)) * (P2.SetX(-4) - P1.SetX(1)) + (P2.SetY(5) - P1.SetY(0)) * (P2.SetY(5) - P1.SetY(0)));
	double b = sqrt((P3.SetX(8) - P2.SetX(-4)) * (P3.SetX(8) - P2.SetX(-4)) + (P3.SetY(-2) - P2.SetY(5)) * (P3.SetY(-2) - P2.SetY(5)));
	double c = sqrt((P3.SetX(8) - P2.SetX(1)) * (P3.SetX(8) - P2.SetX(1)) + (P3.SetY(-2) - P2.SetY(0)) * (P3.SetY(-2) - P2.SetY(0)));
	if (((a + b) > c) && ((a + c) > b) && ((b + c) > a))
	{
		if (a == b && b == c && c == a)
			cout << " rivnostoronnij ";
		else
		{
			if (a != b != c)
				cout << " riznostoronnij ";
			else
				cout << " rivnobedrennij ";
		}
	}
	else
		cout << "ne isnyj" << endl;
	return false;
}
const char* Triangle::toString()
{
	stringstream sout;
	sout << P1.toString() << " + i * " << P2.toString() << " + i * " << P3.toString() << endl;
	return sout.str().c_str();
}
