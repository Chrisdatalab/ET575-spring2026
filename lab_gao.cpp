/*
    weiting gao
    lab 12,  loop
    March 11, 2026

*/
#include<iostream>
using namespace std;

int main(){

    cout<<"-----------example 1:----------"<<endl;
    int count=0;
    int i=10;
    while (i>5)
    {
        i--;
        if (i%2==0){
            count +=i;
            continue;
        }
        count -=3;
    }
    cout<<"Final count is "<<count<<endl;
    /* table analysis
    loop
    iteration     |   i--     |    if(i%2==0)   |     count
    ----------------------------------------------------------
        1         |  i=10-1=9 |    false        |   count -=3 ---> count = 0-3=-3
        2         |  i=9-1=8  |    true         |   count +=i ---> count = -3+8=5            
        3         |  i=8-1=7  |    false        |   count -=3 ---> count = 5-3=2
        4         |  i=7-1=6  |    true         |   count +=i ---> count = 2+6=8
        5         |  i=6-1=5  |    false        |   count -=3 ---> count = 8-3=5
        6     stop
    */
    cout<<"-----------example 2:  nasted loop----------"<<endl;
    // a loop inside of another loop
    int outer =0;
    // outer loop
    while(outer++ < 3){
        cout<<"OUTER LOOP "<<outer<<endl;

        // inner loop
        int inner =3;
        while(inner++ <=3){
            cout<<inner<<"\t";
        }
        cout<<endl;
    }
    cout<<"-----------example 3:  nasted loop----------"<<endl;
    // simulate a cinema seats arrangement
    // seats per row row = outer loop , seats = inner loop
    int rows,seats_row;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of seats per row: ";
    cin>>seats_row;
    cout<<"Seating arrangements"<<endl;
    for(int r=1;r<=rows;r++){
        cout<<"ds";
        for(int s=1;s<=seats_row;s++){
            cout<<"Row "<<r<<" Seat = "<<s<<"\t"; 
        }
        cout<<endl;
    }
    cout<<"-----------example 4:  20 graph----------"<<endl;
    // 9 - by - 9 graph
    const  int ORIOSIZE=9;
    for(int row=1; row<=ORIOSIZE;i++){
        for(int col=1;i<=ORIOSIZE;i++){
            if(col==9 || row==5)
                cout<<" * ";
            else
                cout<<" . ";
        }
        cout<<endl;
    }
    cout<<"-----------example 5:  20 graph----------"<<endl;
    // 10-by-10 graph plot letter H
    const int DRID=10;
    for(int row=1;row<=DRID;row++){
        for(int col =1;col<=DRID;col++){
            if((col>=3&&col<=4&&row>=2&&row<=3)||(row>=5&&row<=6))
                cout<<" % ";
            else
                cout<<" . ";
        }
    }
    
    
    
    
    return 0;
}