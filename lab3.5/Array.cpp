#include "Array.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
Array::Array() 
	:size(1) 
{
	m = new int[size];

	for (int i = 0; i < size; i++)
	{
		m[i] = 0;
	}
}
Array::Array(int n)
{
	if (n < max)
		size = n;
	else
		size = max;

	m = new int[size];

	for (int i = 0; i < size; i++)
	{
		m[i] = 0;
	}
}

Array::Array(Array& a)
{
	size = a.size;
	m = new int[size];

	for (int i = 0; i < size; i++)
	{
		m[i] = a.m[i];
	}
}

Array::~Array()
{
	delete[]m;
}

void Array::setSize(int a)
{
	size = a;
}

Array& Array::operator = (const Array& a)
{
	if (&a == this) return *this;

	delete[]m;

	m = new int[size];

	for (int i = 0; i < size; i++)
	{
		m[i] = a.m[i];
	}
	
	return* this;
}

int& Array:: operator [] (const int i)
{
	return m[i];
}

const int& Array:: operator [] (const int i) const
{
	return m[i];
}

ostream& operator << (ostream& out, const Array& a)
{
	
	out << string(a);
	return out;
}

Array::operator string() const
{
	stringstream sout;
	for (int i = 0; i < size; i++)
		sout << "Array[ " << i << " ] = " << m[i] << endl;
	//sout << endl;
	return sout.str();
}

istream& operator >> (istream& in, Array& a)
{
	for (int i = 0; i < a.size; i++)
	{
		cout << "Array[ " << i << " ] =  "; in >> a[i];
	}
	cout << endl;
	return in;
}