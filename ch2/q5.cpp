#include<iostream>

double convert(double);
int main() {
    using std::cout, std::endl, std::cin;
    double temperature = 0.0;
    cout << "Please enter a celsius value: ";
    cin >> temperature;
    cout << endl;
    cout << temperature << " degrees celsius is " << convert(temperature) << " degrees Fahrenheit.";
    return 0;
}

double convert(double celsius) {
    return celsius * 9 / 5 + 32;
}
