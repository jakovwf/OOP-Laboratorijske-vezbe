#include <iostream>
#include "Image.h"
using namespace std;

int main() {
	Image* Slika;
	Slika = new Image(3);
	Slika->unesiSadrzaj();
	Slika->prikaziSadrzaj();
	Slika->invertuj();
	Slika->prikaziSadrzaj();
	Slika->kropuj();
	Slika->prikaziSadrzaj();
	delete Slika;
	return 0;
}
