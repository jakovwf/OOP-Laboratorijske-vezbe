#pragma once
#include<iostream>
using namespace std;
class vektor
{
private:
	int* niz;
	int dimenzija;
public:
	vektor():dimenzija(0),niz(nullptr){}
	vektor(int dimenzija):dimenzija(dimenzija),niz(new int[dimenzija]){}
	inline void postaviK(int k);
	const inline int vratiK(int k);
	void postaviNeopadajuci();
	void skalarniPro(vektor& vek2);
	int vratiIndSr();
};
inline void vektor::postaviK(int k) {
	if (k > dimenzija - 1) {
		return;
	}
	else {
		int indx = k;
		int broj;
		cout << "Unesi broj koji zelis na " <<indx << "poziciji" << endl;
		cin >> broj;
		niz[k] = broj;
	}
}
const inline int vektor::vratiK(int k) {
	if (k > dimenzija - 1) {
		return -100;
	}
	else {
		int pom = niz[k];
		return pom;
	}
}