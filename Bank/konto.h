#include <iostream>

using namespace std;


class konto
{

	friend void usun_konto(int liczba, konto obj[100]);
	friend void zapis(int k, konto obj[100]);
private:
	string imie;
	string nazwisko;
	string haslo;
	long double stan;
	int id;
public:
	string login;
	void stworz(string _imie, string _nazwisko, string _login, string _haslo, long double _stan, int _id);
	
	int logowanie();
	void wplata();
	void wyplata();
	void stan_konta();
	void wyswietlanie();
	void zmien_dane();
	
	
};

void stworz_klase(int numer, konto obj[100]);

int znajdz_konto(int &klient, konto obj[100]);


void zapis(int k, konto obj[100]);


void _wyswietlanie(int k , konto obj[100]);
void _zmien_dane(konto obj[100]);

void usun_konto(int liczba, konto obj[100]);