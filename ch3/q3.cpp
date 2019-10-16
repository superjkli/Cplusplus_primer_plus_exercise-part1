#include<iostream>

using std::cout, std::cin, std::endl;

int main() {
    //define constant values
    const int arc_sec_to_min = 60;
    const int arc_min_to_deg = 60;
    
    //define variables
    int deg = 0, min = 0, sec = 0;
    double deg_in_decimal = 0.0;
    
    //info get
    cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
    cout << "First, enter the degrees: ";
    cin >> deg;
    cout << "Next, enter the minutes of arc: ";
    cin >> min;
    cout << "Finally, enter the seconds of the arc: ";
    cin >> sec;

    //calculate
    deg_in_decimal += deg;
    deg_in_decimal += ((double) min) / arc_min_to_deg;
    deg_in_decimal += ((double) sec) / arc_sec_to_min / arc_min_to_deg;
    
    //output
    cout << deg << " degrees, " << min << " minutes, " << sec << " seconds";
    cout << " = " << deg_in_decimal << " degrees" << endl;

    return 0;
}

