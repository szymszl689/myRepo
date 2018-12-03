// test_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

/*
double fsrednia(int* tablica, int rozmiar);
void main()
{
	const int N = 8;
	int tab1[N] = { 7, 46, -10, 10, 33, 17, -44, 1 };
	const int M = 3;
	int tab2[M] = { 11, 22, 33 };
	double s1 = 0, s2 = 0;
	s1 = fsrednia(tab1, N);
	cout << "Srednia elementow tab1 wynosi: " << s1 << endl;
	s2 = fsrednia(tab2, M);
	cout << "Srednia elementow tab2 wynosi: " << s2 << endl;
	system("pause");
}
double fsrednia(int* tablica, const int rozmiar)
{
	int i;
	double suma = 0.0;
	double srednia;
	for (i = 0; i < rozmiar; i++)
	{
		suma = suma + tablica[i];
	}
	srednia = suma / rozmiar;
	return srednia;
}
*/
/*
int* fwskmin(int* wsk, int R);
void wypisz(int* wsk, int R);
void main()
{
	const int N = 8;
	int tab1[N] = { 7, 46, -10, 10, 33, 17, -44, 1 };
	wypisz(tab1, N);
	for (int j = 0; j < N - 1; j++)
	{
		int *wskmin = fwskmin((tab1 + j), N - j);
		int i = tab1[j];
		tab1[j] = *wskmin;
		*wskmin = i;
		wypisz(tab1, N);
	}
	system("pause");
}

void wypisz(int *wsk, int R)
{
	for (int i = 0; i < R; i++)
	{
		cout << setw(4) << *(wsk+i) << ", ";
	}
	cout << endl;
}

int* fwskmin(int* wsk, int R)
{
	int *minimum = wsk;
	for (int i = 1; i < R; i++)
	{
		if (*(wsk+i) < *minimum)
		{
			*minimum = *(wsk+i);
		}
	}
	return minimum;
}
*/

struct TPunkt{
	double x;
	double y;
};
struct TTrojkat {
	TPunkt w1, w2, w3;
};

TPunkt wczytaj() {
	TPunkt p1;
	cin >> p1.x;
	cin >> p1.y;
	return p1;
}
double odleglosc(TPunkt p1, TPunkt p2) {
	return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

double min_odl(TPunkt punkty[], int R) {
	double min = 1e24;
	for (int i = 0; i < R - 1; i++)
	{
		for (int j = i + 1; j < R; j++)
		{
			double d = odleglosc(punkty[i], punkty[j]);
			if (d < min) min = d;
		}
	}
	return min;
}

double obwod(TTrojkat t) {
	double obwod = odleglosc(t.w1, t.w2) + odleglosc(t.w1, t.w3) + odleglosc(t.w2, t.w3);
	return obwod;
}

void main()
{
	TPunkt p1, p2;
	p1 = wczytaj();
	p2 = wczytaj();
	cout << "Odleglosc wynosi: " << odleglosc(p1, p2) << endl;
	TPunkt punkty[4] = { { 7,7.5 },{ 2,1 },{ -2,6 },{ 0,0 } };
	cout << "Najmniejsza odleglosc w tablicy: " << min_odl(punkty, 4) << endl;
	TTrojkat t;
	t.w1 = { 1,1 };
	t.w2 = { 2,3 };
	t.w3 = { 5,2 };
	cout << "Obwod trojkata: " << obwod(t);
	system("pause");
}