#include<iostream>
#include<ctime>
#include<cstdlib>
using std::cin, std::cout, std::endl, std::rand, std::srand, std::time;
const int strsize = 20;
struct bop { 
    char fullname[strsize]; // real name 
    char title[strsize];    // job title 
    char bopname[strsize];  // secret BOP name int preference;         
    // 0 = fullname, 1 = title, 2 = bopname 
}; 

int main(){
    bop names[5];
    char ch;
    srand((unsigned) time(NULL));
    int pref = rand() % 3;
    names[0] = {"John Black", "sub director", "JB"};
    names[1] = {"Max Power", "director", "Pow"};
    names[2] = {"Lily Smith", "manager", "L1Li"};
    names[3] = {"Ken Timber", "rookie", "wry"};
    names[4] = {"will BOOM", "veteran", "BOOM"};
    cout << "Benevolent Order of Programmers Report " << endl;
    cout << "a. display by name     b. display by title" << endl;
    cout << "c. display by bopname  d. display by preference " << endl;
    cout << "q. quit";
    do {
        cout << endl << "Enter your choice: ";
        cin.get(ch);
        cin.get();
        switch(ch) {
            case 'a':
                for(int i = 0; i < 5; i++)
                    cout << names[i].fullname << endl;
                break;
            case 'b':
                for (int i = 0; i < 5; i++)
                    cout << names[i].title << endl;
                break;
            case 'c':
                for (int i = 0; i < 5; i++)
                    cout << names[i].bopname << endl;
                break;
            case 'd':
                if (pref == 1)
                    for(int i = 0; i < 5; i++)
                        cout << names[i].fullname << endl;
                
                if (pref == 2)
                    for(int i = 0; i < 5; i++)
                        cout << names[i].title << endl;
                if (pref == 0)
                    for(int i = 0; i < 5; i++)
                        cout << names[i].bopname << endl;
                break;
            case 'q':
                cout << "bye" << endl;
                break;
            default:
                cout << "Invalid input" << endl;
        }
    }while(ch != 'q');
    return 0;
}
