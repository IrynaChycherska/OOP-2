//Source.cpp
#include <iostream>
#include "Matrix.h"
int main()
{
	Matrix A(2), B(2);
	cout << "Matrix 2x2 " << endl;
	cout << "Enter A matrix: " << endl;
	cin >> A;
	cout << A;
	cout << "Enter B matrix" << endl;
	cin >> B;
	cout << B;
	int x;
	cout << "Matrix on skalar :"<< endl;
	cout << "x = ? "; cin >> x;
	cout << "Matrix on skalar A :" << endl;
	A * x;
	cout << "Matrix on skalar B :" << endl;
	B * x; cout << endl;
	cout << "Comparison A and B:  ";
	A.ComparisonMatrix(A, B);
	cout << endl;
	cout << "Matrix norma B:  " << B.MatrixNorm() << endl;
	cout << endl;
	cout << "Matrix norma A:  " << A.MatrixNorm() << endl;
	return 0;
}