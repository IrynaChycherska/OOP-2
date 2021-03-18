//Source.cpp
#include<iostream>
#include "Rectangle.h"
using namespace std;
int main()
{
	Rectangle::Pair c;
	c.Init(3, 4);
	c.Display();
	cout << "change:" << endl;
	c.setA(5);
	c.setB(6);
	c.Display();
	cout << "dobutok(z) = " << c.dobutok()<< endl;
	cout << "++c : " << ++c << endl;
	cout << "--c : " << --c << endl;
	cout << "c++ : " << c++ << endl;
	cout << "c-- : " << c-- << endl;
	Rectangle s;
	s.Init(3, 4);
	s.Read();
	s.Display();
	cout << "p(s) = " << s.p() << endl;
	cout << "s(s) = " << s.s() << endl;
	cout << "++s : " << ++s << endl;
	cout << "--s : " << --s << endl;
	cout << "s++ : " << s++ << endl;
	cout << "s-- : " << s-- << endl;
	return 0;
}
