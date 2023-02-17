#include <iostream>

#include"konto.h"

using namespace std;

konto::konto(string _imie, string _nazwisko, long double _stan, int _id)
{
	imie = _imie;
	nazwisko = _nazwisko;
	stan = _stan;
	id = _id;
}

void stworz_klase()
{
	string imie, nazwisko;
	long double stan;
	int id = 1;
	cout << "IMIE: ";
	cin >> imie;
	cout << "NAZWISKO: ";
	cin >> nazwisko;
	cout << "STAN KONTA: ";
	cin >> stan;
	konto* user;
	user = new konto(imie, nazwisko, stan, id);
	(*user).wypisz();

	
}


void konto:: wypisz()
{
	cout << imie;
	
}
