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

	Set& operator + (int q);	 //��������� ��������
	Set& operator - (int q);	 //³������� ��������

	bool Vhod(Set a, Set b);	 //���� ���� ������� � ����
	bool rangeCheck(int);		 //��������� �������� � �������
	Set& Objed(Set a, Set b);	 //�������� ������
	Set& Peret(Set a, Set b);	 //������� ������
	Set& Rizn(Set a, Set b);	 //г����� ������
	int kilkist();				 //ʳ������ �������� � ����
};

