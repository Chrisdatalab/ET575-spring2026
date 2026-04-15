/*
    weiting gao
    lab16, pointers and intro to array
    April 13, 2026
*/
#include<iostream>
using namespace std;

//example 1: pointer and reference
void pointerreference(){
    int num =12;
    char syn ='T';
    string n="Peter";

    //declare the pointers
    int* pointerint;
    char* pointerchar;
    string* pointerstring=&n;

    // check a pointerint, show memory address
    cout<<"int pointer = "<<pointerint<<endl;

    // assign value to a pointer
    pointerint = &num;
    pointerchar = &syn;
    
    cout<<"int pointer = "<<pointerint<<endl;
    cout<<"char pointer = "<<pointerchar<<endl;
    cout<<"string pointer = "<<pointerstring<<endl;

    // use dereference operator to obtain the value of the pointer memory assress
    cout<<"value of int pointer = "<<*pointerint<<endl;
    cout<<"value of char pointer = "<<*pointerchar<<endl;
    cout<<"value of string pointer = "<<*pointerstring<<endl;

}

void printvalue(string n){
    cout<<"Value = "<<n<<endl;
}
//pass a pointer
void pointeraddress(string* n){
    cout<<"Pointer = "<<n<<endl;
}
//pass a reference valuce
void printreference(string& n){
    cout<<"Pointer = "<<n<<endl;
}
//example 3: array
void introarray(){
    //declare an array of size 5
    int scores[5];

    //assign values to an array
    scores[0]=90; //accessing the first (most-left)call in array scores
    scores[1]=90;
    scores[2]=70;
    scores[3]=60;
    scores[4]=50;

    // find the average of the scores
    float average=(scores[0]+scores[1]+scores[2]+scores[3]+scores[4])/5.0;
    cout<<"The average = "<<average<<endl;
    // initialize an array
    char symbols[3]={'%','$','#'};
    cout<<"The second symbol is = "<<symbols[1]<<endl;
    // initialize an array without an array's size
    string names[]={"Perter","Annla"};
    cout<<"The first name is "<<names[0]<<endl;


} 
    //cout<<"\n---example 4: length of an array----"<<endl;
void lengtharray(){
        //sizeof function returns the number of bytes of value
        cout<<"character = "<<sizeof(char)<<endl;
        cout<<"string = "<<sizeof(string)<<endl;
        cout<<"integer = "<<sizeof(int)<<endl;
        cout<<"float = "<<sizeof(float)<<endl;
        cout<<"double = "<<sizeof(double)<<endl;
        // array
        int number[]={2,7,9,-10,3};
        cout<<"length of arraynumbers = "<<sizeof(number);
}
    //cout<<"\n---example 5: loop array----"<<endl;
void looparray(){
    int s = 5;
    int arr[s] = {1, 2, 3, 4, 5};
    // create a pointer here
    int *ptr = arr;
    // Loop through the array using pointer
    for (int index = 0; index < s; index++)
    {
        // Accessing elements using pointer arithmetic
        cout << "Value at index " << index << ": " << *(ptr + index)<< endl;
    }
}
    //cout<<"\n---example 6: pass an  array to a function----"<<endl;
void fillup(int arraysize,int arrnumbers[]){
    for(int index=0;index<arraysize;index++){
        cout<<"Enter a number: ";
        cin>>arrnumbers[index];
    }
}
// function to print all data is an array
void printarray(int arraysize,int arrnumbers[]){
    for(int index=0;index<arraysize;index++){
        cout<<arrnumbers[index]<<'\t';
    }
    cout<<endl;
}
// function to find the MAX number in an array
int maxnumber(int arraysize,int *arrnumbers){
    int maxnum=arrnumbers[0];
    for(int index=0;index<arraysize;index++){
        if(maxnum<arrnumbers[index])
            maxnum=arrnumbers[index];
    }
    return maxnum;
}
void exercise(){
    // exercise
    // declare an array with 6 values ==> fixed length array
    int scores[5];
    // assign value to each item in array 'scores'
    scores[0] = 60;
    scores[1] = 90;
    scores[2] = 75;
    scores[3] = 88;
    scores[4] = 100;
    int MAX_score=scores[0];
    for(int i=0;i<5;i++){
        if(MAX_score<scores[i]){
            MAX_score=scores[i];
        }
    }
    cout<<"The maximum score is = "<<MAX_score<<endl;
}
  