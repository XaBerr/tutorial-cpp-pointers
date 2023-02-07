#include <iostream>
using namespace std;

void doStuff(char *buffer, const int size) {
}

int main() {
    // Allocate memory first
    const int bRamSize  = 3;
    char bRam[bRamSize] = {0, 1, 0};

    // Manipulate the memory
    doStuff(bRam, bRamSize);
}