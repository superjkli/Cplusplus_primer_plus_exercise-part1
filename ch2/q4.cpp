#include<iostream>

using std::cout, std::cin, std::endl;

int main() {
    int age_in_years = 0;
    cout << "Enter your age: ";
    cin >> age_in_years;
    cout << endl <<  "Your age in months is " << age_in_years * 12 << endl;
    return 0;
}
