#include "vektor.h"
#include <iostream>
#include <cmath>
using namespace std;

void vektor::postaviNeopadajuci() {
	for (int i = 0; i < dimenzija; i++) {
		for (int j = i + 1; j < dimenzija; j++) {
			if (niz[i] >= niz[j]) {
				int pom = niz[i];
				niz[i] = niz[j];
				niz[j] = pom;
			}
		}
	}
}
void vektor::skalarniPro(vektor& vek2) {
	int skalPorizvod=0;
	if (dimenzija == vek2.dimenzija) {
		for (int i = 0; i < dimenzija; i++) {
			skalPorizvod += niz[i] * vek2.niz[i];
		}
	}
	cout << "Skalarni proizvod ova dva vektora je: " << skalPorizvod;
}
int vektor::vratiIndSr() {
	int indNajblizeg=0;
	int zbirEl = 0;
	int diff;
	int srVr;
	for (int i = 0; i < dimenzija; i++) {
		zbirEl += niz[i];
	}
	srVr = zbirEl / dimenzija;
	diff = abs(niz[0] - srVr);
	for (int i = 1; i < dimenzija; i++) {
		int diff1 = abs(niz[i] - srVr);
		if (diff1 < diff) {
			diff = diff1;
			indNajblizeg = i;
		}
	}

	return indNajblizeg;
}