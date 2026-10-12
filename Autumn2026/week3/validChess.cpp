#include <iostream>

int main() {
    int hInit, vInit, hDest, vDest;
    std::cout << "Please input the initial coordinates of the knight separated by a space (horizontal followed by vertical)" << std::endl;
    std::cin >> hInit >> vInit;
    std::cout << "Please input the target coordinates of the knight separated by a space (horizontal followed by vertical)" << std::endl;
    std::cin >> hDest >> vDest;

    int hDiff = std::abs(hDest - hInit);
    int vDiff = std::abs(vDest - vInit);

    if ((hDiff == 2 && vDiff == 1) || (hDiff == 1 || vDiff == 2)) {
        std::cout << "valid chess move";
    }
    else {
        std::cout << "invalid chess move";
    }
}