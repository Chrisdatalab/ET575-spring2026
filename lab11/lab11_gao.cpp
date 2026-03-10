/*
    weiting gao
    lab 11,  loop
    March 9, 2026

*/
#include<iostream>

using namespace std;
int main(){


    while (true)
    {
        int n,sum=0;
        cout<<"Enter a number: "<<endl;
        //prompt
        cin>>n;
        if(n==0)
            break;
        while (true)
        {
            sum+=n%10;
            n=n/10;
            if(n==0)
                break;    
        }
        cout<<"The total sum is "<<sum<<endl;

    }
    
    return 0;
}