//Rectangle.cpp
#include "Rectangle.h"
#include <sstream>
#include <string>
#include <iostream>
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
Rectangle::Rectangle(double a, double b )
	: a(a), b(b)
{}
Rectangle::Rectangle(const Rectangle& s)
{
	a = s.a;
	b = s.b;
}
Rectangle::~Rectangle(void)
{}
Rectangle& Rectangle::operator = (const Rectangle& s)
{
	a = s.a;
	b = s.b;
	return *this;
}
Rectangle::operator string () const
{
	stringstream ss;
	ss << endl << "a = " << a << endl;
	ss << "b = " << b << endl;
	return ss.str();
}
ostream& operator << (ostream& out, const Rectangle& s)
{
	out << string(s);
	return out;
}
istream& operator >> (istream& in, Rectangle& s)
{
	cout << endl;
	cout << "a = ? "; in >> s.a;
	cout << "b = ? "; in >> s.b;
	return in;
}
Rectangle Rectangle::operator ++ (int)
{
	Rectangle s(*this);
	b++;
	return s;
}
Rectangle Rectangle::operator -- (int)
{
	Rectangle s(*this);
	b--;
	return s;
}
Rectangle& Rectangle::operator ++ ()
{
	++b;
	return *this;
}
Rectangle& Rectangle::operator -- ()
{
	--b;
	return *this;
}

void Rectangle::Pair::Read()
{
	double c, d;
	cout << endl;
	cout << "a = ? "; cin >> c;
	cout << "b = ? "; cin >> d;
	Init(c, d);
}
void Rectangle::Pair::Display()
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

Rectangle::Pair::Pair()
	: a(0.), b(0.)
{}
Rectangle::Pair::Pair(const double a = 0, const double b = 0)
	: a(a), b(b)
{}
Rectangle::Pair::Pair(Pair& m)
	: a(m.a), b(m.b)
{}
Rectangle::Pair& Rectangle::Pair::operator =( Rectangle::Pair& m)
{
	a = m.a;
	b = m.b;
	return*this;
}

Rectangle::Pair::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "a = " << a << endl;
	ss << "b = " << b << endl;
	return ss.str();
}
Rectangle::Pair& Rectangle::Pair::operator ++ ()
{
	++a;
	return *this;
}
Rectangle::Pair& Rectangle::Pair::operator -- ()
{
	--a;
	return *this;
}
Rectangle::Pair Rectangle::Pair::operator ++ (int)
{
	Rectangle::Pair t(*this);
	a++;
	return t;
}
Rectangle::Pair Rectangle::Pair::operator -- (int)
{
	Rectangle::Pair t(*this);
	a--;
	return t;
}
ostream& operator <<(ostream& out, const Rectangle::Pair& m)
{
	out << string(m);
	return out;
}
istream& operator >>(istream& in, Rectangle::Pair& m)
{
	cout << endl;
	cout << ".a = ? "; in >> m.a;
	cout << ".b = ? "; in >> m.b;
	return in;
}
Rectangle::Pair::~Pair(void)
{}

