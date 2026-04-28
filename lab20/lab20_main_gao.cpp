/*
    weiting gao
    lab20 , parsing and file handling
    April 27, 2026
*/
#include<iostream>
#include"lab20_function_gao.cpp"

using namespace std;
int main(){
    cout<<"--------example 1: using cin to validate a data type---------\n"<<endl;
    int n=collection();
    cout<<"Collected number = "<<n<<endl;
    cout<<"--------example 2: read file---------\n"<<endl;
    /*string filename;
    cin>>filename;*/
    readfile("samplefile.txt");

    cout<<"--------example 3: write files---------\n"<<endl;
    writefile("name.txt");

    cout<<"--------example 4: appand files---------\n"<<endl;
    appendfile("samplefile.txt", "student's name" );

    cout<<"--------exercise---------\n"<<endl;
    createfile("data_user.txt");
    appfile("data_user.txt","dfghjkdfghjfghj");
    Readfile("data_user.txt");
    return 0;
}