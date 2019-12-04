#include<iostream>
#include<string>
using std::cout, std::endl, std::cin, std::string;

int main() {
    string months[12] = {"January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    string years[3] = {"first", "second", "third"};
    int sales[3][12] = {0};
    double entry = 0.0;
    long long total = 0LL;
    long long total_in_years[3] = {0LL};
    
    cout << "Enter three year's sales of \"C++ for fools\" in numbers of books: " << endl;
    for (int k = 0; k < 3; k++) {
        cout << "\n Enter " << years[k] << " year.\n" << endl;
        for (int i = 0; i < 12; i++) {
            cout << "Enter " << months[i] << " : ";
            cin >> entry;
            sales[k][i] = (int) entry;
        }
    }
    for (int k = 0; k < 3; k++)
        for (int i = 0; i < 12; i++) {
            total += sales[k][i];
            total_in_years[k] += sales[k][i];
        }
    for(int k = 0; k < 3; k++)
        cout << "Total sales " << years[k] << " is: " << total_in_years[k] << endl;
    cout << "Total sales all years is: " << total << endl;
    return 0;
}
