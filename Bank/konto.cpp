#include <iostream>

#include"konto.h"


using namespace std;
konto uzytkownik[100];
void konto::stworz(string _imie, string _nazwisko,string _login, string _haslo, long double _stan, int _id)
{
	imie = _imie;
	nazwisko = _nazwisko;
	login = _login;
	haslo = _haslo;
	stan = _stan;
	id = _id;
}
konto::konto()
{
	imie = " ";
	nazwisko = " ";
	stan = 0;
	id = 0;
}

void stworz_klase(int nr)
{
	string imie, nazwisko, login , haslo;
	long double stan;
	int id = nr+1;
	cout << "IMIE: ";
	cin >> imie;
	cout << "NAZWISKO: ";
	cin >> nazwisko;
	cout << "LOGIN: ";
	cin >> login;
	cout << "HASLO: ";
	cin >> haslo;
	cout << "STAN KONTA: ";
	cin >> stan;
	(uzytkownik[nr]).stworz(imie, nazwisko,login,haslo, stan, id);
	
	
}
int konto::logowanie()
{
	string _haslo;
	cout << "HASLO: ";
	cin >> _haslo;
	if (haslo == _haslo)
	{
		system("cls");
		cout << "ZALOGOWANO POMYSLNIE, WITAJ "<<imie<<endl<<"NACISNIJ DOWOLNY PRZYCSK BY KONTYNUOWAC";
		return 1;
	}
	return 0;
}


int znajdz_konto(int &klient)
{
	string login;
	cout << "LOGIN: ";
	cin >> login;
	
	for (int k = 0;k < 100;k++)
	{
		if (login == uzytkownik[k].login)
		{
			klient = k;
			return uzytkownik[k].logowanie();
			
		}
	}
	
}
void _wplata(int k)
{
	uzytkownik[k].wplata();
}
void konto:: wplata()
{
	int kwota;
	cout << "PODAJ KWOTE KTORA CHCESZ WPLACIC: ";
	cin >> kwota;
	stan = stan + kwota;
	
}

void _stan_konta(int k)
{
	uzytkownik[k].stan_konta();
}
void konto:: stan_konta()
{
	cout <<"STAN KONTA: "<< stan;
}
void _wyplata(int k)
{
	uzytkownik[k].wyplata();
}
void konto::wyplata()
{
	int kwota;
	cout << "PODAJ KWOTE KTORA CHCESZ WYPLACIC: ";
	cin >> kwota;
	if (kwota >= 10000)
	{
		cout << "LIMIT JEDNORAZOWEJ WYPLATY WYNOSI 10.000";
	}
	else
	{
		if (kwota > stan)
		{
			cout << "NIEWYSTARCZAJACA ILOSC SRODKOW NA KONCIE";
		}
		else
		{
			stan = stan - kwota;
		}
	}
}