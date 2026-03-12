/*
    weiting gao
    lab12 nasted loop
    Mar 11 ,2026
*/
#include<iostream>
using namespace std;

int main(){

    cout<<"\n------example 1: algorithm of a loop------"<<endl;
    int count =0;
    int i=10;

    while(i>5){
        i--;
        if(i%2==0){
            count+=i;
            continue;
        }
        count-=3;
    }
    cout<<"Final count is "<<count<<endl;
    /*table analysis
    loop 
    iteration |  i--      |  if(i%2==0) | count
    --------------------------------------------------------
       1      | i=10-1=9  | false       | count-=3 --> count=0-3=-3
       --------------------------------------------------------
       2      | i=9-1=8   | true        | count+=i --> count=-3+8=5
       --------------------------------------------------------
       3      | i=8-1=7   | false       | count-=3 --> count=5-3=2
       --------------------------------------------------------
       4      | i=7-1=6   | true        | count+=i --> count=2+6=8
       --------------------------------------------------------
       5      | i=6-1=5   | false       | count-=3 --> count=8-3=5
       --------------------------------------------------------------
       6 (stop)     
       count --> Final count is 5
    */
    cout<<"\n------example 2: nasted loop------"<<endl;
    // a loop inside of another loop
    int outer=0;
    // outer loop
    while(outer++ <3){
        cout<<"OUT LOOP "<<outer<<endl;
        // inner loop
        int inner=1;
        while (inner++<=5)
        {   
            cout<<inner<<"\t";
        }
        cout<<endl;
        
    }
    cout<<"\n------example 3: nasted loop------"<<endl;
    // simulate a cinema seats arrangement
    // seats per row, rows=outer loop, seats=inner loop
    int rows,seats_row;
    cout<<"Enter the number of raws: ";
    cin>>rows;
    cout<<"Enter the number of seats per row: ";
    cin>>seats_row;
    cout<<"Seating Arrangement:"<<endl;
    for(int r=1;r<=rows;r++){
        for(int s=1;s<=seats_row;s++){
            cout<<"Row "<<r<<" seat = "<<s<<"\t";
        }
        cout<<endl;
    }
    cout<<"\n------example 4: 20 graph------"<<endl;
    // 9-by-9 graph
    const int ORIDSIZE=9;
    for(int row=1;row<=ORIDSIZE;row++){
        for(int col=1;col<=ORIDSIZE;col++){
            if(col==5||row==5)
                cout<<" * ";
            else
                cout<<" . ";
        }
        cout<<endl;
    }
    cout<<"\n------example 5: 20 graph------"<<endl;
    //10-by-10 graph plot letter H
    const int ORID=10;
    for(int row=1;row<=ORID;row++){
        for(int col=1;col<=ORID;col++){
            if((col>=3&&col<=4&&row>=2&&row<=9)||(row>=5&&row<=6&&col>=5&&col<=6)||(col>=7&&col<=8&&row>=2&&row<=9))
                cout<<" % ";
            else
                cout<<" . ";
        }
        cout<<endl;
    }



    return 0;
}