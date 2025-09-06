/**
 * @file problem2.cpp
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
    int totalInches;
    cout << "Enter height in inches: ";
    cin >> totalInches;

    int feet = totalInches / 12;       // convert feet to inches
    int inches = totalInches % 12;     // remainder is leftover inches

    cout << totalInches << " in = " << feet << " ft " << inches << " in" << endl;

    return 0;
}