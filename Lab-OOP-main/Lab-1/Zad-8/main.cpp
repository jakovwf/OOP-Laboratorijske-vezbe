#include "String.h"

#include <iostream>
using namespace std;

int main() {
	String str1(7);
	str1.ucitajString();
	str1.prikaziStr();
	cout<<"Postring pocinje: " << str1.prodnadjiPodstring("ana") << endl;
	return 0;
}
