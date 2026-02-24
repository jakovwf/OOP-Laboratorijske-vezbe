#pragma once
class Buffer
{
private:
    int* niz;
    int velicinaNiza;
    int trenutniBroj;
public:
    Buffer();
    Buffer(int velicina);
    Buffer(const Buffer& other); // Added copy constructor
    ~Buffer();
    inline int vratiTrenutniBroj();
    void push();
    void pop();
    void ispisiSadrzaj();
    void duplirajVelicinu(); // Changed return type to void
    void izbaciNezauzete();
};

inline int Buffer::vratiTrenutniBroj() {
    return trenutniBroj;
}
