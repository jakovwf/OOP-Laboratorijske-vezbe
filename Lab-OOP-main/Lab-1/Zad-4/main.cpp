#include "Buffer.h"
#include <iostream>
using namespace std;

int main() {
    Buffer buf1(10);
    for (int i = 0; i < 12; i++) {
        buf1.push();
    }

    buf1.pop();
    buf1.pop();
   
    buf1.ispisiSadrzaj();

    buf1.izbaciNezauzete();
    buf1.ispisiSadrzaj();
    Buffer* buf2 = new Buffer(buf1);
    buf2->ispisiSadrzaj();

    delete buf2;
    return 0;
}
