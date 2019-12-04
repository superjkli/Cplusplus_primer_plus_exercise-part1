#include<iostream>
#include<string>
using namespace std;

int main() {
    string array;
    int count = 0;
    cout << "Enter words (to stop, type the word done): " << endl;

    cin >> array;
    while(array != "done") {
        count++;
        cin >> array;
    }

    cout << "You enter a total of " << count << " words" << endl;

    return 0;
}
