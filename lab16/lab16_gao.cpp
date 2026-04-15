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
    cout<<"\n---example 4: length of an array----"<<endl;
    lengtharray();
    cout<<"\n---example 5: loop array----"<<endl;
    looparray();
    cout<<"\n---example 6: pass an  array to a function----"<<endl;
    //decare an array
    const int s=5;
    int numbers[s];
    //fill up the arraywith data
    fillup(s,numbers);
    //print thr values in an array
    printarray(s,numbers);
    // print the max value
    int m=maxnumber(s,numbers);
    cout<<"The max number is "<<m<<endl;
    return 0;
    cout<<"\n---exercise----"<<endl;
    exercise();
}