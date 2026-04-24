/*
    weiting gao
    Homework 9 array application
    April 24 , 2026
*/
#include <iostream>
#include<random>
#include "homework9_function_gao.cpp"
using namespace std;
int main() { 

    int sizearray = arraysize();   // Get array size 

    int noise[sizearray];     // Declare array with the obtained size 

    //Populate array with random values 
    srand(time(0));
    randPopulate(noise, sizearray);

    // Display original array 

    cout << "Original Set:" << endl;

    print(noise, sizearray); 

    // Reverse the array 

    reverse(noise, sizearray);   

    // Display reversed array 

    cout << endl << "Reversed Set:" << endl;

    print(noise, sizearray); 

    return 0; 

} 