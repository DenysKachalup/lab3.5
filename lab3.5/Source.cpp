#include "Set.h"
#include <iostream>

using namespace std;

int main()
{
	Set a(5),b(5),c;

	cin >> a;
	cin >> b;

	cout << "A :\n" << a << endl;
	cout << "B :\n" << b << endl;

	cout << "Element u mnoz : " << a.rangeCheck(1) << endl;
	cout << "Dodav u mnoz :\n" << a + 2 << endl;
	cout << "Vidniman u mnoz :\n" << a - 2 << endl;
	cout << "Vhodz mnoz u mnoz : " << c.Vhod(a, b) << endl<<endl;
	cout << "Objed mnoz :\n" << c.Objed(a, b) << endl;
	cout << "Peret mnoz :\n" << c.Peret(a, b) << endl;
	cout << "Rizn  mnoz :\n" << c.Rizn(a, b) << endl;
	cout << "Kilkst elem u mnoz : " << a.kilkist() << endl;

	return 0;
}