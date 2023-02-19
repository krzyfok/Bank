#include <iostream>
#include<conio.h>
#include"konto.h"
#include"admin.h"


using namespace std;



int main()
{
	admin admin;

	int id = 0;
	int klient=0;
	

	menu:
	char x;
	while (true)
	{
		cout << "ZALOGUJ SIE JAKO:" << endl;
		cout << "    1.KLIENT" << endl;
		cout << "2.ADMINISTRATOR" << endl;
		
		x = _getch();
		switch (x)
		{
		case '1':
			system("cls");
			
			while (true)
			{
				cout << " 1.ZALOGUJ" << endl;
				cout << "2.NOWE KONTO" << endl;
				cout << "  3.COFNIJ" << endl;
				x = _getch();
				switch (x)
				{
				case '1':
					system("cls");
					
					while (znajdz_konto(klient) != 1)
					{
						system("cls");
						cout << "BLAD LOGOWANIA, SPROBUJ PONOWNIE " << endl;
						
					}
					while (true)
					{
						char x;
						x = _getch();
						system("cls");
						cout << "PANEL KLIENTA" << endl;
						cout << "  1.WPLATA" << endl;
						cout << "  2.WYPLATA " << endl;
						cout <<  "3.STAN KONTA" << endl;
						cout << "  4.WYLOGUJ" << endl;
						
						switch (x)
						{
						case '1':
							_wplata(klient);							
							break;
						case '2':
							_wyplata(klient);
							break;
						case '3':
							_stan_konta(klient);
							break;
						case'4':
							system("cls");
							goto menu;

							break;
						default:
							
							break;
						}
					}
					break;
				case '2':
					
					system("cls");
					stworz_klase(id);
					id++;
					system("cls");
					goto menu;
					
				case '3':
					system("cls");
					goto menu;
				break;
					break;
				default:
					system("cls");
					cout << "BRAK OPCJI";
					break;
				}				
				cout << endl;
			}
			break;	
		
		case '2':
			system("cls");
			while (admin.logowanie() != 1)
			{
				system("cls");
				cout << "BLAD LOGOWANIA, SPROBUJ PONOWNIE "<<endl;
			}
			
			while (true)
			{
				char x;
				x = _getch();
				system("cls");
				cout << " PANEL ADMINISTRATORA" << endl;
				cout << "   1.USUN KONTO " << endl;
				cout << " 2.ZMIEN DANE KONTA " << endl;
				cout << "  3.WYSWIETL KONTA" << endl;
				cout << "      4.WYLOGUJ" << endl;
				
				switch (x)
				{
				case '1':
					usun_konto(id);
					id--;
					break;
				case '2':
					_zmien_dane();
					break;
				case '3':
					_wyswietlanie(id);
					break;
				case'4':
					system("cls");
					goto menu;
					
					break;
				default:
					
					break;
				}
			}
			break;
		default:
			
			break;
		}
		system("cls");
;		


	}
	
}


