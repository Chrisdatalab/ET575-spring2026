/*
    weiting gao
    March 20, 2026
    lab19 exercise
*/
#include<iostream>
#include<cmath>
using namespace std;

// exercise
void collectnumber(int *arr,int &Pos,int ArrayLength)
{
    // Collects user-entered non-zero integers and stores them in a 1D array. I
    // nput stops when the user enters 0 or when five numbers have been entered.
    int index=0;
    cout<<"Enter a number: ";
    cin>>arr[index];
    if(index<ArrayLength&&arr[i]>0){
        index++;
    }
    else{
        return
    }
}
float Averagenumber(int *arr, int pos){
    // Computes and returns the average of all numbers stored in the array.
    int sum=0;
    for(int i=0;i<pos;i++){
        sum=sum+arr[i];
    }
    return sum/pos*1.0;
}
average number = sum of all numbers in the array / array-list size

void Closestmean(int *arr,int *carr,int pos,float n){
    //Compares each value in the array and returns the number that is closest
    // to the average. We use the following formula to find a number closest to the
    // average = absolute value(number - average).
    for(int i=0;i<pos;i++){
        carr[i]=abs((arr[i]-n));
    }
}

    


