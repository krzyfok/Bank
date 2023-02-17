#include <iostream>
#include"admin.h"
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
		cout << "ZALOGOWANO POMYSLNIE";
		return 1;

	}
	else return 0;
}

void admin_panel()
{

}