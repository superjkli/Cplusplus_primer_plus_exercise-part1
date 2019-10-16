#include<iostream>

using std::cout, std::cin, std::endl;

int main() {
    //define constant vlaues
    const int hours_in_day = 24;
    const int minutes_in_hours = 60;
    const int seconds_in_minutes = 60;
    
    //define variable
    long long total_seconds = 0;
    int days = 0, hours = 0, minutes = 0, seconds = 0;
    
    //get info for calculation
    cout << "***** seconds converter *****" << endl;
    cout << "Enter the number of seconds: ";
    cin >> total_seconds;
    
    //calculation
    seconds = total_seconds % seconds_in_minutes;
    minutes = (total_seconds - seconds) / seconds_in_minutes;
    minutes = minutes % minutes_in_hours;
    hours = (total_seconds - seconds - minutes * seconds_in_minutes) / seconds_in_minutes / minutes_in_hours;
    hours = hours % hours_in_day;
    days = (total_seconds - seconds - minutes * seconds_in_minutes - hours * minutes_in_hours * seconds_in_minutes) / seconds_in_minutes / minutes_in_hours / hours_in_day;

    
    //output
    cout << total_seconds << " seconds = ";
    cout << days << " days, ";
    cout << hours << " hours, ";
    cout << minutes << " minutes, ";
    cout << seconds << " seconds." << endl;

    return 0;
}

