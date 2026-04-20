/*
    weiting gao
    March 20, 2026
    lab18 array application
*/
#include<iostream>
#include "lab18_function_gao.cpp"
using namespace std;

int main(){

    cout<<"------example 1 search function------\n";
    // declare the array size
    const int ARRAYSIZE =5;
    // declare the array
    int a[ARRAYSIZE];
    // declare the array size if there is less 5 consecutive positive intergers
    int Listsize;
    // declare the variables to save target
    int searchnumber=20;
    // call function fillarray
    fillarray(a,Listsize,ARRAYSIZE);
    cout<<"Listsize = "<<Listsize<<endl;
    print(a,ARRAYSIZE);
    int foundindex=search(a,Listsize,searchnumber);
    cout<<"int search index = "<<foundindex<<endl;
    return 0;
}