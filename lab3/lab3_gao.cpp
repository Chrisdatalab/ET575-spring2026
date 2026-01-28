/*
    weiting gao
    JAN 28, 2026
    lab3, numercial variables


*/


#include<iostream>

using namespace std;

main()
{


    cout<<"\n----------Example 3--------------"<<endl;


    int number = 10.9;
    float n = 7.8;

    cout<<"number is : "<<number<<endl;
    cout<<"n: "<<n<<endl;


    number = 5;
    int number2 = 2;
    cout<<"sum = "<<number+ n<<endl;
    cout<<"division: ="<< float(number/number2)<<endl;



    //mad
    cout<<"mod of two number: "<<(number%number2)<<endl;

    cout<<"\n----------Example 3----assign operator-------"<<endl;

    //assignment operator
    //++
    cout<<"origin number: "<<number<<endl; 
    number++;
    cout<<"update number: "<<number<<endl;
    //--
    cout<<"origin number2: "<<number2<<endl; 
    number2--;
    cout<<"update number2: "<<number2<<endl;
    //+=
    number =10;
    cout<<"origin number: "<<number<<endl;
    number+=5;
    cout<<"update number: "<<number<<endl;
    //-=
    number -= 8;
    cout<<"update number: "<<number<<endl;


    cout<<"\n----------Example 3----compare operator-------"<<endl;
     //==
     //!=
    //>
    //< this than
    //<=
    //<=
     number = 3;
     number2= 8;

  //  cout<<"are number and number2 equal: "<<(number==number2)<<endl;
    int check1 = (number == number2);
    int check2 = (number!=number2);

    //print
    cout<<"are number and number2 equal? "<<check1<<endl;
    cout<<"are number and number2 not equal?"<<check2<<endl;

    cout<<"\n----------Example 3----logical operator-------"<<endl;
     // ||  &&
    number = 3;
    number2 = 5;
    bool check3= number<number2;
    bool check4= number>=number2;
    bool check5= number!=10;
    bool check6= number==3;

    bool logical =check3&&check5&&check6;
    bool logical2 = check4&&check5&&check6;
    bool logical3 = check4||check5||check6;
    bool logical4 = logical;

    //print
    cout<<"logical compare; "<<logical<<endl;
    cout<<"logical2 compare; "<<logical2<<endl;
    cout<<"logical3 compare; "<<logical3<<endl;
    cout<<"logical4 compare; "<<logical4<<endl;
    return 0;
}