#pragma once
#include <iostream>
using namespace std;
class Image
{
private:
	int velicina;
	int** Slika;
	char* lokacija;
public:
	Image();
	Image(int velicina);
	~Image();
	inline void vratiDimenziju();
	void invertuj();
	void unesiSadrzaj();
	void prikaziSadrzaj();
	void kropuj();
};
inline void Image::vratiDimenziju() {
	cout << "Velicina matrice je:" << velicina << endl;
}

