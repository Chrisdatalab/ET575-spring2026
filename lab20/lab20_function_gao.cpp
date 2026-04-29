/*
    weiting gao
    lab20 , parsing and file handling
    April 27, 2026
*/
#include<iostream>
using namespace std;

// example 1: using cin to validate a data type
// if the input is a preper data type, cin will set a state to goodbit
// if the input is not a preper data type, cin will set a state to failbit

// function to collect and return an integer
int collection(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(cin.fail()){
        // clear the failbit 
        cout<<"Wrong data type!"<<endl;
        cin.clear();
        cin.ignore(10000,'\n');
        //recollect the number
        return collection();
    }
    else{
        return n;
    }
}
// example 2: read file
// input file = ifstream
// output file = ofstream
// fstream has ifstream and ofstream
// after the library, we can declare an ifstream and ofstream objects
#include<fstream>
void readfile(string filename){
    // declare an object to handle: ifstream
    ifstream fin;
    // declare a variable to hold each line of the read file
    string line;
    // declare a variable as a line counter
    int linecounter = 1; //first line
    // open the file
    fin.open(filename);
    //use a loop to go through each line in thr opened file
    while (getline(fin,line))
    {
        cout<<"Sentence "<<linecounter<<" = "<<line<<endl;
        linecounter++;
    }
    // close the file input while finish reading
    fin.close();
}

// example 3: write files
// function to write or create a new file
void writefile(string filename){
    // declare an object to handle output files, fout
    ofstream fout;
    // open the file
    // if the file exists, it will overwrite
    // if the file doesn't exists,it will create a new file
    fout.open(filename);
    // write "student's full name" in the first line of file
    fout<<"Student's full name\n";
    fout<<"Lab20 \n";
    // close the file output when finished writing
    fout.close();
}

// example 4; append data into a existing file
void appendfile(string filename, string msg){
    ofstream fout;
    fout.open(filename,ios:: app);
    // append data to the file
    for (int i = 3; i>=0; i--)
    {
        fout<<i<<endl;
    }
    fout<<"Game Over!\n"<<msg<<endl;
    fout.close();   
}

// exercise
void createfile(string filename){
    ofstream fout;
    fout.open(filename);
    fout.close();
}
void appfile(string filename,string msg){
    ofstream fout;
    fout.open(filename,ios:: app);
    fout<<msg<<endl;
    fout.close();
}
void Readfile(string filename){
    ifstream fin;
    string line;
    fin.open(filename);
    while (getline(fin,line))
    {
        cout<<line<<endl;
    }
    fin.close();
}
// example 5: check if a file exist
void checkfile(string filename){
    ifstream fin;
    fin.open(filename);

    // if the file doesn't exist
    if(fin.fail()){
        cout<<"file "<<filename<<" doesn't exist!"<<endl;
        exit(1);
    }
    // if the file exist, read all lines
    string eachline;
    while (getline(fin,eachline))
    {
        cout<<eachline<<endl;
    }
    fin.close();    
}