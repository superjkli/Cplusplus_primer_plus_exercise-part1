#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main() {
    char ch,x;
    string entered = "";
    cout << "Reads input(enter @ to exit): ";
    while(ch != '@') {   
        cin.get(ch);
        if (ch == '@')
            break;
        x = ch;
        if(islower(ch))
            x = toupper(ch);
        else if (isupper(ch))
            x = tolower(ch);
        else {}
        if (!isdigit(ch))
            entered += x;
    }

    cout << entered << endl;
    return 0;
}
