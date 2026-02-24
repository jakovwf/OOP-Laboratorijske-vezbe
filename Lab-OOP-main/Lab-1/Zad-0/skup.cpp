#include "skup.h"
#include <iostream>
using namespace std;

skup::skup() {
	brel = 0;
	nizel = nullptr;
}
skup::skup(int brel) {
	this->brel = brel;
	nizel = new int[brel];
}
skup::~skup() {
	delete[] nizel;
}

void skup::izabazidup() {
	for (int i = 0; i < brel; i++) {
		for (int j = 1; j < brel; j++) {
			if (nizel[i] == nizel[j]) {
				int pom = nizel[brel - 1];
				nizel[brel - 1] = nizel[j];
				nizel[j] = pom;
				brel--;
				j--;
			}
		}
	}
}
void skup::pripada() {
	int zadbr;
	cout << "zadati element";
	cin >> zadbr;
	int c = 0;
	for (int i = 0; i < brel; i++) {
		if (nizel[i] == zadbr) {
			c = 1;
		}
	}
	if ( c == 0) { cout << "ne pripada"; }
	else
	{
		cout << "pripada";
	}
}
void skup::ucitaj() {
	for (int i = 0; i < brel; i++) {
		cin >> nizel[i];
	}
}
void skup::urediunera() {
	for (int i = 0; i < brel; i++) {
		for (int j = 1; j < brel; j++) {
			if (nizel[i] < nizel[j]) {
				int pom = nizel[i];
				nizel[i] = nizel[j];
				nizel[j] = pom;
			}
		}
	}
}
void skup::prikaz() {
	for (int i = 0; i < brel; i++) {
		cout << nizel[i];
	}
}