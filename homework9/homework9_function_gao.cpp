/*
    weiting gao
    Homework 9 array application
    April 24 , 2026
*/
#include <iostream>

using namespace std;
int arraysize(){
    int n;
    do
    {
        cout<<"Enter a number as arraysize:";
        cin>>n;
    } while (n<1||n>100);
    return n;    
}
void randPopulate(int *noise, int sizearray){
    for(int i=0;i<sizearray;i++){
        noise[i]=rand()%21+10;
    }
}
void print(int *noise, int sizearray){
    for(int i=0;i<sizearray;i++){
        cout<<noise[i]<<" ";
    }
    cout<<endl;
}
void reverse(int *noise, int sizearray){
    int num;
    for(int i=0;i<sizearray/2;i++){
        num=noise[sizearray-i-1];
        noise[sizearray-i-1]=noise[i];
        noise[i]=num;
    }
}

