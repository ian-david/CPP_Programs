#include <iostream>
using namespace std;

int main()
{
 int firstNumber;
 int secondNumber;
 cout << "Enter a number: ";
 cin >> firstNumber;
 cout << "Enter another number: ";
 cin >> secondNumber;
 cout << "The sum of the numbers is: " << firstNumber+secondNumber << endl;
 cout << "The difference of the numbers is: " << firstNumber-secondNumber << endl;
 cout << "The product of the numbers is: " << firstNumber*secondNumber << endl;
 cout << "The quotient of the numbers is: " << firstNumber/secondNumber << endl;
 cout << "The remainder of the numbers is: " << firstNumber%secondNumber << endl;
 cin.ignore();
 return 0;
}