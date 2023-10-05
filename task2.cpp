#include <iostream>
#include 
using namespace std;

int main() {
    double base, exponent;

    
   cout << "Enter the base number: ";
    cin >> base;

    
   cout << "Enter the exponent: ";
   cin >> exponent;

    
    double result = std::pow(base, exponent);

   cout << base << " raised to the power " << exponent << " is: " << result <<endl;

    return 0;
}