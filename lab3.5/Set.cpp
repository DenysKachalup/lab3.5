#include "Set.h"


Set::Set(int n)
	:Array(n)
{}

Set::~Set()
{
}

Set::Set(Set& a)
	:Array(a)
{}

Set& Set::operator = (const Set& a)
{
	Array::operator= (a);
	return *this;
}

bool Set::rangeCheck(int q)
{
	for (int i = 0; i < getSize(); i++)
	{
		if (m[i] == q)
			return true;
	}
	return false;
}
Set& Set::operator + (int q)
{
	int* v = new int[getSize() + 1];
	for (int i = 0; i < getSize(); i++)
	{
		v[i] = m[i];
	}

	setSize(getSize() + 1);
	v[getSize() - 1] = q;

	m = v;

	return *this;
}
Set& Set::operator - (int q)
{
	int* v = new int[getSize()];
	for (int i = 0; i < getSize(); i++)
	{
		if (m[i] == q)
		{
			for (i; i < getSize() - 1; i++)
			{
				v[i] = m[i + 1];
			}
			setSize(getSize() - 1);
			m = v;
			return *this;
		}
		v[i] = m[i];
	}
	m = v;
	return *this;
}
Set& Set::Objed(Set a, Set b)
{
	int* v = new int[a.getSize() + b.getSize()];
	int i = 0;
	while (i != a.getSize())
	{
		v[i] = a.m[i];
		i++;
	}
	int j = 0;
	while (j != b.getSize())
	{
		v[i] = b.m[j];
		i++;
		j++;
	}
	if ((a.getSize() + b.getSize()) < max)
		setSize(a.getSize() + b.getSize());
	else
		setSize(max);
	m = v;
	return *this;
}
Set& Set::Peret(Set a, Set b)
{
	int* v = new int[a.getSize()];
	int j = 0;
	for (int i = 0; i < a.getSize(); i++)
	{
		for(int k = 0 ; k < b.getSize(); k++)
			if (a.m[i] == b.m[k])
		    {
				v[j] = a.m[i];
				j++;
			}
	}

	setSize(j);
	m = v;
	return *this;
}

Set& Set::Rizn(Set a, Set b)
{
	int* v = new int[a.getSize()];
	int j = 0;
	for (int i = 0; i < a.getSize(); i++)
	{
		int per = 0;
		for (int k = 0; k < b.getSize(); k++)
		{
			if (a.m[i] == b.m[k])
				per++;
		}
		if (per == 0)
		{
			v[j] = a.m[i];
			j++;
		}
	}

	setSize(j);
	m = v;

	return *this;
}

int Set::kilkist()
{
	int k = 0;
	for (int i = 0; i < getSize(); i++)
	{
		k++;
	}
	return k;
}

bool Set::Vhod(Set a, Set b)
{
	int per = 0;
	for (int i = 0; i < a.getSize(); i++)
	{
		for (int k = 0; k < b.getSize(); k++)
		{
			if (a.m[i] == b.m[k])
				per++;
		}
	}
	if (per == a.getSize())
		return true;
	return false;
}