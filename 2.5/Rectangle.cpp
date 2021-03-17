//Rectangle.cpp
#include "Rectangle.h"
#include <iostream>
#include <sstream>

using namespace std;
void Rectangle::Init(double a, double b)
{
	setA(a);
	setB(b);
}
void Rectangle::Display()
{
	cout << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
void  Rectangle::Read()
{
	double n;
	double m;
	cout << endl;
	cout << "b = ? "; cin >> n;
	cout << "a = ? "; cin >> m;
	Init(n, m);
}