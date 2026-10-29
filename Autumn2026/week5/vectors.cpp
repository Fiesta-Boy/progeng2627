#include <iostream>
#include <vector>
#include <limits>    

void occurences() {
    int n;
    int s;
    std::vector<int> v;
    std::cout << "enter number n for n numbers in the vector: " << std::endl;
    std::cin >> n;
    if (n < 1) {
        std::cout << "vector must have at least a single input " << std::endl;
    }
    while (n > 0) {
        int num;
        std::cout << "enter a number" << std::endl; 
        std::cin >> num;
        v.push_back(num);
        n--;
    }
    std::cout << "enter a number s for which to find occurences of: " << std::endl;
    std::cin >> s;
    int freq = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v.at(i) == s) {
            freq++;
        }
    }
    if (freq == 0) {
        std::cout << "there are no occurences of " << s << std::endl;
    } else {
        std::cout << "there are " << freq << " occurences of " << s << std::endl;
    }
}

int minIndex(std::vector<double>& vin) {
    double min = std::numeric_limits<double>::max();
    int minIndex = -1;

    for (int i = 0; i < vin.size(); i++) {
        if (vin[i] < min) {
            min = vin[i];
            minIndex = i;
        }
    }
    return minIndex;
}

void filterV(const std::vector<double>& vin, double t, std::vector<double>& vout) {
    for (int i = 0; i < vin.size(); i++) {
        if (vin[i] < t) {
            vout.push_back(vin[i]);
        }
    }
}

int main() {
    // test occurences
    occurences();

    // test minIndex
    std::vector<double> vin;
    vin.push_back(10);
    vin.push_back(50);
    vin.push_back(9.6);
    vin.push_back(0.00001);
    std::cout << minIndex(vin);

    // test filterV
    std::vector<double> v = {1.08, 99, 8, 9 ,4, 5, 56};
    std::vector<double> vout;
    filterV(v, 22, vout);
    std::cout << "vout values after filtering" << std::endl;
    for (int i = 0; i < vout.size(); i++) {
        std::cout << vout[i] << std::endl;
    }
}