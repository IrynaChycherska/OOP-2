//Matrix.h
#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include "Array.h"
using namespace std;
class Matrix
{
private:
	int a;
	Array* s;
public:
	Matrix();
	Matrix(int);
	Matrix(int a, Array*);
	~Matrix();
	int SetA(int b) { a = b; }
	int GetA() const { return a; }
	friend void operator * (Matrix&, int x);
	friend bool operator == (Matrix&, Matrix&);
	Array& operator[] (int i) { return s[i]; }
	friend ostream& operator << (ostream&, const Matrix&);
	friend istream& operator >> (istream&, Matrix&);
	operator string() const;
	double MatrixNorm();
	void ComparisonMatrix(Matrix&, Matrix&);
};