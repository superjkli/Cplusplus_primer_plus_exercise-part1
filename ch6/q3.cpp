#include<iostream>

using std::cout, std::endl, std::cin;

int main() {
    char choice;
    cout << "Please enter one of the folowwing choices: " << endl;
    cout << "a) add\t\t  b) subtract" << endl;
    cout << "c) joke\t\t d) ohhhhh" << endl;
    do {
        cin.get(choice);
        switch (choice) {
            case 'a':
                cout << "1 + 1 = " << 1 + 1 << endl;
                break;
            case 'b':
                cout << "1 - 1 = " << 1 - 1 << endl;
                break;
            case 'c':
                cout << "i'm not a joke" << endl;
                break;
            case 'd':
                cout << "ohhhhhhhhhhhhhhhhhhhhhhhhhhhhhh" << endl;
                break;
            default:
                cout << "Invalid input" << endl;
        }
        cin.get();
    }while(choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd');
    return 0;
}
