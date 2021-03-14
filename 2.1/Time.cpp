//Time.cpp
#include "Time.h"
#include <sstream>
Time::Time()
{
	first = 0;
	second = 0;
}
Time::Time(int r = 0, int i = 0)
{
   first = r;
   second = i;
	
}
Time::Time(const Time& r)
{
	first = r.first ;
	second = r.second;
}
Time::~Time()
{ }
void Time::SetFirst(int r)
{
	first = r;
}
void Time::SetSecond(int i)
{
	second = i;
}

Time& Time::operator = (const Time& r)
{
	first = r.first;
	second = r.second;
	return *this;
}
Time::operator string () const
{
	stringstream ss;
	ss << " First = " << first << endl;
	ss << " Second = " << second << endl;
	return ss.str();
}
Time operator + (const Time& x, const Time& y)
{
	return Time(x.first + y.first, x.second + y.second);
}
Time operator - (const Time& x, const Time& y)
{
	return Time(x.first - y.first, x.second - y.second);
}
Time operator * (const Time& x, const Time& y)
{
	return Time(x.first * y.first - x.second * y.second,
		x.first * y.second + x.second * y.first);
}
Time operator / (const Time& x, const Time& y)
{
	double r1 = x.first;
	double i1 = x.second;
	double r2 = y.first;
	double i2 = y.second;
	return Time((r1 * r2 - i1 * i2) / (r2 * r2 + i2 * i2),
		(-r1 * i2 + i1 * r2) / (r2 * r2 + i2 * i2));
}
Time operator ^ (const Time& x, const unsigned n)
{
	Time y(1, 0);
	for (unsigned i = 1; i <= n; i++)
		y = y * x;
	return y;
}
ostream& operator << (ostream& out, const Time& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Time& r)
{
	cout << " First = "; in >> r.first;
	cout << " Second = "; in >> r.second;
	cout << endl;
	return in;
}
Time& Time::operator ++()
{
	first++;
	return *this;
}
Time& Time::operator --()
{
	first--;
	return *this;
}
Time Time::operator ++(int)
{
	Time t(*this);
	second++;
	return t;
}
Time Time::operator --(int)
{
	Time t(*this);
	second--;
	return t;
}
