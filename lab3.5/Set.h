#pragma once
#include "Array.h"

class Set: public Array
{
public:
	Set() { size = max; Create(size); }
	Set(const Set& a);
	Set& operator = (const Set& a);

	Set& operator +=(char q);
	Set& operator -=(const char q);
	friend Set operator + (const Set& a, const char q);				//Додавання елемента
	friend Set operator - (const Set& a, const char q);				//Віднімання елемента

	friend bool operator <=(const Set& a, const Set& b);				 //вхід одної множини в іншу
	friend bool operator <=(const char q, const Set& a);					 //Входження елемента в множину
	friend Set operator +(const Set& a, const Set& b);	 //Обєднання множин
	friend Set operator *(const Set& a, const Set& b);	 //Перетин множин
	friend Set operator -(const Set& a, const Set& b);	 //Різниця множин
	int kilkist();							 //Кількість елементів у множ
};

