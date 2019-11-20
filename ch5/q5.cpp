#include<iostream>
#include<string>
using std::cout, std::endl, std::cin, std::string;

int main() {
    string months[12] = {"January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int sales[12] = {0};
    double entry;
    long long total = 0;
    
    cout << "enter whole year's sales of \"C++ for fools\" in numbers of books: " << endl; 
    for (int i = 0; i < 12; i++) {
        cout << "enter " << months[i] << " : ";
        cin >> entry;
        sales[i] = (int) entry;
    }
    
    for (int i = 0; i < 12; i++) 
        total += sales[i];
    cout << "total sales this year is: " << total << endl;
    return 0;
}
