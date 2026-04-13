/*
    weiting gao
    lab16, pointers and intro to array
    April 13, 2026
*/
#include<iostream>
#include"lab16_functions_gao.cpp"
using namespace std;

int main(){

    cout<<"\n---example 1: pointer and reference----"<<endl;
    pointerreference();
    cout<<"\n---example 2: passing a pointer and reference----"<<endl;
    string something =  "Hello World!";
    printvalue(something);
    pointeraddress(&something);
    printreference(something);
    cout<<"\n---example 3: array----"<<endl;
    introarray();
    cout<<"\n---exercise----"<<endl;
    exercise();
    return 0;
}