#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double distance;
    double angle;    
    

    cout << "Enter the distance from the base of the tree (in feet): ";
    cin >> distance;

    cout << "Enter the angle of elevation (in degrees): ";
     cin >> angle;

    
    double angleRadians = angle * M_PI / 180.0;

  
    double height = distance * tan(angleRadians);

   
   cout << "The height of the tree is: " << height << " feet" << endl;

    return 0;
}