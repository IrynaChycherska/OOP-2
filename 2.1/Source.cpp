//Source.cpp
#include"Time.h"
#include<iostream>

using namespace std;

int main() 
{
	
	Time a(1, 1);
	cout << a++ << endl;
	cout << a << endl;
	cout << ++a << endl;
	cout << a << endl;
	Time x;
	cout << "Input complex number ->" << endl;
	cin >> x;
	x.minutes();
	cout << "Result: " << endl;
	cout << x;
	cin.get();
	return 0;
}