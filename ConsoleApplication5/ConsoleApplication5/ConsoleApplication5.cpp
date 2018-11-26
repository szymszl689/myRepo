// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*
void main()
{
	string s1 = "123.44EUR";
	string s2 = "kwota: ";
	string s3 = s2 + s1;
	s3 += "\n";
	int dlugosc = s3.length();
	cout << s3;
	cout << "dlugosc: " << dlugosc << endl;
	float f = 0;
	if (s1[0]>='0' && s1[0]<='9') f = stof(s1);
	int i = 0;
	if (s1[0] >= '0' && s1[0] <= '9') i = stoi(s1);
	cout << "f: " << f << endl;
//cout << "s1[6]: " << s1[6] << endl;
//cout << "s1[7]: " << s1[7] << endl;
	string s4 = s1.substr(6, 3);
	cout << s4 << endl;
	system("pause");
}
*/

//Ponizej przedstawiono rozwiazanie zadania "kalkulator walutowy"
//Zmodyfikowac ponizszy program nastepujaco:
//- jesli program zostanie wywolany z linii polece� systemu operacyjnego z dodatkowymi dwoma parametrami
//	(pierwszy parametr: kwota, drugi parametr: waluta), to program przelicza na PLN podana wartosc i konczy dzia�anie
//- w przeciwnym razie, program dzia�a bez zmian (czeka na podanie warto�ci do przeliczenia)
//
//
//Program kalkulator walutowy : pozwala przelicza� kwoty podane w r�znych walutach na z�ot�wki.
//Program wczytuje od u�ytkownika(do obiektu klasy string) w jednym ci�gu znak�w kwot� i symbol waluty
//(USD, EUR, GBP, CHF, JPY, CAD), np. 1500EUR lub 10.50USD i podaje warto�� przeliczon� na PLN.

/*
float przelicz(string s)
{
	const int N = 6;
	string waluty[N] = { "USD","EUR","GBP","CHF","JPY","CAD" };
	string swaluta;
	int k, idx, L;
	float w1, w2, przeliczniki[N] = { 3.8028, 4.2928, 4.9314, 3.7748, 0.033420, 2.8729 };
	if (s[0]<'0' || s[0]>'9') return(-1);
	//Wyznaczenie kwoty:
	w1 = stof(s);
	//Wyznaczenie indeksu pierwszej litery w s:
	L = s.length();
	idx = L - 3;
	//Wyznaczenie indeksu waluty (w tabl. stringow waluty):
	swaluta = s.substr(idx, 3);
	idx = -1;
	for (k = 0; k < N; k++) {
		if (waluty[k] == swaluta) idx = k;
	}
	if (idx == -1) cout << "Nie obslugiwana waluta!" << endl;
	else w2 = w1*przeliczniki[idx];
	return w2;
}

int main(int argc, char*argv[])
{
	float w2;
	string s;
	if (argc > 1) {
		s = argv[1];
		w2 = przelicz(s);
		if (w2 >= 0)
		cout << s << " = " << fixed << setprecision(2) << w2 << "PLN" << endl;
	}
	do {
		cout << ">>";
		cin >> s;
		w2 = przelicz(s);
		if(w2>=0)
		cout << s << " = " << fixed << setprecision(2) << w2 << "PLN" << endl;
	} while (w2 > 0);
	system("pause");
}
*/
/*
const int N = 6;
string waluty[N] = { "USD","EUR","GBP","CHF","JPY","CAD" };
string s, swaluta;
int k, idx, L;
float w1, w2, przeliczniki[N] = { 3.8028, 4.2928, 4.9314, 3.7748, 0.033420, 2.8729 };
do {
	cout << ">>";
	cin >> s;
	if (s[0]<'0' || s[0]>'9') break;
	//Wyznaczenie kwoty:
	w1 = stof(s);
	//Wyznaczenie indeksu pierwszej litery w s:
	L = s.length();
	idx = L - 3;
	//Wyznaczenie indeksu waluty (w tabl. stringow waluty):
	swaluta = s.substr(idx, 3);
	idx = -1;
	for (k = 0; k < N; k++) {
		if (waluty[k] == swaluta) idx = k;
	}
	if (idx == -1) cout << "Nie obslugiwana waluta!" << endl;
	else {
		w2 = w1*przeliczniki[idx];
		cout << s << " = " << fixed << setprecision(2) << w2 << "PLN" << endl;
	}
} while (w1 > 0);
system("pause");
*/

//Napisz funkcje godzina, kt�ra dostaje w argumentach trzy liczby
//ca�kowite: g, m, s, zawierajace odpowiednio godziny, minuty
//oraz sekundy, i zwraca jako wartosc napis zawierajacy godzine w formacie
//gg:mm:ss, w kt�rym wartosci poszczeg�lnych p�l pochodz� ze zmiennych
//podanych w argumentach.
//
//Zmodyfikuj program tak, aby wartosci godz, min, sek byly pobierane w funkcji wczytaj(...)
//
//Zmodyfikuj program tak, aby (u�ywaj�c instrukcji switch) wypisywa� komunikat:
//- Je�li godz jest od 6 do 11 - "Piekny poranek!"
//- Je�li godz jest od 12 do 16 - "Cieple popoludnie!"
//- Je�li godz jest od 17 do 19 - "Czas odpoczynku!"
//- Je�li godz jest od 20 do 5 - "Ciemna noc!"

string godzina(int g, int m, int s);
void wczytaj(int &g, int &m, int &s);
int main()
{
	string czas;
	int g, m, s;
	wczytaj(g, m, s);
  czas = godzina(g, m, s);
	cout << "Aktualny czas: " << czas << endl;
	system("pause");
}
string godzina(int g, int m, int s)
{
	string ggmmss;
	string gg;
	gg = to_string(g);
	string mm;
	mm = to_string(m);
	string ss;
	ss = to_string(s);
	string dwu = ":";
	ggmmss = gg + dwu + mm + dwu + ss;
	return ggmmss;
}
void wczytaj(int &g, int &m, int &s)
{
	cout << "Godzina:";
	cin >> g;
	cout << "Minuta:";
	cin >> m;
	cout << "Sekunda:";
	cin >> s;
}