#include<iostream>

using std::cout, std::cin, std::endl;

int main() {
    char first_name[50] = " ";
    char last_name[50] = "";
    char letter_grade;
    int age = 0;

    cout << "What's your first name? ";
    cin.getline(first_name, 50);  
    cout << "What's your last name? ";
    cin.getline(last_name, 50);
    cout << "What letter grade do you deserve? ";
    cin >> letter_grade;
    cout << "What is your age? ";
    cin >> age;
    switch (letter_grade)
    {
        case 'c':
        case 'C':
            letter_grade = 'D';
            break;
        case 'B':
        case 'b':
            letter_grade = 'C';
            break;
        case 'a':
        case 'A':
            letter_grade = 'B';
            break;
        default : break;
    }

    cout << "Name: " << last_name << ',' << ' ' << first_name << endl;
    cout << "Grade: " << letter_grade << endl;
    cout << "Age: " << age << endl;
    return 0;
}
