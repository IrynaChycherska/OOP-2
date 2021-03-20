//Triangle.cpp
#include "Triangle.h"
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <string>
#include <sstream>
using namespace std;
Triangle::Triangle()
{}
Triangle::Triangle(Point P1, Point P2 , Point P3)
	:P1(P1), P2(P2), P3(P3)
{}
Triangle::Triangle(const Triangle& a)
{
	*this = a;
}
Triangle::~Triangle()
{}
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
			cout << " equilateral ";
		else
		{
			if (a != b != c)
				cout << " versatile ";
			else
				cout << " isosceles ";
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
Triangle& Triangle::operator =(const Triangle& r)
{
	P1 = r.P1;
	P2 = r.P2;
	P3 = r.P3;
	return *this;
}
Triangle:: operator string() const
{
	stringstream ss;
	ss << P1 << " " << P2 << " " << P3;
	return ss.str();
}
Triangle& Triangle::operator++()
{
	++P1;
	return *this;
}
Triangle& Triangle::operator--()
{
	--P1;
	return *this;
}
Triangle Triangle::operator++(int)
{
	Triangle tmp = *this;
	this->P1++;
	return tmp;
}
Triangle Triangle::operator--(int)
{
	Triangle tmp = *this;
	this->P1--;
	return tmp;
}
ostream& operator << (ostream& out, const Triangle& x)
{
	out << string(x);
	return out;
}
istream& operator >>(istream& in, Triangle& x)
{
	in >> x.P1;
	in >> x.P2;
	in >> x.P3;
	return in;
}
Triangle::Point::Point()
{}
Triangle::Point::Point(double x, double y)
{
	x = x;
	y = y;
}
Triangle:: Point::Point(const Point& a)
{
	*this = a;
}
Triangle::Point& Triangle::Point::operator= (const Triangle::Point& r)
{
	x = r.x;
	y = r.y;
	return *this;
}
Triangle::Point::operator string() const
{
	stringstream ss;
	ss << "(" << x << ", " << y << ")";
	return ss.str();
}
Triangle::Point::~Point()
{}
void Triangle::Point::Read()
{
	double a, b;
	cout << "Input complex value:" << endl;
	cout << " x = "; cin >> a;
	cout << " y = "; cin >> b;
	Init(a, b);
}
void Triangle::Point::Display()
{
	cout << endl;
	cout << "x = " << GetX() << endl;
	cout << "y = " << GetY() << endl;
}
const char* Triangle::Point::toString()
{
	stringstream sout;
	sout << x << " + i * " << y << endl;
	return sout.str().c_str();
}
double Triangle::Point::Vidstan()
{
	return sqrt(x * x + y * y);
}
double  Triangle::Point::Vidstan_do_pochatky()
{
	double x1 = 0.0;
	double y1 = 0.0;
	return sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
}
const char* Triangle::Point::VidstanToNumeral()
{
	const char* _centuries[11] = { "", "sto",
	"dvisti", "trysta",
	"chotyrysta", "pjatsot",
	"schistsot", "simsot",
	"visimsot", "devjatsot",
	"tysiacha abo >" };
	const char* _decades[10] = { "", "",
	"dvadciat", "trydciat",
	"sorok", "pjatdesiat",
	"schistdesiat", "simdesiat",
	"visimdesiat", "devjanosto" };
	const char* _digits[20] = { "", "odyn",
	"dva", "try",
	"chotyry", "pjat",
	"schist’", "sim",
	"visim", "devjat",
	"desiat", "odynadciad’",
	"dvanadciad", "trynadciad",
	"chotyrnadciad", "pjatnadciad",
	"schistnadciad", "simnadciad",
	"visimnadciad", "devjatnadciad" };
	if (Vidstan() >= 1000)
		return _centuries[10];
	int vidstan = floor(Vidstan());
	int cen = vidstan / 100;
	vidstan = vidstan % 100;
	int dec = vidstan / 10;
	int dig;
	if (dec == 0 || dec == 1)
		dig = vidstan % 20;
	else
		dig = vidstan % 10;
	char s[100] = "";
	strcat_s(s, _centuries[cen]);
	strcat_s(s, " ");
	strcat_s(s, _decades[dec]);
	strcat_s(s, " ");
	strcat_s(s, _digits[dig]);
	return s;
}
Triangle::Point& Triangle::Point::operator++()
{
	++x;
	return *this;
}
Triangle::Point& Triangle::Point::operator--()
{
	--x;
	return *this;
}
Triangle::Point Triangle::Point::operator++(int)
{
	Point tmp = *this;
	y++;
	return tmp;
}
Triangle::Point Triangle::Point::operator--(int)
{
	Point tmp = *this;
	y--;
	return *this;
}
ostream& operator <<(ostream& out, const Triangle::Point& x)
{
	out << string(x);
	return out;
}
istream& operator >>(istream& in, Triangle::Point& x)
{
	cout << "x = "; cin >> x.x;
	cout << "y = "; cin >> x.y;
	return in;
}
