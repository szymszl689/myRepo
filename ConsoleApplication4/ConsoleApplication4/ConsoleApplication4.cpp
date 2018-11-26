// ConsoleApplication4.cpp : Defines the entry point for the console application.
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
	int tab[10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int k = 0; k < 10; k++)
		{
			tab[i][k] = (i + 1) * (k + 1);
			cout << tab[i][k] << setw(4);
		}
		cout << ";" << endl;
	}
	system("pause");
    return 0;
}
*/

/*
int main()
{
	const int N = 5, M = 5;
	double tab[N][M];
	int i, j;
	double sw[N] = { 0 };
	double sk[M] = { 0 };
	double spg = 0;
	cout << setprecision(4);
	srand(time(NULL));
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			tab[i][j] = -100.0 + 200.0 * rand() / RAND_MAX;
			sw[i] += tab[i][j];
			sk[j] += tab[i][j];
			if (i == j)
			{
				spg += tab[i][j];
			}
			cout << tab[i][j] << setw(6);
		}
		cout << ";" << endl;
	}
	cout << "suma w wierszach: " << endl;
	for (i = 0; i < N; i++)
	{
		cout << sw[i] << "," << endl;
	}
	cout << "suma w kolumnach: " << endl;
	for (j = 0; j < M; j++)
	{
		cout << sk[j] << "," << endl;
	}
	cout << "suma na przekatnej glownej: " << endl;
	cout << spg << endl;

	system("pause");
	return 0;
}
*/

int main()
{
	int i, j;
	double tab[12][31] = { 0 };
	double avg[12] = { 0 };
	const int ndays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31 };
	const double ranges[12][2] = { { -15,8 },{ -10,10 },{ -5,12 },{ 0,16 },
	{ 5,20 },{ 10,25 },{ 15,32 },{ 15,35 },{ 10,30 },{ 0,20 },{ -5,15 },{ -10,10 } };
	srand(time(NULL));
	cout << setprecision(3);
	for (i = 0;i < 12;i++) {
		for (j = 0;j < ndays[i];j++) {
			tab[i][j] = ranges[i][0] + (ranges[i][1] - ranges[i][0])*rand() / RAND_MAX;
			avg[i] += tab[i][j];
		}
		avg[i] = avg[i] / ndays[i];
	}
	for (j = 0;j < 31;j++) {
		for (i = 0;i < 12;i++) {
			cout << setw(5) << tab[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Srednie temp.: ";
	for (i = 0; i < 12; i++)
	{
		cout << avg[i] << ", ";
	}
	system("pause");
	return 0;
}