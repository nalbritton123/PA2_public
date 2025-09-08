/**
 * @file problem3.cpp
 * @author Nathan Albritton
 * @brief This program calculates the approximate number of customers 
 * who purchase one or moreenergy drinks per week and the approximate 
 * number of customers who purchase citrus flavored energy drinks.
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
    // define variables
    int totalCustomers = 20200;
    double energyDrinkPercent = 18.0; // percent
    double citrusPercent = 52.0;      // percent

    // calculate number of customers 
    double energyCustomers = totalCustomers * energyDrinkPercent / 100.0;

    // calculate number of customers who buy citrus flavored energy drinks
    double citrusCustomers = energyCustomers * citrusPercent / 100.0;

    // display results
    cout << "Number of customers who purchase one or more energy drinks per week: ";
    cout << energyCustomers << endl;
    cout << "Number of customers who purchase citrus flavored energy drinks: ";
    cout << citrusCustomers << endl;

    return 0;
}