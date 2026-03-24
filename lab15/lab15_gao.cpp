/*
    weiting gao
    lab15, random numbers
    March 23, 2026
*/
#include<iostream>
#include"lab_function_gao.cpp"
using namespace std;
int main(){
    srand(time(0));
    cout<<"\n-----example 1: random number-----"<<endl;
    cout<<random_number()<<endl;
    cout<<random_number()<<endl;
    cout<<"\n-----example 2: random number-----"<<endl;
    cout<<random_0_9()<<endl;
    cout<<random_0_9()<<endl;
    cout<<"\n-----example 3: random number-----"<<endl;
    cout<<random_5_12()<<endl;
    cout<<random_5_12()<<endl;
    cout<<"\n-----example 4: matching number-----"<<endl;
    int roll1=rolidice();
    int roll2=rolidice();
    bool resultmatch=matchdices(roll1,roll2);
    printdices(roll1,roll2,resultmatch);
    cout<<"\n----exercise-----"<<endl;
    int a=get_roll();
    int b=get_roll();
    print_result(check_snake(a,b));
    return 0;
}