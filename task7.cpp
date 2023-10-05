#include <iostream>
using namespace std;

bool IsSymmetrical(int number)
 {
    if (number < 100 || number > 999) {
        cout << "Please enter a three-digit number." << endl;
        return false;
    }

    int originalNumber = number;
    int reversedNumber = 0;

    while (number > 0) 
{
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    return originalNumber == reversedNumber;
}

int main() {
    int num;
   cout << "Enter a three-digit number: ";
   cin >> num;

    if (IsSymmetrical(num)) 
{
       cout << "The number is symmetrical." <<endl;
    } else {
        cout << "The number is not symmetrical." << endl;
    }

    return 0;
}