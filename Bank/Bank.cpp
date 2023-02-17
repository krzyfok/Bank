#include <iostream>
#include<conio.h>
#include"konto.h"
#include"admin.h"

using namespace std;



int main()
{
	admin admin;
	int id = 1;
	cout << "Zaloguj sie jako:" << endl;
	cout << "1.Klient" << endl;
	cout << "2.Administrator" << endl;
	char x;

	while (true)
	{
		x = _getch();
		switch (x)
		{
		case '1':
			system("cls");
			cout << "1.Zaloguj" << endl;
			cout << "2.Utworz konto" << endl;
			while (true)
			{
				x = _getch();
				switch (x)
				{
				case '1':
					
					break;
				case '2':
					stworz_klase();
					
					break;
				default:
					cout << "brak opcji";
					break;

				}
				
				cout << endl;
			}
			break;
		case '2':
			while (admin.logowanie() != 1)
			{
				system("cls");
				cout << "BLAD LOGOWANIA"<<endl;
			}
			
			break;
		default:
			cout << "brak opcji";
		}

		cout << endl;
	}

}


