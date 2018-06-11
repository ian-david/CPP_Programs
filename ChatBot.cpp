#include <iostream>
#include <string>


int main()
{
 std::string name;
 std::string age;
 std::string food;
 std::string pets;
 
 std::cout <<"What is your name?\n";
 getline(std::cin, name);
 std::cout << "Nice to meet you, ";
 std::cout << name;
 std::cout << "!\n";
 
  std::cout <<"How old are you?\n";
 getline(std::cin, age);
 std::cout << "Wow, I'm also ";
 std::cout << age;
 std::cout << "!\n";
 
  std::cout <<"What is your favorite food?\n";
 getline(std::cin, food);
 std::cout << "Great, I love ";
 std::cout << food;
 std::cout << " too! Seems we have a lot in common!\n";
 
 std::cout <<"Do you have a pet?\n";
 getline(std::cin, pets);
 std::cout << "Okay!\n";
 std::cout << "Anyway it was nice meeting you, " << name <<"! \n";
 std::cin.ignore();
 return 0;
}
