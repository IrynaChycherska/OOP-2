//Triangle.h
#include <iostream>
#include"Point.h"
#pragma once
class Triangle
{
private:
	Point P1;
	Point P2;
	Point P3;
public:
	void SetP1(Point a) { P1.SetX(a.GetX()); P1.SetY(a.GetY()); }
	void SetP2(Point b) { P2.SetX(b.GetX()); P2.SetY(b.GetY()); }
	void SetP3(Point z) { P3.SetX(z.GetX()); P3.SetY(z.GetY()); }
	Point GetP1() { return P1; }
	Point GetP2() { return P2; }
	Point GetP3() { return P3; }
	void Init(double a, double b, double c, double d, double e, double f)
	{
		P1.Init(a, b);
		P2.Init(c, d);
		P3.Init(e, f);
	}
	void Read();
	void Display();
	double get_a();
	double get_b();
	double get_c();
	double p();
	double h1();
	double h2();
	double h3();
	double s();
	double get_A();
	double get_B();
	double get_C();
	char vud();
	const char* toString();
};
