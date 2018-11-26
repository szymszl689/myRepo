// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>


using namespace std;
/*
int main()
{
	const int N = 6;
	int i;
	int tab1[N];
	for (i = 0;i < N;i++)
	{
		cout << "tab1[" << i << "]:";
		cin >> tab1[i];
	}
	int tab2[N];
	cout << " " << endl;
	cout << "tab2 " << endl;
	for (i = 0;i < N;i++)
	{
		tab2[i] = tab1[N - 1 - i];
		cout << tab2[i] << setw(6);
	}
	int tab3[N];
	int k;
	cout << " " << endl;
	cout << "podaj k: " << endl;
	cin >> k;
	cout << "tab3 " << endl;
	for (i = 0;i < N;i++)
	{
		
		if (i > 0)
		{
			tab3[i] = tab1[i - 1];
		}
		else
		{
			tab3[i] = tab1[N - 1];
		}
		cout << tab3[i] << setw(6);
		

		tab3[(i + k) % N] = tab1[i];
		cout << tab3[i] << setw(6);
	}
	system("pause");
    return 0;
}
*/

/*
int main()
{
	const int x = 10;
	unsigned int tab[x] = { 0 };
	int i, t = 0, suma = 0;
	cout << "tab[" << i << "]:";
	for (i = 0;i < x && t >= 0; i++)
	{
		cin >> t;
		if (t >= 0)
		{
			tab[i] = t;
			cout << tab[i] << setw(5);
			suma += tab[i];
		}
		else
			break;
	}
	cout << "suma: " << suma << endl;
	system("pause");
	return 0;
}
*/

int main()
{
	int i;
	double temp[90];
	srand(time(NULL));
	cout << setprecision(4);
	for (i = 0;i < 90;i++)
	{
		temp[i] = 20 + 10.0*rand() / RAND_MAX;
		cout << temp[i] << ",";
	}

	system("pause");
	return 0;
}