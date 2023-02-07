#include <iostream>
using namespace std;

// Allocate memory first
const int B_RAM_SIZE = 100;
char bRam[B_RAM_SIZE];
int main() {
    // Manipulate the memory
    char *pointer;
    pointer = bRam;

    cout << "Output: " << int(pointer[1]) << endl;
    cout << "Output: " << int(*(pointer + 1)) << endl;
    cout << "Pointer size: " << sizeof(pointer) << " Bytes" << endl;
    cout << "Pointer size: " << sizeof(pointer[0]) << " Bytes" << endl;
}