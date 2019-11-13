#include<iostream>
#include<string>

using std::cout, std::cin, std::string, std::endl, std::getline;

struct CandyBar {
    string brand_name;
    double weight;
    int calories; 
};


int main() {
    auto candies = new CandyBar[3];
    candies[0] = { "Choco Bar", 20.9, 500};
    candies[1] = { "Vanila ice", 500.012, 2139};
    candies[2] = { "KMR", 114.514, 810};

    cout << "Brand name: " << candies[0].brand_name << endl;
    cout << "Weight: " <<candies[0].weight << endl;
    cout << "Calories: " << candies[0].calories << endl;
    cout << endl;

    cout << "Brand name: " << candies[1].brand_name << endl;
    cout << "Weight: " << candies[1].weight << endl;
    cout << "Calories: " << candies[1].calories << endl;
    cout << endl;

    cout << "Brand name: " << candies[2].brand_name << endl;
    cout << "Weight: " << candies[2].weight << endl;
    cout << "Calories: " << candies[2].calories << endl;
    cout << endl;

    return 0;
}
