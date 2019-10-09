#include<iostream>

double convert(double);

int main() {
    using std::cout, std::cin, std::endl;
    double light_years;
    cout << "Enter the number of light years: ";
    cin >> light_years;
    cout << endl;
    cout << light_years << " light years = " << convert(light_years) << " astronomical units." << endl;
    return 0;
}

double convert(double light_years) {
    return light_years * 63240; 
}

