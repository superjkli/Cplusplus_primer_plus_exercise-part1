#include<iostream>

using std::cout, std::cin, std::endl;

int main() {
    //variazbles
    long long world_population = 0, US_population = 0;
    double percentage;

    //data get
    cout << "Enter the world's population: ";
    cin >> world_population;
    cout << "Enter the population of the US: ";
    cin >> US_population;
    
    //calculation
    percentage = (long double) US_population * 100.0 / world_population;

    cout << "The population of the US is " << percentage << " %"


