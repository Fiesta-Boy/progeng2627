#include <iostream>

int main(){
    std::string user_name;
    std::cout << "hello, what is your name?" << std::endl;
    std::cin >> user_name;
    std::string user_surname;
    std::cout << "what is your surname?" << std::endl;
    std::cin >> user_surname;
    std::cout << "nice to meet you " << user_name << " " << user_surname 
    << std::endl;
}