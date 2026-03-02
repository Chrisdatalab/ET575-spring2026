/*
    weiting gao
    lab 9,  loop
    March 2, 2026

*/
#include <iostream>

using namespace std;

int main()
{

    cout << "\n------expamle 1: for loop basics--------------" << endl;

    for (int action = 0; action < 5; action++)
    {
        cout << "Hello " << action << endl;
    }
    /*
    loop analysis table
    loop iteration  |  action  |   action<5  |  cout<<"Hello "<<action   |  action++
    ---------------------------------------------------------------------------------
    |     1         |    0     |   true      |       Hello 0             |  action = 0+1 = 1
    |     2         |    1     |   true      |       Hello 1             |  action = 1+1 = 2
    |     3         |    2     |   true      |       Hello 2             |  action = 2+1 = 3
    |     4         |    3     |   true      |       Hello 3             |  action = 3+1 = 4
    |     5         |    4     |   true      |       Hello 4             |  action = 4+1 = 5
    |     6         |    5     |   false   (stop the loop)



    */

    cout << "\n------expamle 2: for loop as an increament counter--------------" << endl;
    // couter from 1 to 10(inclusive) with step of 1 --> 1,2,3,4,5,6,7,8,9,10
    int x = 1;
    for (x = 1; x <= 10; x++)
    {
        cout << x << "\t";
    }
    cout << endl;
    cout << "\n------expamle 3: for loop as an decreament counter--------------" << endl;
    // counter from 2 to 5 (inclusive) with step of 2 -->2,1,0,1,-1,-2,-3,-4,-5
    for (int n = 2; n >= -5; n--)
    {
        cout << n << "\t";
    }
    cout << endl;
    cout << "\n------expamle 4: for loop as an decreament counter--------------" << endl;
    // counter from 1 to 20 (inclusive) with step of 3
    for (int m = 1; m < 20; m += 3)
    {
        cout << m << "\t";
    }
    cout << endl;
    cout << "\n------expamle 5: fnested conditional statement eithin the loop--------------" << endl;
    // counter from -10 to 10 step of 3, count how many numbers are are nultipled of 5 within the counter
    int counter_5 = 0;
    for (x = -10; x <= 10; x += 2)
    {
        cout << x << "\t";
        if (x % 5 == 0 && x != 0)
        {
            counter_5++;
        }
    }
    cout << endl;
    cout << "There is/are " << counter_5 << " multipled of 5" << endl;

    cout << "\n ---------exercise 1--------------" << endl;
    // counter from 21 to -21 step of 5, count how many numbers are are multipled of 2 within the counter
    int counter_2 = 0;
    for (x = 21; x >= -21; x -= 5)
    {
        cout << x << "\t";
        if (x % 2 == 0)
        {
            counter_2++;
        }
    }
    cout << endl;
    cout << "There is/are " << counter_2 << " multipled of 2" << endl;

    cout << "\n ---------exercise 2--------------" << endl;
    // counter from usernumber increase to 30 step of 4
    int usernumber;
    // initial number
    cout << "Enter a initial number: ";
    cin >> usernumber;
    if(cin.fail())
    {
        cout<<"Please input number."<<endl;
        return 0;
    }
    else if (usernumber > 30)
    {
        cout << "too big" << endl;
    }
    else
    {
        for (int n = usernumber; n <= 30; n += 4)
        {
            cout << n << "\t";
        }
    }

    cout << endl;

    return 0;
}
