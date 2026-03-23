/*
    weiting gao
    lab15, random numbers
    March 23, 2026
*/
#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
// example 1: rand and sran() functions
int random_number(){
   // srand(time(0));
    return rand();
}
// example 2: range of rarndom numbers
// generate nmbers between 0 and 9(inclusive)
int random_0_9(){
    return rand()%10;
}
// example 3: generate a number between 5 and 12
int random_5_12(){
    return rand()%8+5;
}
// example 4: match a number of a pair of dices 
// function randomly generate s numbers 1 and 8
int rolidice(){
    return rand()%6;
}
// function to check if two numbers are the same
bool matchdices(int roll1,int roll2){
    return roll1==roll2;
}
//function to print result
void printdices(int roll1,int roll2,bool result){
    cout<<"Is "<<roll1<<" the same as "<<roll2<<" ? "<<result<<endl;
}