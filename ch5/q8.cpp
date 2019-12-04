#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char array[30];
    int count = 0;
    cout << "Enter words (to stop, type the word done): " << endl;

    cin >> array;
    while(strcmp(array, "done")) {
        count++;
        cin >> array;
    }

    cout << "You enter a total of " << count << " words" << endl;

    return 0;
}
