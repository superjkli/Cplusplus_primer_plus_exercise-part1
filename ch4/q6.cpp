#include<iostream>
#include<string>

using std::cout, std::cin, std::string, std::endl, std::getline;

struct CandyBar {
    string brand_name;
    double weight;
    int calories; 
};


int main() {
    CandyBar a = { "Choco Bar", 20.9, 500};
    CandyBar b = { "Vanila ice", 500.012, 2139};
    CandyBar c = { "KMR", 114.514, 810};

    cout << "Brand name: " << a.brand_name << endl;
    cout << "Weight: " << a.weight << endl;
    cout << "Calories: " << a.calories << endl;
    cout << endl;

    cout << "Brand name: " << b.brand_name << endl;
    cout << "Weight: " << b.weight << endl;
    cout << "Calories: " << b.calories << endl;
    cout << endl;

    cout << "Brand name: " << c.brand_name << endl;
    cout << "Weight: " << c.weight << endl;
    cout << "Calories: " << c.calories << endl;
    cout << endl;

    return 0;
}
