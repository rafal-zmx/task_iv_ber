/*Zawiera metody obliczaj¹ca*/
#include <sstream>
#include <iostream>
#include <fstream>
#include "obliczenia.h"
#include "pliki.h"


using namespace std;

uint8_t hammingDistance(uint8_t n1, uint8_t n2)
{
    uint8_t x = n1 ^ n2; // XOR
    uint8_t setBits = 0;
    while (x > 0)
    {
        setBits += x & 1;
        x >>= 1;
    }
    return setBits;
}

void ObliczenieBer(string fpath1, string fpath2)
{
    fstream plik1, plik2;

    clock_t t1 = 0;
    clock_t t2 = 0;
    float ber = 0;
    double err = 0;
    double tot = 0;

    ZapisLog("Liczenie BER...");
    plik1.open(fpath1.c_str(), ios::binary | ios::in);
    plik2.open(fpath2.c_str(), ios::binary | ios::in);
    char a = 0x00;
    char b = 0x00;
    t1 = clock();

    while (!plik1.eof())
    {
        plik1 >> a; //read 1 char from file 1
        plik2 >> b; //read 1 char from file 2
        if (!plik1.eof()) // till the end of the 1st file
        {
            err += hammingDistance(a, b); //add to the .err the number of different bits
            tot += 8; //add to the .tot the number of compared bits
        }
    }

    ber = err / tot; // calculate ber
    t2 = clock();
    ZapisLog("Zakoñczenie liczenia BER");
    PokazWynik(t1, t2, ber, err, tot);

    stringstream message;
    message << "Results are: " << std::endl;
    message << "BER: " << ber << std::endl;
    message << "Tot: " << tot << std::endl;
    message << "Err: " << err << std::endl;
    message << "Calc time: " << ((float)t2 - t1) / CLOCKS_PER_SEC << " sec " << std::endl;
    ZapisLog(message.str());
}

void PokazWynik(clock_t t1, clock_t t2, float ber, double err, double tot)
//void PokazWynik(string wiadomosc)
{
    cout << "Wynik: " << endl;
    cout << "BER: " << ber << endl;
    cout << "Tot: " << tot << endl;
    cout << "Err: " << err << endl;
    cout << "Calc time: " << ((float)t2 - t1) / CLOCKS_PER_SEC << " sec " << endl;
}