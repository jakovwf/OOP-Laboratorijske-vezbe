#include "Poligon.h"
#include <cmath>
#include <iostream>
using namespace std;


Poligon::Poligon() {
	this->brTemena = 0;
}
Poligon::Poligon(int brTemena) {
	this->brTemena = brTemena;
	this->x = new float[brTemena];
	this->y = new float[brTemena];
}
Poligon::~Poligon() {
	delete[] x;
	delete[] y;
}
double Poligon::izracunajObima() {
	double o = 0;
	for (int i = 0; i < brTemena; i++) {
		int j = (i + 1) % brTemena; // povezuje poslednju tačku sa prvom
		o += sqrt(pow((x[j] - x[i]), 2) + pow((y[j] - y[i]), 2));
	}
	return o;
}

void Poligon::ucitajKoordinate() {
	cout << "Ucitaj koordinate prvo x pa y" << endl;
	for (int i = 0; i < brTemena; i++) {
		cout << "Ucitaj x za " << i + 1 << ". teme" << endl;
		cin >> x[i];
		cout << "Ucitaj y za " << i + 1 << ". teme" << endl;
		cin >> y[i];
	}
}
void Poligon::vratiNajudaljenije() {
	float x1, x2, y1, y2;
	double duzina=0;
	double duzina1;
	for (int i = 0; i < brTemena; i++) {
		for (int j = i + 1; j < brTemena; j++) {
			duzina1 = sqrt(pow((x[j] - x[i]), 2) + pow((y[j] - y[i]), 2));
			if (duzina1>duzina) {
				duzina = duzina1;
				x1 = x[i];
				x2 = x[j];
				y1 = y[i];
				y2 = y[j];
			}
		}
	}
	cout << "Dve najudaljenije tacke su tacke sa koordinatama:" << x1 << " " << y1 << "  i" << x2 << " " << y2 << endl;
}
void Poligon::vratiKoordinateTemena() {
	for (int i = 0; i < brTemena; i++) {
		cout << "Koordinate " << i + 1 << ".  temena su:" << x[i] << " i " << y[i] << endl;
	}
}
void Poligon::izbaciTeme(int brojTemena) {
	float pomX;
	float pomY;
	pomX = x[brojTemena];
	pomY = y[brojTemena];
	x[brojTemena] = x[brTemena - 1];
	y[brojTemena] = y[brTemena - 1];
	x[brTemena - 1] = pomX;
	y[brTemena - 1] = pomY;
	brTemena--;
}
