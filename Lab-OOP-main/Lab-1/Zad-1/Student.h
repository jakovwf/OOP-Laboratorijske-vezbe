#pragma once
#include <iostream>
using namespace std;
class Student
{
private:
	char* ime;
	char* prezime;
	int brIndexa;
	int maxBrIspita;
	int brPolozenihIspita;
	int* ocene;
public:
	Student(int brIspita);
	~Student();
	inline void vratiBrIndOcene();
	void upisiPodatke();
	void dodajPoslednju();
	void prikaziOceneOpadajuce();
	void prikaziPodatke();
	void azuriraj();
};

inline void Student::vratiBrIndOcene(){
	cout << "Broj ind je: " << brIndexa << " Broj polozenih ispita je: " << brPolozenihIspita;
}


