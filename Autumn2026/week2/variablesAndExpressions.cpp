#include <iostream>

double add() {
    double n1;
    double n2;
    std::cout << "1st number? " << std::endl;
    std::cin >> n1;
    std::cout << "2nd number? " << std::endl;
    std::cin >> n2;
    return n1 + n2;
}

int main() {
    std::cout << add() << std::endl;
}