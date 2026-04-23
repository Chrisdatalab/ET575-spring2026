/*
    weiting gao
    April 22, 2026
    lab 19, 2D arrays
*/
#include<iostream>
using namespace std;

// example 1: function to print the elements in a 2D array 

void print2d(int arr[][5],int rowszise){
    for(int row=0;row<rowszise;row++){
        for(int col=0;col<5;col++){
            cout<<arr[row][col]<<"\t";
        }
        cout<<endl;
    }
}
// example 2: function to sum all even positive numbers in a 2D array
const int COLSIZE =5;
int copositive(int arr[][COLSIZE],int rowsize){
    int sumallevenpositive=0;
     for(int row=0;row<rowsize;row++){
        for(int col=0;col<COLSIZE;col++){
            if(arr[row][col]>0&&arr[row][col]%2==0)
                sumallevenpositive += arr[row][col];
        }
        cout<<endl;
    }
    return sumallevenpositive;
}
void printsum(int sumallevenpositive){
    cout<<"The result is "<<sumallevenpositive<<endl;
}


const int ROW=3;
const int COL=4;
void populate(int array_random[][COL],int ROW,int COL){
    for(int row=0;row<ROW;row++){
        for(int col=0;col<COL;col++){
            array_random[row][col]=rand()%101;
        }
    }
}
void printvaluearray(int array_random[][COL],int ROW,int COL){
    for(int row=0;row<ROW;row++){
        for(int col=0;col<COL;col++){
            cout<<array_random[row][col]<<"\t";
        }
        cout<<endl;
    }
}
float  average(int array_random[][COL],int ROW,int COL){
    int sum=0;
    for(int row=0;row<ROW;row++){
        for(int col=0;col<COL;col++){
            sum=sum+array_random[row][col];
        }
    }
    return sum/1.0/ROW/COL;
}
