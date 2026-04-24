/*
    weiting gao
    Homework 8 2D array
    April 24 , 2026
*/
const int ROWCOL_ARRAY = 4;
#include <iostream>
#include "Homework8_function_gao.cpp"
using namespace std;
// define a function to search for a value in a 2D array
// define a function to display a message

int main()
{

    int ar[ROWCOL_ARRAY][ROWCOL_ARRAY] = {

        {1, 2, 3, 4},

        {5, 6, 7, 8},

        {9, 10, 11, 12},

        {13, 14, 15, 16}

    };
    int row, col,n;
    cout << "Enter number to search: ";
    cin >> n;

    // call function to search for a value in a 2D array

    bool found = search(ar, n, row, col);

    // call function to display a message

    display(found, n, row, col);

    return 0;
}