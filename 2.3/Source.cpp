//Source.cpp
#define _CRT_SECURE_NO_WARNINGS
#include "Point.h"
#include <iostream>
using namespace std;
int main()
{
	Point c(1,2);
	cout << "X = " << c.GetX() << endl;
	cout << "Y = " << c.GetY() << endl << endl;
	cout << "X = 3 " << endl;
	cout << "Y = 4 " << endl;
	c.SetX(3);
	c.SetY(4);
	cout << "Vidstan(c) = " << c.Vidstan() << endl << endl;
	char s[100];
	strcpy(s, c.VidstanToNumeral());
	cout << s << endl << endl;
	cout << "preficsnuj" << endl << c++ << endl;
	cout << c << endl;
	cout << "postficsnuj" << endl << ++c << endl;
	cout << c;
	cin.get();
	return 0;
}