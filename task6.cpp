#include <iostream>
#include <string>
using namespace std;

string checkAlphabetCase(char character) 
{
    if (character == 'A')
 {
        return "You have entered Capital A";

    } 
else if (character == 'a')
 {
        return "You have entered small a";
    } else {

        return "Invalid input";
    }
}

int main() 
{
    char character;

   cout << "Enter a character (A/a): ";
    cin >> character;

    string result = checkAlphabetCase(character);

    cout << result <<endl;

    return 0;
}