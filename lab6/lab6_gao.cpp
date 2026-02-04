/*
    weiting gao
    lab4 , if, if-else
    Fed 4, 2026
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{

    cout << "\n-------------example 1 bool variables------------" << endl;
    // bool variables return 1 for true 0 for false
    bool ispositive;
    int number;
    cout << "Enter your number: ";
    cin >> number;

    ispositive = number > 0;

    cout << "Is " << number << " positive? " << ispositive << endl;

    cout << "\n-------------example 2 if statement ------------" << endl;
    // if statment
    int num1 = 3;
    int num2 = 5;
    if (num1 == num2)
    {
        cout << "the numbers are equal" << endl;
    }
    cout << "End of example 2" << endl;

    cout << "\n-------------example 3 if-else statement ------------" << endl;
    // if-else work as a swith,if 'if' statement is ture the program will run the codes of the if statement and ignore the cod of the 'else' statement
    //  which number is greater
    if (num1 > num2)
    {
        cout << "num1 is greater than num2" << endl;
    }
    else
    {
        cout << "num2 is greater than num1" << endl;
    }

    cout << "\n-------------example 4 multiway statement ------------" << endl;

    // mulutiway checks more than two conditions
    // campare num1, num2
    if (num1 == num2)
    {
        cout << "num1 is equal num2" << endl;
    }
    else if (num1 > num2)
    {
        cout << "num1 is greater than num2" << endl;
    }
    else
    {
        cout << "num2 is greater than num1" << endl;
    }

    cout << "\n-------------example 5 multiway statement find the color depending of the wavelength ------------" << endl;
    int wavelength = 0;
    string color;
    // select the wavelengh
    /*
    The range of frequency for each color is:
    - Ultraviolet: less than 379 nm and greater than or equal to 10 nm
    - Blue: 380 nm to 520 nm
    - Green: 521 nm to 590 nm
    - Red: 591 nm to 740 nm
    - Infrared: more than 741 nm
    - Any wavelength less than 10 nm is undefined.
    */
    cout << "Enter a wavelengh" << endl;
    cin >> wavelength;
    if (wavelength <= 379 && wavelength >= 10)
    {
        color = "ultraviolet";
    }
    else if (wavelength <= 520 && wavelength >= 380)
    {
        color = "blue";
    }
    else if (wavelength <= 590 && wavelength >= 521)
    {
        color = "green";
    }
    else if (wavelength <= 740 && wavelength >= 591)
    {
        color = "red";
    }
    else if (wavelength >= 741)
    {
        color = "infrared";
    }
    else
        color = "indefined";
    // print result
    cout << "Wavelenght of " << wavelength << " amits color " << color << endl;

    cout << "\n-------------example 6 EXERCISE ------------" << endl;

    char gpa = ' ';
    float final_exam = 0;
    float labs = 0;
    float homework = 0;
    float grade = 0;
    // colect data:final_exam,labs,and homework
    cout << "Enter your final_exam: ";
    cin >> final_exam;
    cout << "Enter your labs: ";
    cin >> labs;
    cout << "Enter yout homework: ";
    cin >> homework;
    // calculate the grade=final_exam*0.5+labs*0.3+homework*0.2
    grade = final_exam * 0.5 + labs * 0.3 + homework * 0.2;
    // multiway condition
    if (grade <= 100 && grade > 90)
    {
        gpa = 'A';
    }
    else if (grade <= 90 && grade > 80)
    {
        gpa = 'B';
    }
    else if (grade <= 80 && grade > 70)
    {
        gpa = 'C';
    }
    else if (grade <= 70 && grade >= 60)
    {
        gpa = 'D';
    }
    else if(grade<59)
        gpa = 'F';

    // print result
    
    cout << "A final grade of "<<grade<<" is equivalent to a GPA of "<< gpa << endl
         << endl;

    return 0;
}
