/*
    weiting gao
    March 20, 2026
    lab19 exercise
*/
#include<iostream>
#include"homework7_function_gao.cpp"
using namespace std;

int main(){

    cout<<"------exercise-------\n";
    const int ArrayLength = 5;
    int b[ArrayLength];
    int PosArrayLength=0;
    collectnumber(b,PosArrayLength,ArrayLength);
    float n=Averagenumber(b,PosArrayLength);
    int cloestnum=Closestmean(b,PosArrayLength,n);
    display(n,cloestnum);
    return 0;
}