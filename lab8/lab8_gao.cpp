/*
    weiting gao
    lab 8,  control flow using switch-case statement
    Feb 11, 2026

*/
#include <iostream>

using namespace std;

int main()
{

    cout << "\n-------------example 1: switch-case------------" << endl;
    // use switch-case statement to ask the user to select a dayoff
    //  daclare variables
    int day;
    string dayoff = " ";
    // prompt message
    cout << "Select a dayoff: " << endl;
    cout << "1 for Monday" << endl;
    cout << "2 for Tuesday" << endl;
    cout << "3 for Wednesday" << endl;
    cout << "4 for Thursday" << endl;
    cout << "5 for Friday" << endl;
    // collect the dayoff
    cin >> day;

    // switch-case statement
    switch (day)
    {

    case 1:
        dayoff = "Monday";
        break;
    case 2:
        dayoff = "Tuesday";
        break;
    case 3:
        dayoff = "Wednesday";
        break;
    case 4:
        dayoff = "Thursday";
        break;
    case 5:
        dayoff = "Friday";
        break;
    default:
        dayoff = "invalid";
        break;
    }
    //prompt result
    cout<<"Your dayoff is "<<dayoff<<endl; 

    cout << "\n-------------example 2: switch-case------------" << endl;
    // use seitch-case statement to pick a gender
    // declare variables
    char gender;
    // prompt message
    cout<<"Select a gender: "<<endl;
    cout<<"f for female"<<endl;
    cout<<"m for other"<<endl;
    cout<<"o for other"<<endl;
    //collect gender
    cin>>gender;
    switch (gender)
    {
    case 'f': case 'F':
        cout<<"Gender = Female"<<endl;
        break;
    case 'm': case 'M':
        cout<<"Gender = Male"<<endl;
        break;
    case 'o': case 'O':
        cout<<"Gender = Other"<<endl;
        break;
    default:
        cout<<"Gender = Undefined"<<endl;
        break;
    }
    
    
    cout << "\n-------------exercise------------" << endl;
    // use a switch-case statement to execute the appropriate calculation
    // declare variables
    int number1,number2;
    char operation;
    cout<<"Enter the first number: ";
    cin>>number1;
    cout<<"Enter the second number: ";
    cin>>number2;
    cout<<"Choose an operation (+, -, *, /, %, q to quit): ";
    // prompt message
    cout<<"+ for addition"<<endl;
    cout<<"- for subtraction"<<endl;
    cout<<"* for multiplication"<<endl;
    cout<<"/ for division"<<endl;
    cout<<"'%' for modulus, which returns the remainder of the division"<<endl;
    cout<<"q to quit the program"<<endl;
    //collect opperation
    cin>>operation;
    //prompt result
    switch (operation)
    {
    case '+':
        cout<<"Result: "<<number1<<" + "<<number2<<" = "<<number1+number2<<endl;
        break;
    case '-':
        cout<<"Result: "<<number1<<" - "<<number2<<" = "<<number1-number2<<endl;
        break;
    case '*':
        cout<<"Result: "<<number1<<" * "<<number2<<" = "<<number1*number2<<endl;
        break;
    case '/':
        cout<<"Result: "<<number1<<" / "<<number2<<" = "<<number1/number2<<endl;
        break;
    case 'Q': case 'q':
        break;
    case '%':
        cout<<"Result: "<<number1<<" % "<<number2<<" = "<<number1%number2<<endl;
    default:
        cout<<"The operation is undefined"<<endl;
        break;
    }
    return 0;
}