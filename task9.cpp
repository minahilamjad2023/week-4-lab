#include <iostream>
#include <iomanip>
#include <sstream> 
using namespace std;

string timeTravel(int hours, int minutes) 
{
    int totalMinutes = hours * 60 + minutes + 15;
    
    int futureHours = totalMinutes / 60;
    int futureMinutes = totalMinutes % 60;
    
    futureHours %= 24;
    futureMinutes %= 60;
    
    stringstream futureTime;
    futureTime  << futureHours << ":" << futureMinutes;

    return futureTime.str(); 
}

int main() {
    int hours, minutes;

    cout << "Enter Hours: ";
    cin >> hours;

    cout << "Enter Minutes: ";
    cin >> minutes;

    if (hours >= 0 && hours <= 23 && minutes >= 0 && minutes <= 59) 
    {
        string futureTime = timeTravel(hours, minutes);
        cout<< futureTime << endl;
    } else {
        cout << "Invalid input. Please enter valid hours and minutes." << endl; 
    }

    return 0;
}