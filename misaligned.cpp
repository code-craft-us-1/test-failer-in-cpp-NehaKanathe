#include <iostream>
#include <iomanip>
#include <cassert>

int printNumber(int i, int j) {
    return i * 5 + j + 1;
}

int printColorMap() {
    const char* majorColor[] = { "White", "Red", "Black", "Yellow", "Violet" };
    const char* minorColor[] = { "Blue", "Orange", "Green", "Brown", "Slate" };
    int i = 0, j = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            std::cout << std::setw(3) << printNumber(i,j) << " | " << std::setw(6) << majorColor[i] << " | " << std::setw(6) << minorColor[j] << "\n";
        }
    }
    return i * j;
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    assert(printNumber(0, 0) == 1);
    std::cout << "All is well (maybe!)\n";
    return 0;
}
