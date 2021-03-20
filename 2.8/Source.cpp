#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include"Triangle.h"
using namespace std;
int main()
{
	Triangle::Point c;
	c.Init(1, 2);
	c.Read();
	c.Display();
	c.SetX(3);
	c.SetY(4);
	c.Display();
	cout << "Vidstan_do_pochatky(c) = " << c.Vidstan_do_pochatky() << endl;
	cout << "Vidstan(c) = " << c.Vidstan() << endl;
	char s[100];
	strcpy(s, c.toString());
	cout << s << endl;
	strcpy(s, c.VidstanToNumeral());
	cout << s << endl << endl;
	cout << "++c : " << ++c << endl;
	cout << "--c : " << --c << endl;
	cout << "c++ : " << c++ << endl;
	cout << "c-- : " << c-- << endl;
	Triangle z;
	z.Read();
	z.Init(5, 6, 7, 8, 9, 2);
	z.Display();
	cout << "Storona_A(z) = " << z.get_a() << endl;
	cout << "Storona_B(z) = " << z.get_b() << endl;
	cout << "Storona_C(z) = " << z.get_c() << endl << endl;
	cout << "p = " << z.p() << endl;
	cout << "h_A = " << z.h1() << endl;
	cout << "h_B = " << z.h2() << endl;
	cout << "h_C = " << z.h3() << endl;
	cout << "s = " << z.s() << endl;
	cout << "cos(a)= " << z.get_A() << endl;
	cout << "cos(b)= " << z.get_B() << endl;
	cout << "cos(c)= " << z.get_C() << endl;
	cout << "vud" << z.vud() << endl;
	cout << "++z : " << ++z << endl;
	cout << "--z : " << --z << endl;
	cout << "z++ : " << z++ << endl;
	cout << "z-- : " << z-- << endl;
	cin.get();
	return 0;
}
