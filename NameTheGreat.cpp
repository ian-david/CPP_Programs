// Example program
#include <iostream>
#include <string>


int main()
{
 std::string name;
 std::cout <<"What is your name?\n";
 getline(std::cin, name);
 std::cout << "Nice to meet you, ";
 std::cout << name;
 std::cout << "!\n";
 std::cout << "Your name starts with letter " << name.front()
           << "\nYour name ends with letter " <<name.back()
           << "\nYour name has " << name.length() << " letters.\n";
           name.append(" the Great");
  std::cout << name;
 std::cin.ignore();
 return 0;
}