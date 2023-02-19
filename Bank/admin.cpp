#include <iostream>
#include<conio.h>
#include"admin.h"
#include"konto.h"



using namespace std;



admin::admin()
{
	login = "admin";
	haslo = "admin";


}
int admin::logowanie()
{
	string _haslo, _login;
	cout << "LOGIN: ";
	cin >> _login;
	cout << "HASLO: ";
	cin >> _haslo;
	if (_login == login && _haslo == haslo)
	{

		system("cls");
		cout << "ZALOGOWANO POMYSLNIE, NACISNIJ DOWOLNY PRZYCSK BY KONTYNUOWAC" << endl;
		return 1;

	}
	else return 0;
}

