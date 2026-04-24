/*
    weiting gao
    Homework 8 2D array
    April 24 , 2026
*/
#include<iostream>

using namespace std;

bool search(int ar[][ROWCOL_ARRAY], int n, int& foundRow, int& foundCol) {
    for (int row = 0; row < ROWCOL_ARRAY; row++) {
        for (int col = 0; col < ROWCOL_ARRAY; col++) {
            if (ar[row][col] == n) {
                foundRow = row;
                foundCol = col;
                return true;
            }
        }
    }
    return false;
}
void display(bool found, int n, int row, int col) {
    if (found) {
        cout << "Number " << n 
             << " was found in row " << row 
             << " and column " << col << endl;
    } else {
        cout << "Number " << n 
             << " was not found" << endl;
    }
}