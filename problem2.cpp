/**
 * @file problem2.cpp
 * @author Nathan Albritton
 * @brief This program will will ask the user to input the height in inches 
 * and compute and display the height in feet/inches form.
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
    int totalInches;
    cout << "Enter height in inches: ";
    cin >> totalInches;

    int feet = totalInches / 12;       // convert feet to inches
    int inches = totalInches % 12;     // remainder is leftover inches

    cout << totalInches << " in = " << feet << " ft " << inches << " in" << endl;

    return 0;
}