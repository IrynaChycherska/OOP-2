//Array.h
#pragma once
class Array
{
public:
	double* m;
	Array();
	Array(int);
	double& operator [] (int i) { return m[i]; }
};