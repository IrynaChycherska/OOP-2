//Point.cpp
#include "Point.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <sstream>
using namespace std;
Point::Point()
	: x(0), y(0)
{}
Point::Point(double z , double m)
{
	x = z;
	y = m;
}
Point::Point(const Point& t)
{
	*this = t;
}
Point::operator string() const
{
	stringstream ss;
	ss << " X = " << x << endl;
	ss << " Y = " << y;

	return ss.str();
}
ostream& operator <<(ostream& out, const Point& a)
{
	out << string(a) << endl;
	return out;
}
istream& operator >>(istream& in, Point& a)
{
	cout << "Tochka x ";
	in >> a.x;
	cout << "Tochka y ";
	in >> a.y;
	cout << endl;

	return in;
}
Point& Point::operator ++()
{
	x++;
	y++;
	return *this;
}
Point& Point::operator --()
{
	x--;
	y--;
	return *this;
}
Point Point::operator ++(int)
{
	Point t = *this;
	x++;
	y++;
	return t;
}
Point Point::operator --(int)
{
	Point t = *this;
	x--;
	y--;
	return t;

}

const char* Point::VidstanToNumeral()
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
	"schist", "sim",
	"visim", "dev’jat",
	"desiat", "odynadciad",
	"dvanadciad", "trynadciad",
	"chotyrnadciad", "p’jatnadciad",
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