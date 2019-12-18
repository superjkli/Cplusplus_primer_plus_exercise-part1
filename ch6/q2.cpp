#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main() {
    double input[10] = {0.0};
    string value = "";
    char ch;
    int count = 0, above_avg = 0;
    double sum, avg;
    cout << "input 10 donation values: " << endl;
    while (count < 10) {
        cin.get(ch);
        while((isdigit(ch) || ch =='.')){
            value += ch; 
            cin.get(ch);
        }
        if(isspace(ch) && value == "")
            continue;
        else if (!(isdigit(ch) || ch =='.' || isspace(ch)))
            exit(1);
        input[count] = stod(value);
        value = "";
        count++;
    }
    for (count = 0; count < 10; count++)
        sum += input[count];
    avg = sum / 10.0;
    for (count = 0; count < 10; count++)
        if(input[count] > avg)
            above_avg++;
    cout << "the average is: " << avg << endl;
    cout << "there are " << above_avg << " numbers above average" << endl;
}
