#include "vektor.h"
#include <iostream>
using namespace std;

int main() {
	vektor v1(3);
	for (int i = 0; i < 3; i++) {
		v1.postaviK(i);
	}
	v1.postaviNeopadajuci();

	for (int j = 0; j < 3; j++) {
		cout<<v1.vratiK(j)<<endl;
	}
	vektor* v2 = new vektor(v1);

	v1.skalarniPro(*v2);
	cout << endl;
	cout<<"Indeks je: " << v1.vratiIndSr() << endl;
	delete v2;
	
	return 0;
}
