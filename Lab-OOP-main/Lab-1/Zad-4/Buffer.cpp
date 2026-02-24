#include "Buffer.h"
#include <iostream>
using namespace std;

Buffer::Buffer() {
    trenutniBroj = 0;
    velicinaNiza = 0;
    niz = nullptr;
}

Buffer::Buffer(int velicina) {
    this->velicinaNiza = velicina;
    trenutniBroj = 0;
    niz = new int[velicinaNiza](); // Initialize with zeros
}

Buffer::Buffer(const Buffer& other) {
    velicinaNiza = other.velicinaNiza;
    trenutniBroj = other.trenutniBroj;
    niz = new int[velicinaNiza];
    for (int i = 0; i < trenutniBroj; i++) {
        niz[i] = other.niz[i];
    }
}

Buffer::~Buffer() {
    delete[] niz;
}

void Buffer::push() {
    if (trenutniBroj >= velicinaNiza) {
        cout << "Bafer je pun, dupliram velicinu." << endl;
        duplirajVelicinu();
    }

    int radnomBroj;
    cout << "Koji broj zelis da upises na kraju bafera?" << endl;
    cin >> radnomBroj;
    niz[trenutniBroj] = radnomBroj;
    trenutniBroj++;
}

void Buffer::pop() {
    if (trenutniBroj == 0) {
        cout << "Bafer je prazan!" << endl;
        return;
    }

    cout << "Poslednji clan bafera je: " << niz[trenutniBroj - 1] << endl;
    trenutniBroj--;
}

void Buffer::ispisiSadrzaj() {
    cout << "Sadrzaj bafera:" << endl;
    for (int i = 0; i < trenutniBroj; i++) {
        cout << niz[i] << " ";
    }
    cout << endl;
}

void Buffer::duplirajVelicinu() {
    int* noviNiz = new int[velicinaNiza * 2];
    for (int i = 0; i < trenutniBroj; i++) {
        noviNiz[i] = niz[i];
    }
    delete[] niz;
    niz = noviNiz;
    velicinaNiza *= 2;
}

void Buffer::izbaciNezauzete() {
    // This method now just adjusts the size to match the used elements
    velicinaNiza = trenutniBroj;
}
