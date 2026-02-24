#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(int brIspita) {
	maxBrIspita = brIspita;
	ocene = new int[maxBrIspita];
}
Student::~Student() {
	delete[] ocene;
}
void Student::upisiPodatke() {
	ime = new char[10];
	cout << "Unesi ime" <<"\n";
	cin >> ime;
	prezime = new char[10];
	cout << "Unesi prezime" << "\n";
	cin >> prezime;
	cout<<"Unesi br indeksa"<< "\n";
	cin >> brIndexa;
	cout<<"Unesite broj polozenih ispita"<<"\n";
	cin >> brPolozenihIspita;

	for (int i = 0; i < brPolozenihIspita; i++) {
		cout << "Unesite " << i + 1 << ". ocenu"<< "\n";
		cin >> ocene[i];
	}
}
void Student::dodajPoslednju() {
	int poslednjaOcena;
	cout<<"unesi poslednju ocenu: "<< "\n";
	cin >> poslednjaOcena;
	ocene[brPolozenihIspita++] = poslednjaOcena;
}
void Student::prikaziPodatke() {
	cout << "Podaci o studentu: " << "\n";
	cout << "Ime: " << ime << " Prezime: " << prezime << "\n";
	cout << "Broj indeksa: " << brIndexa << "\n";
	cout << "Broj polozenih ispita " << brPolozenihIspita << "\n";
	cout << "Ocene: " << "\n";
	for (int i = 0; i < brPolozenihIspita; i++) {
		cout<<ocene[i]<< "\n";
	}
}
void Student::prikaziOceneOpadajuce() {
	for (int i = 0; i < brPolozenihIspita; i++) {
		for (int j = 1; j < brPolozenihIspita; j++) {
			if (ocene[i] < ocene[j]) {
				int pom = ocene[i];
				ocene[i] = ocene[j];
				ocene[j] = pom;
			}
		}
	}
	cout << "Ocene su u opadajucem redosledu: " << "\n";
	for (int k = 0; k < brPolozenihIspita; k++) {
		cout<<ocene[k]<< "\n";
	}
}

void Student::azuriraj() {
	cout<<"Azuriraj ime studenta"<< "\n";
	cin >> ime;
	cout<<"Azuriraj prezime"<< "\n";
	cin >> prezime;
}
