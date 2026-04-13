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
   
