#include <iostream>

int main() {
    int height;
    std::cout << "what is your height in centimeters? " << std::endl;
    std::cin >> height;
    int weight;
    std::cout << "what is your weight in kilograms?" << std::endl;
    std::cin >> weight;
    double bmi = weight / ((height / 100.0) * (height / 100.0));
    std::cout << "your bmi is " << bmi << std::endl;
}