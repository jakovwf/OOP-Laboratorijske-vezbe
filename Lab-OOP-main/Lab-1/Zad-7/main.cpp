#include "matrica.h"
#include "iostream"
using namespace std;

int main() {
	matrica objekat(4);
	objekat.unos();
	cout << objekat.suma_kol(1);
	cout << endl;
	cout<<objekat.suma_kol(3);
	cout << endl;
	cout<<objekat.suma_red(2);
	cout << endl;
	cout<<objekat.suma_red(3);
	cout << endl;
	objekat.prikaz();

	return 0;
}
