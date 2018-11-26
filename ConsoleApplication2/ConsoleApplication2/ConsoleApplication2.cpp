// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
int main()
{
	int x = 0;
	while (x < 20)
	{
		cout << x << endl;
		x++;
	}
	cout << "Po zakoñczeniu pêtli k=" << k << endl;
	system("pause");
    return 0;
}
*/

/*
int main()
{
	int a = 4, b = 12;
	while (a <= b)
	{
		cout << a << endl;
		a++;
	}

	system("pause");
	return 0;
}
*/

/*
int main()
{
	int a, b, x;
	cout << "a: " << endl; cin >> a;
	cout << "b: " << endl; cin >> b;
	for (x = a; x <= b; x++)
	{
		cout << x << endl;
	}
	system("pause");
	return 0;
}
*/

/*
int main()
{
	int a, b, x;
	const double pi = 3.14159265;
	cout << setprecision(4);
	cout << "a: " << endl; cin >> a;
	cout << "b: " << endl; cin >> b;
	cout << setw(4) << "x" << setw(9) << "1/x" << setw(12) << "log10(x)" << setw(18) << "sin(x/20*2*pi)" << endl;
	for (x = a; x <= b; x++)
	{
		cout << setprecision(4) << x;
		if (x!=0) cout << setw(12) << 1.0 / x;
		else cout << setw(12) << "*";
		if (x>0) cout << setw(12) << log10(x);
		else cout << setw(12) << "*";
		cout << setw(15) << sin(x / 20.0 * 2 * pi) << endl;
	}
	system("pause");
	return 0;
}
*/

/*
int main()
{
	int a, b, x, s = 0;
	cout << "a: "; cin >> a;
	cout << "b: "; cin >> b;
	for (x = a; x <= b; x++)
	{
		if (x % 2 == 0)
		{
			s = s + x;
		}
	}
	cout << "suma wynosi: " << s << endl;

	system("pause");
	return 0;
}
*/

/*
int main()
{
	int a, b, x;
	double k = 0, s = 0;
	cout << "a: "; cin >> a;
	cout << "b: "; cin >> b;
	for (x = a; x <= b; x++)
	{
		cout << x << endl;
		if (x % 5 == 0)
		{
			s = s + x;
			k++;
		}
	}
	double t = s / k;
	cout << "wynik: " << t << endl;

	system("pause");
	return 0;
}
*/

int main()
{
	int r, x = 0;
	cout << "rand maximum: " << RAND_MAX << endl;
	srand(time(NULL));
	r = rand();
	for (x = 1; x <= 10; x++)
	{
		r = rand();
		cout << 10.0*rand()/RAND_MAX << endl;
	}
	system("pause");
	return 0;
}
