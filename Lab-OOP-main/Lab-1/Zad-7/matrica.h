#pragma once
class matrica
{
private:
	int dimenzija;
	double **matricaa;
	char* naziv;
public:
	matrica();
	matrica(int dimenzija);
	inline int vraca();
	~matrica();
	double suma_red(int red);
	double suma_kol(int kol);
	void unos();
	void prikaz();
	void proizvod1(const matrica&m1);
	void proizvod2(const matrica&m2);
};
inline int matrica::vraca() {
	return dimenzija;
}
