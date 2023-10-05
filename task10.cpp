#include <iostream>
#include <string>
using namespace std;


string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
string teens[] = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
string tens[] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

string numberToWords(int num) {
    if (num < 1 || num > 99) {
        return "Invalid input. Please enter a number in the range [1 ... 99].";
    }

    if (num >= 11 && num <= 19) {
        return teens[num - 11];
    } else {
        int tensDigit = num / 10;
        int onesDigit = num % 10;

       string result = tens[tensDigit];

        if (onesDigit > 0) {
            result += ones[onesDigit];
        }

        return result;
    }
}

int main() {
    int num;

   cout << "Enter a number (1-99): ";
   cin >> num;

    string result = numberToWords(num);

   cout << result << endl;

    return 0;
}
   
 
 