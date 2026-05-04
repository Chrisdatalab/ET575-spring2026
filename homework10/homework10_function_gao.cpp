/*
    weiting gao
    May 4 ,2026
    homework 10
*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void readfile(string filename){
    ifstream fin;
    string line;
    fin.open(filename);
    while (getline(fin,line))
    {
        cout<<line<<endl;
    }
    fin.close();    
}
void countwords(string filename){
    ifstream fin;
    string line;
    int num=0;
    fin.open(filename);
    while (getline(fin,line))
    {
        for(int i=0;i<line.length();i++){
            if(line[i]==' '||line[i]=='\n')
            {
                num++;
            }
        }
    }
    ofstream fout;
    fout.open("wordcounts.txt");
    fout<<num<<'\n'<<endl;
    fin.close();
}
void countEarth(string filename){
    int num=0;
    ifstream fin;
    ofstream fout;
    string line;
    fin.open(filename);
    while (getline(fin,line))
    {
        for(int i=0;i<line.length();i++){
            if(line[i]=='E' and line[i+1]=='a' and line[i+2]=='r' and line[i+3]=='t' and line[i+4]=='h')
            {
                num++;
            }
        }
    }
    fout.open("wordcounts.txt",ios:: app);
    fout<<"The word ‘Earth’ appears "<<num<<" times in the document."<<endl;
    fout.close();
    cout<<num<<endl;
}
