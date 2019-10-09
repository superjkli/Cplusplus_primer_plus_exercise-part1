#include<iostream>

void output(int, int);

using std::cout, std::endl;

int main() {
    using std::cin;

    int hr = 0, min = 0;

    cout << "Enter the number of hours: ";
    cin >> hr;
    cout << "Enter the number of minutes: ";
    cin >> min;
    output(hr, min);
    return 0;
}

void output(int hours, int minutes) {
    cout << "Time: " << hours << ':' << minutes << endl;
}
