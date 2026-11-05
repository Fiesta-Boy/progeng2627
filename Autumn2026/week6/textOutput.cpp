#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout);

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout);

void populate_freq_map(const std::vector<std::string>& vin, std::unordered_map<std::string, int>& freq);

void populate_set(const std::vector<std::string> vin, std::unordered_set<std::string>& sout);

void extract_inventory(std::vector<std::string>& vout, std::ifstream& infile);

int main(int argc, char** argv) {
    char* fileName1 = argv[1];
    char* fileName2 = argv[2];
    std::string fileName3 = "intersection.txt";
    std::string fileName4 = "union.txt";

    std::ifstream infile1;
    std::ifstream infile2;
    std::ofstream outfile1;
    std::ofstream outfile2;

    infile1.open(fileName1);
    infile2.open(fileName2);
    outfile1.open(fileName3);
    outfile2.open(fileName4);

    if (!infile1.is_open()) {
        std::cout << "failed to open the file" << fileName1 << std::endl;
        return EXIT_FAILURE;
    }

    if (!infile2.is_open()) {
        std::cout << "failed to open the file" << fileName2 << std::endl;
        return EXIT_FAILURE;
    }

    if (!outfile1.is_open()) {
        std::cout << "failed to open the file" << fileName3 << std::endl;
        return EXIT_FAILURE;
    }

    if (!outfile2.is_open()) {
        std::cout << "failed to open the file" << fileName4 << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<std::string> vin1;
    std::vector<std::string> vin2;
    extract_inventory(vin1, infile1);
    extract_inventory(vin2, infile2);

    std::vector<std::string> u_vout;
    std::vector<std::string> i_vout;
    union_vector(vin1, vin2, u_vout);
    intersection_vector(vin1, vin2, i_vout);

    for (std::string s : i_vout) {
        outfile1 << s << std::endl;
    }

    for (std::string s : u_vout) {
        outfile2 << s << std::endl;
    }
    
    outfile1.close();
    outfile2.close();
    infile1.close();
    infile2.close();
}


void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {
    std::unordered_set<std::string> sout;
    populate_set(vin1, sout);
    populate_set(vin2, sout);
    for (std::string s : sout) {
        vout.push_back(s);
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {
    std::unordered_set<std::string> s1(vin1.begin(), vin1.end());
    std::unordered_set<std::string> added;
    for (const std::string& s : vin2) {
        if (s1.count(s) && added.insert(s).second) {
            vout.push_back(s);
        }
    }
}

void populate_set(const std::vector<std::string> vin, std::unordered_set<std::string>& sout) {
    for (std::string s : vin) {
        sout.insert(s);
    }
}

void extract_inventory(std::vector<std::string>& vout, std::ifstream& infile) {
    std::string temp;
    while (infile >> temp) {
        vout.push_back(temp);
    }
}