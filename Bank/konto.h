#include <iostream>

using namespace std;

class konto
{
private:
	string imie;
	string nazwisko;
	long double stan;
	int id;
public:
	konto(string _imie, string _nazwisko, long double _stan, int _id);
	void wypisz();
	friend class admin;
	
};

void stworz_klase();
