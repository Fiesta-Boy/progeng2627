#include <iostream>
#include <cmath>

double myabs(double n);

double mypow(double base, int exp);

int factorial(int n);

void myswap(int& n1, int& n2);

void bubblesort(int* arr, int size);

int main() {

    double number;
    std::cout << "enter any number" << std::endl;
    std::cin >> number;
    std::cout << "absolute value of the number " << myabs(number) << std::endl;

    // 2???
    std::cout << "std::pow test " << std::pow(4, 0.5) << std::endl;
    // WOOOOW I WAS RIGHT

    // mypow;p
    // 32?>?????????
    std::cout << "mypow test with 2 and 5 => " << mypow(2, 5) << std::endl;

    // factorial
    std::cout << "factorial test with 6 => " << factorial(6) << std::endl;

    int n1 = 5;
    int n2 = 6;
    std::cout << "swap n1 and n2: " << std::endl;
    std::cout << "n1 before: " << n1 << " n2 before: " << n2 << std::endl;
    myswap(n1 ,n2);
    std::cout << "n1 after: " << n1 << " n2 after: " << n2 << std::endl;

    int arr[] = {5, 2, 9, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "before: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    bubblesort(arr, size);

    std::cout << "after: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

}

double myabs(double n) {
    if (n >= 0) {
        return n;
    }
    return -n;
}

double mypow(double base, int exp) {
    if (exp < 0) {
        return -67;
    }
    double copyBase = 1.0;
    for (int i = 1; i < exp; i++) {
        copyBase = copyBase * base;
    }
    return copyBase;
}

int factorial(int n) {
    int ret = 1;
    while (n > 0) {
        ret *= n;
        n--;
    }
    return ret;
}

void myswap(int& n1, int& n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

void bubblesort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                myswap(arr[j], arr[j + 1]);
            }
        }
    }
}
