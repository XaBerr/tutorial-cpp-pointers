#include <iostream>
using namespace std;

int main() {
    // Allocate memory first
    const int bRamSize  = 3;
    char bRam[bRamSize] = {0, 1, 0};

    // Not Fancy
    char *myExamplePointer = bRam;
    while (myExamplePointer < bRam + bRamSize)
        cout << *(myExamplePointer++);

    // Fancy
    char *myExamplePointer = bRam;
    for (int i = 0; i < bRamSize; i++)
        cout << myExamplePointer[i];
}