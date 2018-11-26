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
//- jesli program zostanie wywolany z linii poleceñ systemu operacyjnego z dodatkowymi dwoma parametrami
//	(pierwszy parametr: kwota, drugi parametr: waluta), to program przelicza na PLN podana wartosc i konczy dzia³anie
//- w przeciwnym razie, program dzia³a bez zmian (czeka na podanie wartoœci do przeliczenia)
//
//
//Program kalkulator walutowy : pozwala przeliczaæ kwoty podane w róznych walutach na z³otówki.
//Program wczytuje od u¿ytkownika(do obiektu klasy string) w jednym ci¹gu znaków kwotê i symbol waluty
//(USD, EUR, GBP, CHF, JPY, CAD), np. 1500EUR lub 10.50USD i podaje wartoœæ przeliczon¹ na PLN.

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

//Napisz funkcje godzina, która dostaje w argumentach trzy liczby
//ca³kowite: g, m, s, zawierajace odpowiednio godziny, minuty
//oraz sekundy, i zwraca jako wartosc napis zawierajacy godzine w formacie
//gg:mm:ss, w którym wartosci poszczególnych pól pochodz¹ ze zmiennych
//podanych w argumentach.
//
//Zmodyfikuj program tak, aby wartosci godz, min, sek byly pobierane w funkcji wczytaj(...)
//
//Zmodyfikuj program tak, aby (u¿ywaj¹c instrukcji switch) wypisywa³ komunikat:
//- Jeœli godz jest od 6 do 11 - "Piekny poranek!"
//- Jeœli godz jest od 12 do 16 - "Cieple popoludnie!"
//- Jeœli godz jest od 17 do 19 - "Czas odpoczynku!"
//- Jeœli godz jest od 20 do 5 - "Ciemna noc!"

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