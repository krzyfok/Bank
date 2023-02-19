#include <iostream>

using namespace std;


class konto
{
	friend class admin;
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

	
	
};

void stworz_klase(int numer);

int znajdz_konto(int &klient);

void _wplata(int k);

void _stan_konta(int k);

void _wyplata(int k);
void _wyswietlanie(int k);
