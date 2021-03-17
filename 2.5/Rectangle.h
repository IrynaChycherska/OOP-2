//Rectangle.h
#pragma once
#include<string>
#include"Pair.h"
using namespace std;
class Rectangle
{
private:
	double a, b;
public:
	double getA() const { return a; }
	double getB() const { return b; }
	void setA(double a) { this->a = a; }
	void setB(double b) { this->b = b; }

	double p()
	{
		return 2 * (a + b);
	}
	double s()
	{
		return a * b;
	}
	void Init(double a, double b);
	void Display();
	void Read();
};

