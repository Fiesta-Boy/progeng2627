#include <iostream>
#include <fstream>
#include <vector>

int main(int argc, char* argv[]) {
    char* fileName = argv[1];
    std::vector<int> v;

    std::fstream infile;

    infile.open(fileName);

    if (!infile.is_open()) {
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int temp;

    while (infile >> temp) {
        v.push_back(temp);
    }
    
    infile.close();
}