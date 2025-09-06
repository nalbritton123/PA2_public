/**
 * @file problem1.cpp
 * @author Nathan Albritton
 * @brief 
 * @version 0.1
 * @date 2025-09-05
 * 
 * @copyright Copyright (c) 2025
 * 
 */

 #include <iostream>
using namespace std;

int main()
 {
    // variables
    double height = 6.0;      // feet
    double length = 100.0;    // feet
    double coverage = 340.0;  // square feet per gallon
    int coats = 2;
    int sides = 2;

    // calculate total area to paint
    double total_area = height * length * sides * coats;

    // calculate gallons needed
    double gallons_needed = total_area / coverage;

    // output the result
    cout.setf(ios::fixed); 
    cout << "Total area to paint: " << total_area << " square feet" << endl;
    cout << "Gallons of paint needed: " << gallons_needed << " gallons" << endl;

    return 0;
}