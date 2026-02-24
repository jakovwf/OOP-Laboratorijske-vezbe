#pragma once
class Poligon
{
private:
	int brTemena;
	float* x;
	float* y;
public:
	Poligon();
	Poligon(int brTemena);
	~Poligon();
	inline int vratiBrTemena();
	double izracunajObima();
	void ucitajKoordinate();
	void vratiNajudaljenije();
	void vratiKoordinateTemena();
	void izbaciTeme(int brojTemena);
};
inline int Poligon::vratiBrTemena() {
	return brTemena;
}
