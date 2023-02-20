#include <iostream>

#include"konto.h"
#include"admin.h"



using namespace std;

void konto::stworz(string _imie, string _nazwisko,string _login, string _haslo, long double _stan, int _id)
{
	imie = _imie;
	nazwisko = _nazwisko;
	login = _login;
	haslo = _haslo;
	stan = _stan;
	id = _id;
}


void stworz_klase(int nr, konto obj[100])
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
	obj[nr].stworz(imie, nazwisko, login, haslo, stan, id);
	
	
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


int znajdz_konto(int &klient, konto obj[100])
{
	string login;
	cout << "LOGIN: ";
	cin >> login;
	
	for (int k = 0;k < 100;k++)
	{
		if (login == obj[k].login)
		{
			klient = k;
			return obj[k].logowanie();
			
		}
	}
	
}

void konto:: wplata()
{
	int kwota;
	cout << "PODAJ KWOTE KTORA CHCESZ WPLACIC: ";
	cin >> kwota;
	stan = stan + kwota;
	
}


void konto:: stan_konta()
{
	cout <<"STAN KONTA: "<< stan;
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

void konto::wyswietlanie()
{
	printf("|%3d |%10s|%10s|%15.2f|\n", id, nazwisko.c_str(), imie.c_str(), stan);
	printf("--------------------------------------------\n");
	
}
void _wyswietlanie(int k, konto obj[100])
{
	printf("--------------------------------------------\n");
	printf("| ID | NAZWISKO |   IMIE   |  STAN  KONTA  |\n");
	printf("--------------------------------------------\n");
	for (int i = 0;i < k;i++)
	{
		obj[i].wyswietlanie();
	}
}

void _zmien_dane(konto obj[100])
{
	int id;
	cout << "PODAJ ID KONTA KTOREGO DANE CHCESZ ZMIENIC: ";
	cin >> id;
	obj[id-1].zmien_dane();

}

void konto::zmien_dane()
{
	string nimie, nnazwisko;
	cout << "PODAJ NOWE IMIE I NAZWISKO" << endl << "IMIE: ";
	cin >> nimie;
	cout << "NAZWISKO: ";
	cin >> nnazwisko;
	imie = nimie;
	nazwisko = nnazwisko;
}

void usun_konto(int liczba, konto obj[100])
{
	int id;
	cout << "PODAJ ID KONTA KTORE CHCESZ USUNAC: ";
	cin >> id;
	if (id-1 >= liczba)
	{
		cout << "BRAK KONTA O PODANYM ID";
	}
	else
	{
		for (;id <= liczba;id++)
		{
			obj[id-1] = obj[id];
			obj[id - 1].id -= 1;
			
		}
	}
}