#include<iostream>

using std::cout, std::cin, std::endl;

int main() {
    //declare variables
    double liters = 0.0, km = 0.0;
    double result = 0.0;
    
    //ask data
    cout << "enter how long have you drived ( in kilometers ): ";
    cin >> km;
    cout << "enter how much gasoline have you used ( in liters ): ";
    cin >> liters;

    //calculate
    result = km / liters; 

    //output
    cout << "your car has a fuel economy of " << result << " km per liter" << endl;
    return 0;
}

