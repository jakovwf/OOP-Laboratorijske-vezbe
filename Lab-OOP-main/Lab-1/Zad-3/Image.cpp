#include "Image.h"

Image::Image() {
	velicina = 0;
	Slika = nullptr;
	lokacija = nullptr;
}
Image::Image(int velicina) {
	this->velicina = velicina;
	Slika = new int* [velicina];
	for (int i = 0; i < velicina; i++) {
		Slika[i] = new int[velicina];
	}
	lokacija = new char[10];
}
Image::~Image() {
	for (int i = 0; i < velicina; i++) {
		delete[] Slika[i];
	}
	delete[] Slika;
} 
void Image::invertuj() {
	for (int i = 0; i < velicina; i++) {
		for (int j =0; j < velicina; j++) {
			if (Slika[i][j] == 0) {
				Slika[i][j] = 1;
			}
			else {
				Slika[i][j] = 0;
			}
		}
	}
}
void Image::unesiSadrzaj() {
	cout << "Unesi sadrzaj matrice - 0 ili 1" << endl;
	for (int i = 0; i < velicina; i++) {
		for (int j = 0; j < velicina; j++) {
			cout << "Unesi broj u: " << i + 1 << ". vrstu i " << j + 1 << ". kolonu" << endl;
			cin >> Slika[i][j];
		}
	}
}
void Image::prikaziSadrzaj() {
	cout << "Sadrzaj je: " << endl;
	for (int i = 0; i < velicina; i++) {
		for (int j = 0; j < velicina; j++) {
			cout << Slika[i][j]<<" ";
		}
		cout << endl;
	}
}
void Image::kropuj() {
	velicina--;
}