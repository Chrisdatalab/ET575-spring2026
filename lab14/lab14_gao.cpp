/*
    weiting gao
    lab14 function
    Mar 18 ,2026
*/
#include<iostream>
#include"lab14_function_gao.cpp"
using namespace std;
int main(){

    cout<<"\n----example 1: function calling function----"<<endl;
    int calculate = caludouble(2,3);
    cout<<calculate<<endl;

    cout<<"\n----example 2: recursive function----"<<endl;
    cheers(4);
    cout<<"\n----example 3: linear recursive function----"<<endl;
    int n=linearfunction(3);
    cout<<"final result = "<<n<<endl;
    cout<<"\n----example 4: ----"<<endl;
    int side1=collectNumber();
    int side2=collectNumber();
    printresult(side1,side2,hypotenuse(side1,side2));
    cout<<"\n----exercise: ----"<<endl;
    int x1,x2,y1,y2;
    x1=collPosnuber();
    x2=collPosnuber();
    y1=collPosnuber();
    y2=collPosnuber();
    printDistance(x1,y1,x2,y2,getDistance(x1,y1,x2,y2));
    return 0;
}