#include <iostream>
using namespace std;

int main() {
    // Allocate memory first
    const int bRamSize  = 1000;
    char bRam[bRamSize] = {0};
    char *p0            = bRam;
    int coefficient     = 1;
    // Quantum math D:
    int p1 = *((int *)p0 + 256 * coefficient + 254);
    cout << p1;
}