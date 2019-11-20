#include<iostream>

using std::cout, std::cin, std::endl;

int main() {
    long long sum = 0LL;
    int input = 0;
    do {
        cout << "Enter numbers to calculate sum (0 to quit): ";
        cin >> input;
        if (input == 0) 
            continue;
        sum += input;
        cout << "the sum now is " << sum << endl;
    } while (input != 0);
    return 0;
}
