#include "String.h"
#include <cstring>
#include <iostream>
using namespace std;


String::String() {
	duzina = 0;
	niz = nullptr;
}
String::String(int duzina){
	this->duzina = duzina;
	niz = new char[this->duzina];
}
String::~String() {
	delete[] niz;
}
int String::prodnadjiPodstring(const char* pdStr) {
	for (int i = 0; i < duzina; i++) {  // krecemo se po prvom stringu 
		bool nadjeno = true;   // flag promenljiva , pretpostavljamo da je pronadjen pocetak podstringa
		for (int j = 0; j < strlen(pdStr); j++) { // krecemo se po drugom stringu
			if (niz[i + j] != pdStr[j]) {  // ako se slova ne poklapaju ne ispiotujemo dalje nego izlazimo iz for petlje
				nadjeno = false;  //ako je uslov ispunjen stavlja se flag na false
				break;  // izlazimo iz for  <- vracamo se u prvi 
			} // ako prodje kroz drugi string i flag se ne promeni onda je flag i dalje true
		}
		if (nadjeno) {   // ako je true vraca i jer je to prva pozicija gde se slova poklapaju
			return i; // posle toga ide kroz for petlju da bi pregledalo da li se poklapaju oba stringa do kraja drugog
		}
	}
	return -1; // ako je flag na false onda se vraca vrednost kojuy ne ocekujemo da bi znali da je u pitanju greska
}
void String::ucitajString() {
	cout << "Unesi string:" << endl;
	for (int i = 0; i < duzina; i++) {
		cin >> niz[i];
	}
}
void String::prikaziStr() {
	cout << "Tvoj string:" << endl;
	for (int i = 0; i < duzina; i++) {
		cout<< niz[i];
	}
	cout << endl;
}
