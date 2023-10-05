#include <iostream>
using namespace std;

string OddishOrEvenish(int number) {
    int sum = 0;

    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    if (sum % 2 == 1) {
        return "Oddish";
    } else {
        return "Evenish";
    }
}

int main() {
    int num;

   cout << "Enter a five-digit number: ";
    cin >> num;

    if (num >= 10000 && num <= 99999) {
        string result = OddishOrEvenish(num);
        cout << result << endl;
    } else {
        cout << "Invalid input. Please enter a five-digit number." <<endl;
    }

    return 0;
}
 
  
 
          