//Triangle.h
#include <iostream>
#include <math.h>
#pragma once
using namespace std;
class Triangle
{
public:
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
		double Vidstan();
		double Vidstan_do_pochatky();
		const char* VidstanToNumeral();
		const char* toString();
		Point();
		Point(double, double);
		Point(const Point&);
		~Point();
		Point& operator =(const Point&);
		operator string() const;
		Point& operator ++();
		Point& operator --();
		Point operator ++(int);
		Point operator --(int);
		friend ostream& operator <<(ostream&, const Point&);
		friend istream& operator >>(istream&, Point&);
	};
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
	Triangle();
	Triangle(Point, Point, Point);
	Triangle(const Triangle&);
	~Triangle();
	Triangle& operator =(const Triangle&);
	operator string() const;
	Triangle& operator ++();
	Triangle& operator --();
	Triangle operator ++(int);
	Triangle operator --(int);
	friend ostream& operator << (ostream&, const Triangle&);
	friend istream& operator >> (istream&, Triangle&);
};

