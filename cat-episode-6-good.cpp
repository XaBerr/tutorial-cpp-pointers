#include <iostream>
using namespace std;

const int B_RAM_SIZE = 3;

void doStuff(char (&buffer)[B_RAM_SIZE]) {
    for (int i = 0; i < B_RAM_SIZE; i++) {
        buffer[i] = 2;
        cout << int(buffer[i]);
    }
}

int main() {
    // Allocate memory first
    char bRam[B_RAM_SIZE] = {0, 1, 0};

    doStuff(bRam);
}