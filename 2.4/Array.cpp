//Array.cpp
#include "Array.h"
Array::Array()
{
	m = new double[1];
	m[0] = 0;
}
Array::Array(int a = 1)
{
	m = new double[a];
	for (int j = 0; j < a; j++)
		m[j] = 0;
}