#include "menu.h"
#include <iostream>


using namespace std;

void PokazMenu()
{
	cout << "Rafal Abucewicz nr. indeksu: zadanie IV" << endl << endl;
	cout << "Menu" << endl;
	for (int i = 0; i < 87; i++) cout << "_";
	cout << endl;
	cout << "1. Test 1: Przygotuj dwa identyczne pliki zawieraj�ce binarnie zapisana\n   wartosc 0x55. Kazdy plik po 100 Bajtow." << endl << endl;
	cout << "2. Test 2: Przygotuj dwa pliki ka�dy po 100 bajt�w. Pierwszy zawiera bin\n   arnie zapisan� warto�� 0x55. Drugi plik r�ni si� od pierwszego o dowolne 10 bit�w." << endl << endl;
	cout << "3. Test 3: Przygotuje dwa pliki ka�dy po 400 MB. Pierwszy zawiera binarn\n   ie zapisan� warto�� 0x55. Drugi plik zawiera binarnie zapisan� warto�� 0x50." << endl << endl;
	cout << "4. Zamknij" << endl;
	for (int i = 0; i < 87; i++) cout << "_" ;
	cout << endl;
}