//Rectangle.h
#pragma once
#include <string>
#include <iostream>
using namespace std;
class Rectangle
{
private:
	double a, b;
public:
	class Pair
	{
	private:
		double a, b;
	public:
		double getA() { return a; }
		void setA(double value) { a = value; }
		double getB() { return b; }
		void setB(double value) { b = value; }

		void Init(double a1, double b1)
		{
			a = a1;
			b = b1;
		}
		void Display();
		void Read();
		double dobutok()
		{
			return a * b;
		}
		Pair();
		Pair(double, double);
		Pair(Pair& m);
		~Pair(void);
		Pair& operator = (Pair& m);
		operator string ()const;
		friend ostream& operator << (ostream& out, const Pair& m);
		friend istream& operator >> (istream& in, Pair& m);
		Pair& operator ++ ();
		Pair& operator -- ();
		Pair operator ++ (int);
		Pair operator -- (int);
	};
	double getA() { return a; }
	double getB() { return b; }
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
	Rectangle(double a = 0.0, double b = 0.0);
	Rectangle(const Rectangle& s);
	~Rectangle(void);
	Rectangle& operator = (const Rectangle& s);
	friend ostream& operator << (ostream& out, const Rectangle& s);
	friend istream& operator >> (istream& in, Rectangle& s);
	operator string () const;
	Rectangle& operator ++ ();
	Rectangle& operator -- ();
	Rectangle operator ++ (int);
	Rectangle operator -- (int);
};

