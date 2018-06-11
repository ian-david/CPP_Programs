#include <iostream>
#include <string>

int main(){
    std::string name;
    std::cout << "What is your name?";
    getline(std::cin, name);
    std::cout <<"Nice to meet you, ";
    std::cout << name;
    std::cout <<"!\n";
    std::cin.ignore();
    return 0;
}