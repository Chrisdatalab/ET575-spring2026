/*
    weiting gao
    April 15, 2026
    lab17
*/
#include<iostream>
#include"lab17_functions_gao.cpp"
using namespace std;
int main(){

    //declare a array and length n
    const int n = 5;
    int arr[n];
    fill(n,arr);
    cout<<"All even numbers in an array is: "<<sum_even(n,arr)<<endl;
    cout<<"All negative number in an array is: "<<count(n,arr)<<endl;
    
    return 0;
}