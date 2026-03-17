/*
    weiting gao
    lab13 introduce to function
    Mar 16 ,2026
*/
#include<iostream>
#include"lab13_function_gao.cpp"
using namespace std;
int main(){

    cout<<"\n----example 1: void function-----"<<endl;
    printHello();
    printHello();
    cout<<"\n----example 2: void function pass values-----"<<endl;
    greeting("John");
    greeting("bob any");
    cout<<"\n----example 3: triple a number-----"<<endl;
    int n = tripleNumber(4);
    cout<<n<<endl;
    cout<<tripleNumber(20)<<endl;
    cout<<"\n----example 4: return string-----"<<endl;
    cout<<checkNumber(24)<<endl;
    cout<<checkNumber(0)<<endl;
    cout<<checkNumber(-452)<<endl;
    cout<<"\n----example 5: positive composition-----"<<endl;
    int length=validatepositive();
    int width=validatepositive();
    int area_rec=areaRectangle(length,width);
    cout<<area_rec<<endl;
    printarea(length,width,area_rec);
    cout<<"\n--exercise---"<<endl;
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    bool b=checkEven(a);
    print_checkEven(a,b);
    return 0;
}