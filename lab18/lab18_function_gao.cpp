/*
    weiting gao
    March 20, 2026
    lab18 array application
*/
#include<iostream>
using namespace std;
// example 1: search program
// function 1: function to collect up to $ consecutive positive intergers
// the collection will stop if a negative number is entered
// if there is less than five numbers collected, the function will reference to the array 
void fillarray(int *arr, int &numberuserindex,int arraysize){
    int number=0,index=0;
    do{
        cout<<"Enter a positive number: ";
        cin>>number;
        if(number>0){
            arr[index]=number;
            index++;
        }
    }while(number>0&&index<arraysize);
    numberuserindex=index;
}
// function 2: print 
void print(int *arr,int sizearray){
    for(int i =0;i<sizearray;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
// function 3: search function
int search(int *arr,int numberuserindex,int target){
    int index=0;
    bool found=false;
    while (!found&&index<numberuserindex)
    {
        if(target==arr[index]){
            found=true;
            return index;
        }
        else{
            index++;
        }
    }
    return -1;
}

