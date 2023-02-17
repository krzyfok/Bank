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
		cout << "Zaloguj sie jako:" << endl;
		cout << "1.Klient" << endl;
		cout << "2.Administrator" << endl;
		
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
					
					
					
					break;
				default:
					
					break;

				}
				break;
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
				cout << "PANEL ADMINISTRATORA" << endl;
				cout << "   1.USUN KONTO " << endl;
				cout << " 2.ZMIEN DANE KONTA " << endl;
				cout << "  3.WYSWIETL KONTA" << endl;
				cout << "      4.WYLOGUJ" << endl;
				
				switch (x)
				{
				case '1':

					break;
				case '2':
					break;
				case '3':
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
			cout << "brak opcji";
			break;
		}
		system("cls");
;		


	}
	
}


