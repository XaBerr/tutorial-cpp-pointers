#include <iostream>
#include <vector>
using namespace std;

void doStuff(vector<char> &buffer) {
    for (vector<char>::iterator iter = buffer.begin(); iter != buffer.end(); iter++) {
        *iter = 2;
        cout << int(*iter);
    }
}

int main() {
    // Allocate memory first
    const int bRamSize = 3;
    vector<char> bRam  = {0, 1, 0};

    doStuff(bRam);
}