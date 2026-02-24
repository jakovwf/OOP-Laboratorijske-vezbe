#include "matrica.h"
#include "iostream"
using namespace std;


matrica::matrica() :dimenzija(20) {
	matricaa = new double*[dimenzija];
	for (int i = 0;i < dimenzija;i++) {
		matricaa[i] = new double[dimenzija];
	}
}
matrica::matrica(int dimenzija) {
	this->dimenzija = dimenzija;
	this->matricaa = new double* [this->dimenzija];
	for (int i = 0;i < dimenzija;i++) {
		matricaa[i] = new double[this->dimenzija];
	}
 }
matrica::~matrica() {
	for (int i = 0;i < dimenzija;i++) {
		delete[]matricaa[i];
	}
	delete[]matricaa;
}
double matrica::suma_red(int red) {
	double suma=0;
	for (int j = 0;j < dimenzija;j++) {
		suma += matricaa[red][j];
	}
	return suma;
}
double matrica::suma_kol(int kol) {
	double suma = 0;
	for (int i = 0;i < dimenzija;i++) {
		suma += matricaa[i][kol];
	}
	return suma;
}
void matrica::unos() {
	for (int i = 0;i < dimenzija;i++) {
		for (int j = 0;j < dimenzija;j++) {
			cin >> matricaa[i][j];
		}
	}
}
void matrica::prikaz() {
	for (int i = 0;i < dimenzija;i++) {
		for (int j = 0;j < dimenzija;j++) {
			cout << matricaa[i][j] << " ";
		}
		cout << endl;
	}
}
void matrica::proizvod2(const matrica& m2) {
	double** pomocna = new double* [dimenzija];
	for (int i = 0;i < dimenzija;i++) {
		pomocna[i] = new double[dimenzija];
	}
	for (int i = 0;i < dimenzija;i++) {
		for (int j = 0;j < dimenzija;j++) {
			for (int k = 0;k < dimenzija;k++) {
				pomocna[i][j] += this->matricaa[i][k] * m2.matricaa[k][j];
			}
		}
	}
	for (int i = 0;i < dimenzija;i++) {
		for (int j = 0;j < dimenzija;j++) {
			cout << pomocna[i][j];
		}
	}
}
void matrica::proizvod1(const matrica& m1) {
	double** pomocna = new double* [this->dimenzija * m1.dimenzija];
	for (int i = 0;i < this->dimenzija * m1.dimenzija;i++) {
		pomocna[i] = new double[this->dimenzija * m1.dimenzija];
	}
	for (int i = 0;i <dimenzija;i++) {
		for (int j = 0;j < dimenzija;j++) {
			for (int k = 0;k <m1.dimenzija;k++) {
				for (int l = 0;l < m1.dimenzija;l++) {
					int red = i * m1.dimenzija + k;
					int kolona = j * m1.dimenzija + l;
					pomocna[red][kolona] = this->matricaa[i][j] * m1.matricaa[k][l];
				}
			}
		}
	}
	for (int i = 0;i < dimenzija;i++) {
		for (int j = 0;j < dimenzija;j++) {
			cout << pomocna[i][j] << " ";
		}
		cout << endl;
	}
}
