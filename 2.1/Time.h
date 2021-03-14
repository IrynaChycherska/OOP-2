//Time.h
#pragma once
#include <iostream>
#include <string>
using namespace std;
class Time
{
	int first, second;
public:
	void minutes()
	{
		int h = 60;
		if (first > 0 && second > 0)
		{
			first *= h;
		    second = second;

		}
		else
		{
			cout << "Eror";
		}
	}
	Time();
	Time(int, int);
	Time(const Time&);
	~Time();
	void SetFirst(int);
	void SetSecond(int);
	int GetFirst() const {return first;}
	int GetSecond() const { return second; }
	Time& operator = (const Time&);
	operator string() const;
	friend Time operator + (const Time&, const Time&);
	friend Time operator - (const Time&, const Time&);
	friend Time operator * (const Time&, const Time&);
	friend Time operator / (const Time&, const Time&);
	friend Time operator ^ (const Time&, const unsigned);
	friend ostream& operator << (ostream&, const Time&);
	friend istream& operator >> (istream&, Time&);
	Time& operator ++();
	Time& operator --();
	Time operator ++(int);
	Time operator --(int);
};

