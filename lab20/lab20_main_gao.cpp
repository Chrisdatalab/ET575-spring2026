/*
    weiting gao
    April 22, 2026
    arrays
*/
#include<iostream>
#include<random>
#include"lab20_function_gao.cpp"
using namespace std;

int main(){

    cout<<"-----example 1: 2d array-----\n"<<endl;
    int rowsize=3;
    int a[rowsize][5]={
        {4,8,-13},
        {3,-8,3,5,45},
        {-6,2,8}
    };
    // call the print function
    print2d(a,rowsize);
    cout<<"-----example 2: sum all even positive numbers-----\n"<<endl;
    printsum(copositive(a,rowsize));
    cout<<"-----exercise-----\n"<<endl;

    cout<<"---//------//-----//-----\n"<<endl;
    const int ROW=3;
    const int COL=4;
    srand(0);
    char choose='y';
    while (choose=='y')
    {
        int array_random[ROW][COL];
        populate(array_random,ROW,COL);
        printvaluearray(array_random,ROW,COL);
        float ave =average(array_random,ROW,COL);
        cout<<"Average = "<<ave<<endl;
        char c;
        cout<<"Another run? (y/n): ";
        cin>>c;
        if(c=='y')
            continue;
        else if (c=='n')
        {
            choose='n';
        }
        
    }
    





    return 0;
}