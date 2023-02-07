#include <iostream>
using namespace std;

void doStuff(char *buffer, const int size) {
    char *myExamplePointer = buffer;
    while (myExamplePointer < buffer + size) {
        (*myExamplePointer) = 2;
        cout << int(*(myExamplePointer));
        myExamplePointer++;
    }
}

int main() {
    // Allocate memory first
    const int bRamSize  = 3;
    char bRam[bRamSize] = {0, 1, 0};

    doStuff(bRam, bRamSize);
}