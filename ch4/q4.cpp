#include<iostream>
#include<string>

using std::cout, std::cin, std::endl, std::string, std::getline;

int main() {
    string firstname, lastname, result;

    cout << "Enter your first name: ";
    getline(cin, firstname);
    cout << "Enter your last name: ";
    getline(cin, lastname);

    result = lastname + ", " + firstname;

    cout << "Here's the infomation in a single string: " << result << endl;
    return 0;
}
