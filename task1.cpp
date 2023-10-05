#include <iostream>
using namespace std;

int main() {
    double firstNumber, secondNumber;

    
   cout << "Enter the first number: ";
   cin >> firstNumber;

   
   cout << "Enter the second number: ";
    cin >> secondNumber;

    double minimum = (firstNumber < secondNumber) ? firstNumber : secondNumber;

   
    cout << "The minimum of " << firstNumber << " and " << secondNumber << " is: " << minimum << endl;

    return 0;
}