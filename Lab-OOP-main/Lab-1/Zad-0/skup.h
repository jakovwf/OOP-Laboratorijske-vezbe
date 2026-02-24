#pragma once
class skup
{
private:
	int brel;
	int* nizel;
public:
	skup();
	skup(int brel);
	~skup();
	inline int vrbr() { return brel; };
	void izabazidup();
	void pripada();
	void ucitaj();
	void urediunera();
	void prikaz();

};

