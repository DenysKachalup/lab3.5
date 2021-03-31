#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Array
{
private:
	int size;
protected:
	static const int max = 256;
	int* m;

public:

	Array();
	Array(int n );
	~Array();
	Array(Array& a);
	void setSize(int a);
	int getSize() const { return size; }

	Array& operator = (const Array& a);
	int& operator [] (const int i);
	const int& operator [] (const int i) const;
	operator string() const;

	friend ostream& operator << (ostream& out, const Array& a);
	friend istream& operator >> (istream& in, Array& a);

};

