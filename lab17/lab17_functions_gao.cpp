/*
    weiting gao
    April 15, 2026
    lab17
*/
#include<iostream>
using namespace std;
void fill(int sizearr,int arr[]){
    for(int i=0;i<sizearr;i++){
        cout<<"Enter a value: ";
        cin>>arr[i];
    }
}
int sum_even(int sizearr,int *arr){
    int sum=0;
    for(int i=0;i<sizearr;i++){
        if(arr[i]%2==0){
            sum=sum+arr[i];
        }
    }
    return sum;
}
int count(int sizearr,int *arr){
    int count_num=0;
    for(int i=0;i<sizearr;i++){
        if(arr[i]<0){
            count_num++;
        }
    }
    return count_num;
}