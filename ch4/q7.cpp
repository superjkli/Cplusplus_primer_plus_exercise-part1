#include<iostream>
#include<string>

using std::cin, std::cout, std::endl, std::string, std::getline;

struct Pizza {
    string company_name;
    double diameter;
    double weight;
};

int main() {
    Pizza your_choice;
    
    cout << "Enter pizza company name: ";
    getline(cin, your_choice.company_name);
    cout << "Enter pizza diameter: ";
    cin >> your_choice.diameter;
    cout << "Enter weight: ";
    cin >> your_choice.weight;

    cout << endl;

    cout << "Pizza company name: " << your_choice.company_name << endl;
    cout << "Pizza diameter: " << your_choice.diameter << endl;
    cout << "Pizza weight: " << your_choice.weight << endl;

    return 0;
}

