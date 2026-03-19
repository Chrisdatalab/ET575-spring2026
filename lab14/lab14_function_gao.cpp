/*
    weiting gao
    lab14 function
    Mar 18 ,2026
*/
#include<iostream>
#include<cmath>
using namespace std;

// example 1: function calling function
int multify(int a ,int b){
    return a*b;
}

int caludouble(int x,int y){
    // function calling function
    return 2*multify(x,y);
}
// example 2: recursive function
void cheers(int n){
    //base case
    if(n==1){
        cout<<"STOP"<<endl;
    }
    // redursive
    else{
        cout<<n*2<<endl;
        cheers(n-1);
    }
}
/*table of
    function                                         else
    iteration     |   int n    |    if(n==1)   |  cout<<n*2<<endl;cheers(n-1);
        1         |     n=4    |      false    |  cout(4*2 -->8) ; cheer(4-1=3)   
        2         |     n=3    |      false    |  cout(3*2 -->6) ; cheer(3-1=2)
        3         |     n=2    |      false    |  cout(2*2 -->4) ; cheer(2-1=1)
        4         |     n=1    |      true     |  cout(STOP)
*/

// example 3 
int linearfunction(int m){
    if(m>10){
        return -6;
    }
    else{
        return (linearfunction(m+2)*(m-4));
    }
}
/*table of
    function                                         else
    iteration     |   int m    |    if(m>10)   |  (linearfunction(m+2)*(m-4));
        1         |    m=3     |      false    |  return linearfunction(3+2=5)*(3-4=-1)   
        2         |    m=5     |      false    |  return linearfunction(5+2=7)*(5-4=1) 
        3         |    m=7     |      false    |  return linearfunction(7+2=9)*(7-4=3) 
        4         |    m=9     |      false    |  return linearfunction(9+2=11)*(7-4=5) 
        5         |    m=11    |      true     |  return -6 
        final result = (-6) *5 *3 * 1 * (-1) =90
*/
// example 4: built-in function 
// program to calculate the hypotenuse of a right triangle
//function collect the number and return the number if is a positive
int collectNumber(){
    int n;
    cout<<"Enter a posive number: "<<endl;
    cin>>n;
    //recursive function to validate if a is positive
    if(n<=0){
        cout<<"Error"<<endl;
        return collectNumber();
    }
    else{
        return n;
    }
}

// calculate and return thr hypotenuse
float hypotenuse(int side1,int side2){
    return sqrt(pow(side1,2)+pow(side2,2));
}
//print result
void printresult(int side1,int side2,float a){
    cout<<"The hypotenuse of the triangle with sides "<<side1<<" and "<<side2<<" is: "<<a<<endl;
}

//exercise
int collPosnuber(){
    int n;
    cout<<"Enter a posive number: "<<endl;
    cin>>n;
    if(n<=0){
        cout<<"Error"<<endl;
        return collPosnuber();
    }
    else{
        return n;
    }
}
float getDistance(int x1,int y1,int x2,int y2){
    return sqrt(pow((x1-x2),2)+pow((y1-y2),2));
}
void printDistance(int x1,int y1,int x2,int y2,float d){
    cout<<"The distance of points("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<") is "<<d<<endl;
}
