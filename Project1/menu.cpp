#include "menu.h"
#include <iostream>
#include <windows.h>
#include <cstdio>


using namespace std;

void PokazMenu()
{
    cout << "Rafal Abucewicz nr. indeksu: zadanie IV" << endl << endl << endl;

    cout << endl;
    cout << "  1. Test 1: Przygotuj dwa identyczne pliki zawierajace binarnie zapisana\n     wartosc 0x55. Kazdy plik po 100 Bajtow." << endl << endl;
    cout << "  2. Test 2: Przygotuj dwa pliki kazdy po 100 bajtow. Pierwszy zawiera binarnie\n      zapisana wartosc 0x55. Drugi plik rozni się od pierwszego o dowolne 10 bitow." << endl << endl;
    cout << "  3. Test 3: Przygotuje dwa pliki kazdy po 400 MB. Pierwszy zawiera \n     binarnie zapisana wartosc 0x55. Drugi plik zawiera binarnie zapisana wartosc 0x50." << endl << endl;
    cout << "  4. Zamknij" << endl;
    for (int i = 0; i < 87; i++) cout << "_";
    cout << endl;
}

void PoziomeLinie()
{
    COORD l;
    for (int i = 3; i < 13; i += 3)
    {
        for (int j = 1; j < 86; j++)
        {
            l.Y = i;
            l.X = j;
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), l);
            cout << "_";
        }
    }
    l.Y = 15;
    l.X = 0;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), l);
    cout << endl << endl;
}

void PionoweLinie()
{
    COORD lewa;
    for (int i = 4; i < 15; i++)
    {
        lewa.Y = i;
        lewa.X = 0;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), lewa);
        cout << "|";
    }
    COORD prawa;
    for (int i = 4; i < 15; i++)
    {
        prawa.Y = i;
        prawa.X = 87;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), prawa);
        cout << "|";
    }
}
