#pragma once
#include <iostream>

using namespace std;

void ObliczenieBer(string fpath1, string fpath2);
uint8_t hammingDistance(uint8_t n1, uint8_t n2);

void PokazWynik(clock_t t1, clock_t t2, float ber, double err, double tot);