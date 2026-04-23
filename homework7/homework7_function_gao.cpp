/*
    weiting gao
    March 20, 2026
    lab19 exercise
*/
#include <iostream>
#include <cmath>
using namespace std;

// exercise
void collectnumber(int *arr, int &Pos, int ArrayLength)
{
    // Collects user-entered non-zero integers and stores them in a 1D array. I
    // nput stops when the user enters 0 or when five numbers have been entered.
    int number=0,index=0;
    do{
        cout<<"Enter a positive number: ";
        cin>>number;
        if(number>0){
            arr[index]=number;
            index++;
        }
    }while (index < ArrayLength && number > 0);
    Pos = index;
}
float Averagenumber(int *arr, int pos)
{
    // Computes and returns the average of all numbers stored in the array.
    int sum = 0;
    for (int i = 0; i < pos; i++)
    {
        sum = sum + arr[i];
    }
    return sum *1.00/ pos;
}

int Closestmean(int *arr, int pos, float n)
{
    // Compares each value in the array and returns the number that is closest
    //  to the average. We use the following formula to find a number closest to the
    //  average = absolute value(number - average).
    int clo;
    int i = 0,num,min=65535;
    for (i = 0; i < pos; i++)
    {
        num = abs((arr[i] - n));
        if (num <min)
        {
            min = num;
            clo=arr[i];
        }
    }
    return clo;
}
void display(float ave, int clo)
{
    cout << "The closest number to average " << ave << " is " << clo << endl;
}
