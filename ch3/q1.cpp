#include<iostream>

using std::cout, std::endl;

int main() {
    int inches, inch, feet = 0;
    const int inch_to_feet = 12;
    cout << "Enter your height in inches: _____\b\b\b\b\b";
    std::cin >> inches;
    inch = inches % inch_to_feet;
    feet = (inches - inch) / inch_to_feet;
    cout << "Your height is " << feet << " feet " << inch << " inches." << endl;
    return 0;
}
