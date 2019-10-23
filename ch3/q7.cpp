#include<iostream>

#define hrd_km_eq_miles 62.14
#define gallon_to_L 3.875

using std::cout, std::endl, std::cin;

int main() {
    double input = 0.0;
    double result = 0.0;

    cout << "enter your car's fuel economy in eu style( L per 100 KM ): ";
    cin >> input;

    result = hrd_km_eq_miles / (input / 3.875) ;

    cout << "your car's fuel economy in USA style is " << result << " mpg." << endl;

    return 0;
} 

