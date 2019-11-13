#include<iostream>
#include<array>
#include<cstdio>
#include<iomanip>
using std::cout, std::cin, std::endl, std::array, std::printf;

int main () {
    array<double, 3> dash;
    
    //enter data
    cout << "Enter your times for a 40 meter dash" << endl;
    cout << "time #1: ";
    cin >> dash[0];
    cout << "time #2: ";
    cin >> dash[1];
    cout << "time #3: ";
    cin >> dash[2];
    //output
    printf("your times: %.2f, %.2f, %.2f \n", dash[0], dash[1], dash[2]);
    cout << "average: " << std::fixed << std::setprecision(2)  << (dash[0] + dash[1] + dash[2]) / 3.0 << endl;
    return 0;
}

