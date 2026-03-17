/*
    weiting gao
    lab13 introduce to function
    Mar 16 ,2026
*/
#include<iostream>
#include<string>
using namespace std;

// example 1: void function void functions are functions that don't return any value
void printHello(){
    cout<<"Hello World!"<<endl;
    return;
    // the return line is oprional for a void function
}
//  example 2: function that pass values
void greeting(string username){
    cout<<"Welcome to function: "<<username<<endl;
}
// example 3: function that pass and return values
// function that passes a number return the triple of th number
int tripleNumber(int number){
    return number*3;
}
// example 4; function to caculate to check number positive, negative or 0
// return string
string checkNumber(int number){
    if(number>0)
        return "Positive";
    else if (number<0)
    {
        return "Negative";
    }
    else
        return "Zero";
}
// example 5: composition function
// function validate that a number is positive
//function only returns a positive number 
//function 1
int validatepositive(){
    int n;
    cout<<"Enter anumber: ";
    cin>>n;
    // recollect the number if the number is not positive
    while (n<=0)
    {
        cout<<"Enter a positive number: "<<endl;
        cin>>n;
    }
    return n;
}
// function 2: function to calculate and return the area if a rectangle
int areaRectangle(int length,int width){
    return length*width;
}
//function3
void printarea(int length,int width,int area){
    cout<<"The area of a rectangle with "<<length<< " and "<<width<< " is "<<area<<endl;
}
//exercise
bool checkEven(int n){
    if(n%2==0)
        return true;
    return false;
}
void print_checkEven(int n,bool b){
    string value;
    if(b==0)
        value="No";
    else
        value="Yes";
    cout<<"Is "<<n<<" even? "<<value<<endl;
}