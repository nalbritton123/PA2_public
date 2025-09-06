/**
 * @file problem4.cpp
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

// functions for chorus's
void chorus1() {
    cout << "Hey homies, my code is gonna rock this place" << endl;
    cout << "With a function named main and a curly brace" << endl;
}

void chorus2() {
    cout << "The CPU loves my code, no need to debug" << endl;
    cout << "I can rap in C++ until it unplug" << endl;
}

void chorus3() {
    cout << "I put a semicolon at the end of each line" << endl;
    cout << "You haters never seen code that looked so fine" << endl;
}

// functions for verses
void verse1() {
    cout << "The first time I try, my code compiles" << endl;
    cout << "Lost a point for style cause my comments are vile" << endl;
}

void verse2() {
    cout << "Got help from the TAs in the IPL" << endl;
    cout << "But I didn't need it cause I code so well" << endl;
}

void verse3() {
    cout << "I got full credit on external correctness" << endl;
    cout << "Hey playa check this, my code eats yours for breakfast" << endl;
}

int main() {
    // verse 1
    chorus1();
    chorus2();
    chorus3();
    cout << endl;

    // verse 2 
    chorus1();
    verse1();
    chorus2();
    chorus3();
    cout << endl;

    // verse 3 
    chorus1();
    verse2();
    verse1();
    chorus2();
    chorus3();
    cout << endl;

    // verse 4
    chorus1();
    verse3();
    verse2();
    verse1();
    chorus2();
    chorus3();
    cout << endl;

    return 0;
}