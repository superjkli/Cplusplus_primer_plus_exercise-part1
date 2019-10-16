#include<iostream>
#include<cmath>

using std::cout, std::cin, std::endl;

int main() {
    //define const value
    const int feet_to_inch = 12;
    const double inch_to_meter = 0.0254;
    const double pound_to_kilogram = 2.2;   
    //define non-const value
    int feet = 0, inches = 0;
    double pound = 0.0;
    double meters = 0.0, kilograms = 0.0;
    double BMI = 0.0;

    cout << "***** BMI converter *****" << endl;   
    //enter stats needed for calculation
    cout << "Please enter your height in feet and inch(es)" << endl ;
    cout << "Enter feet: ";
    cin >> feet;
    cout << "Enter inch(es): ";
    cin >> inches;
    cout << "Please enter your weight in pounds: ";
    cin >> pound;       

    //convertion
    inches += feet * feet_to_inch;
    meters = inches * inch_to_meter;
    kilograms = pound / pound_to_kilogram;

    //calculate
    BMI = kilograms / std::pow(meters, 2.0);
    //output
    cout << "Your BMI is " << BMI << endl;

    return 0;
}
