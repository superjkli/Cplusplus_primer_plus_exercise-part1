#include<iostream>

using std::cout, std::cin, std::endl;

int main () {
    int first, second, total, now;
    
    cout << "please enter two integers (small first): ";
    cin >> first >> second;

    total = 0;
    now = first;
    do
    {
        total += now;
        now++;
    } while(now <= second);
    
    cout << "the sum is: " << total << endl;
    return 0;
}
