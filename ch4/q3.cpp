#include <iostream>
#include <cstring>

using std::cout, std::cin, std::endl, std::strcat;

int main() {
    //define
    char firstname[50];
    char lastname[50];
    char result[102];

    //get
    cout << "Enter your first name: ";
    cin.getline(firstname, 50);
    cout << "Enter your last name: ";
    cin.getline(lastname, 50);

    strcat(result, lastname);
    strcat(result, ", ");
    strcat(result, firstname);

    cout << "Here's the infomation in a single string: " << result << endl;
    return 0;
}
