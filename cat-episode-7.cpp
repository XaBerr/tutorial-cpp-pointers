#include <iostream>
#include <vector>
using namespace std;

void doStuff(vector<char> &buffer) {
    for (int i = 0; i < buffer.size(); i++) {
        buffer[i] = 2;
        cout << int(buffer[i]);
    }
}

int main() {
    // Allocate memory first
    const int bRamSize = 3;
    vector<char> bRam  = {0, 1, 0};

    doStuff(bRam);
}