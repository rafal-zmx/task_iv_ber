#include <iostream>
#include <fstream>
#include <stdio.h>
#include <ctime>
#include "menu.h"
#include "pliki.h"
#include "obliczenia.h"

using namespace std;

int main()
{
	bool CzyWyjsc = true;

	while (CzyWyjsc)
	{
		system("cls");
		PokazMenu();

		short int wybor = 0;
		cin >> wybor;

		if (!cin)
		{
			cin.clear();
			cin.ignore(1000, '\n');
		}

		switch (wybor)
		{
		case 1:
		{
			system("cls");
			cout << "1. Test 1: Przygotuj dwa identyczne pliki zawieraj¹ce binarnie zapisana\n   wartosc 0x55. Kazdy plik po 100 Bajtow." << endl;

			ZapisLog("Utworzenie pliku \"plik_1.bin\"");
			UtworzPlik("plik_1.bin", 100, 0xFF);

			ZapisLog("Utworzenie drugiego pliku \"plik_2.bin\"");
			UtworzPlik("plik_2.bin", 100, 0xFF);

			ObliczenieBer("plik_1.bin", "plik_2.bin");

			system("pause");
			break;
		}
		case 2:
		{
			system("cls");
			cout << "2. Test 2: Przygotuj dwa pliki kazdy po 100 bajtow.Pierwszy zawiera \n   binarnie zapisana wartosc 0x55. Drugi plik rozni siê od pierwszego o dowolne 10 bitow." << endl;

			ZapisLog("Utworzenie pliku \"plik_1.bin\"");
			UtworzPlik("plik_1.bin", 100, 0xFF);

			ZapisLog("Utworzenie drugiego pliku \"plik_2.bin\"");
			UtworzPlik("plik_2.bin", 100, 0xFE);

			ObliczenieBer("plik_1.bin", "plik_2.bin");

			system("pause");

			break;
		}
		case 3:
		{
			system("cls");
			cout << "3. Test 3: Przygotuje dwa pliki kazdy po 400 MB.Pierwszy zawiera \n   binarnie zapisana wartosc 0x55. Drugi plik zawiera binarnie zapisana wartosc 0x50." << endl;

			ZapisLog("Utworzenie pliku \"plik_1.bin\"");
			UtworzPlik("plik_1.bin", 400000000, 0x55);

			ZapisLog("Utworzenie drugiego pliku \"plik_2.bin\"");
			UtworzPlik("plik_2.bin", 400000000, 0x50);

			ObliczenieBer("plik_1.bin", "plik_2.bin");

			system("pause");
			break;
		}
		case 4:
		{
			CzyWyjsc = false;
			break;
		}
		default:
		{
			system("cls");

			CzyWyjsc = true;
			break;
		}

		}
	}
	exit(0);
}