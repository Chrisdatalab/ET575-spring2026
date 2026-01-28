/*
    weiting gao
    JAN 26 , 2026
    lab1 iosteam
*/

#include<iostream>//header library

using namespace std;
int main()
{
    //main function
    cout<<"\nExample 1: output stream,cout "<<endl<<endl;
    cout<<"\twelcome to C++"<<endl;

    cout<<"\nExample 2: declaring varibles "<<endl;
    //declaring varibles

    int number;
    string username;
    char symbol;
    //assign value to a varible

    username = "wangasdjs";
    symbol = '%';
    number = 9;
    //print values
    cout<<"Given username: "<<username<<endl;
    cout<<"Given symbol: "<<symbol<<endl;
    cout<<"Given number: "<<number<<endl;

    cout<<"\nExample 3: console in,cin "<<endl;
    float n= 3.5;
    string lastname;
    cout<<"Enter a last name";
    //put username by person
    cin>>lastname;

    //print result
    cout<<"Welcome to C++: "<<lastname<<" You rate is"<<n<<endl;

    return 0;
}
