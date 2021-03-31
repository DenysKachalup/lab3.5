#pragma once
#include "Array.h"

class Set: public Array
{
public:
	Set() :Array() {}
	Set(int n);
	~Set();
	Set(Set& a);
	Set& operator = (const Set& a);

	Set& operator + (int q);	 //Додавання елемента
	Set& operator - (int q);	 //Віднімання елемента

	bool Vhod(Set a, Set b);	 //вхід одної множини в іншу
	bool rangeCheck(int);		 //Входження елемента в множину
	Set& Objed(Set a, Set b);	 //Обєднання множин
	Set& Peret(Set a, Set b);	 //Перетин множин
	Set& Rizn(Set a, Set b);	 //Різниця множин
	int kilkist();				 //Кількість елементів у множ
};

