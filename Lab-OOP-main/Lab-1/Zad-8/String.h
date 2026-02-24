#pragma once
class String
{
private:
	int duzina;
	char* niz;
public:
	String();
	String(int duzina);
	~String();
	inline int vratiDuzinu();
	int prodnadjiPodstring(const char*pdStr);
	void ucitajString();
	void prikaziStr();
};
inline int String::vratiDuzinu() {
	return duzina;
}
