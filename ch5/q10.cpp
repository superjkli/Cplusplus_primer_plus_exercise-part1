#include<iostream>

using std::cout, std::endl, std::cin;

int main() {
    int rows = 0;

    cout << "enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++)
    {
        int k = 0;
        while(k < rows - i) {
            cout << '.';
            k++;
        }
        while(k < rows) {
            cout << '*';
            k++;
        }

        cout << endl;
    }
    return 0;
}
