#include "Poligon.h"
#include <iostream>
using namespace std;

int main(){
	Poligon Prvi(5);
	Prvi.ucitajKoordinate();
	cout << "Obim je: " << Prvi.izracunajObima() << endl;
	Prvi.vratiBrTemena();
	Prvi.vratiNajudaljenije();
	Prvi.izbaciTeme(0);
	Prvi.vratiKoordinateTemena();
	return 0;
}