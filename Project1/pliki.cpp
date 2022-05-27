/*Zawiera metody do edycji plików*/
#include <iostream>
#include <fstream>
#include <ctime>
#include "pliki.h"


using namespace std;

void ZapisLog(string wiadomosc)
{
	fstream plik;
	plik.open("log.txt", ios::app);


	time_t czas;
	time(&czas);

	char* BuforCzasu = new char[100];
	ctime_s(BuforCzasu, 100, &czas);

	plik << "czas " << BuforCzasu << wiadomosc << endl;
	//plik << "czas: " + local_time->tm_mon + '.' + local_time->tm_mday + '.' + local_time->tm_year + ' ';
	//plik << 1 + local_time->tm_hour + 1 + local_time->tm_min + 1 + local_time->tm_sec;

	plik.close();
}

void UtworzPlik(string nazwa, int liczba, char wartosc)
{
	fstream plik;

	plik.open(nazwa.c_str(), std::ios::binary | std::ios::out);
	for (int i = 0; i < liczba; i++)
	{
		plik.write((char*)&wartosc, 1);
	}
	plik.close();
}