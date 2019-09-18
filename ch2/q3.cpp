#include <iostream>
using std::cout, std::endl;

int phrase_a();
int phrase_b();

int main() {
    phrase_a();
    phrase_a();
    phrase_b();
    phrase_b();
    return 0;
}

int phrase_a() {
   cout << "Three blind mice" << endl;
   return 0;
}

int phrase_b() {
    cout << "See how they run" << endl;
    return 0;
}

