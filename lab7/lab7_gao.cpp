/*
    weiting gao
    lab7 , nested conditional statment
    Fed 9, 2026
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "\n-----------example 1:nested conditional-----------" << endl;
    // use nested conditional statement to check if a number is positive(even or odd),negative(even or odd) or zero
    int number = 9;
    if (number > 0)
    {
        if(number%2==0){
            cout << number << " is positive and even!" << endl;
        }
        else
            cout << number << " is positive and odd!" << endl;
        
    }
    else if (number < 0)
    {
        if(number%2==0){
            cout << number << " is negative and even!" << endl;
        }
        else
            cout << number << " is negative and odd!" << endl;
    }
    else
    {
        cout << number << " is zero!" << endl;
    }

    cout << "\n-----------example 2:nested conditional-----------" << endl;
    //sort 3 numbers from the highest to the lowest number
    //declare variables
    int num1,num2,num3;
    //collect values
    cout<<"Enter three numbers: "<<endl;
    cin>>num1>>num2>>num3;
    //conditional statement
    if(num1>num2&&num1>num3){
        cout<<"num1 is the highest number"<<endl;
        if(num2>num3){
            cout<<num1<<"\t"<<num2<<"\t"<<num3<<endl;
        }
        else
            cout<<num1<<"\t"<<num3<<"\t"<<num2<<endl;
    }
    else if(num2>num1&&num2>num3){
        cout<<"num2 is the highest number"<<endl;
        if(num1>num3){
            cout<<num2<<"\t"<<num1<<"\t"<<num3<<endl;
        }
        else
            cout<<num2<<"\t"<<num3<<"\t"<<num1<<endl;
    }
    else {
        cout<<"num3 is the highest number"<<endl;
        if(num1>num2){
            cout<<num3<<"\t"<<num1<<"\t"<<num2<<endl;
        }
        else
            cout<<num3<<"\t"<<num2<<"\t"<<num1<<endl;
    }

    cout << "\n-----------example 3:nested conditional-----------" << endl;
    //use operands to check if a number is even or odd
    /*
        if(num%2==0)
            cout<,"Even"<<endl;
        else
            cout<<"Odd"<<endl;
    */
    int x =5;
    cout<<"The number is "<<((x%2==0)?"Even":"Oddd")<<endl;




    cout << "\n-----------exercise-----------" << endl;
     
    
    int car_budget;
    cout<<"Enter your car budget: "<<endl;
    cin>>car_budget;
    if(car_budget<0){
        cout<<"Invalid budget!"<<endl;
    }
    else if(0<=car_budget&&car_budget<10000){
        cout<<"Keep saving!"<<endl;
    }
    else if(10000<=car_budget&&car_budget<=30000){
        if(car_budget<=20000)
            cout<<"With $"<<car_budget<<", you can afford an Economy Car: Compact Car. "<<endl;
        else
            cout<<"With $"<<car_budget<<", you can afford an Mid-size Car. "<<endl;
    }
    else if(30001<=car_budget&&car_budget<=70000){
        if(car_budget<=50000)
            cout<<"With $"<<car_budget<<", you can afford an Standard Car: Sedan. "<<endl;
        else
            cout<<"With $"<<car_budget<<", you can afford an Luxury Sedan. "<<endl;
    }
    else if(70001<=car_budget&&car_budget<=150000){
        if(car_budget<=100000)
            cout<<"With $"<<car_budget<<", you can afford an Performance-oriented Car: Sports Car. "<<endl;
        else
            cout<<"With $"<<car_budget<<", you can afford an Supercar. "<<endl;
    }
    else
         cout<<"With $"<<car_budget<<", you can afford an High-end luxury cars. Maserati or Rolls-Royce? "<<endl;
    
    return 0;
}