#include <iostream>

using std::cout, std::endl, std::cin;

int main() {
    double furlong = 0.0, result = 0.0;
    cout << "enter distance in furlong(s): " << endl;
    cin >> furlong;
    result = furlong * 220.0;
    cout << endl << furlong << " convert to yard(s) is " << result << endl;
    return 0;
}
