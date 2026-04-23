#include <iostream>

void printPyramid(int rows) {
    for(int i = 1; i <= rows; ++i) {
        for(int space = 1; space <= rows - i; ++space) {
            std::cout << "  ";
        }
        for(int j = 1; j <= 2 * i - 1; ++j) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
}

int main() {
    int r = 5;
    printPyramid(r);
    return 0;
}
