#include <iostream>
#include<conio.h>
#include"konto.h"
#include"admin.h"


using namespace std;



int main()
{
	admin admin;
	konto uzytkownik[100];

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
					
					while (znajdz_konto(klient, uzytkownik) != 1)
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
							uzytkownik[klient].wplata();
														
							break;
						case '2':
							uzytkownik[klient].wyplata();
							break;
						case '3':
							uzytkownik[klient].stan_konta();
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
					stworz_klase(id, uzytkownik);
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
				cout << "4.ZAPISZ DANE DO PLIKU" << endl;
				cout << "      5.WYLOGUJ" << endl;
				
				switch (x)
				{
				case '1':
					usun_konto(id, uzytkownik);
					id--;
					break;
				case '2':
					_zmien_dane(uzytkownik);
					break;
				case '3':
					_wyswietlanie(id, uzytkownik);
					break;
				case '4':
					zapis(id, uzytkownik);
					break;
				case'5':
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


