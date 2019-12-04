#include<iostream>
#include<string>

using std::cout, std::endl, std::string, std::cin, std::getline;

struct Car {
    string make;
    int year;
};

int main() {
    int num;
    cout << "How mant cars do you wish to catalog? ";
    cin >> num;
    auto cars = new Car[num];

    for(int i = 0; i < num; i++) {
        cout << "Car #" << i+1 << endl;
        cout << "Please enter the make: " ;
        cin.get();
        getline(std::cin, cars[i].make);
        cout << "Please enter the year made: ";
        cin >> cars[i].year;
    }
    cout << "Here's your collection: " << endl;
    for(int i = 0; i < num; i++)
        cout << cars[i].year << " " << cars[i].make << endl;
    return 0;
}
