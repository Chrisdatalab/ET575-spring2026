/*
    weiting gao
    lab4 , string and string methods
    Fed 2, 2026
*/
#include<iostream>
#include<string>

using namespace std;
int main()
{

    cout<<"\n-----------Example 1: string indexining----------"<<endl;
    //each character in a string can be accessed by its index number
    // index from 0,
    string firstname = "Peter";
    cout<<"The 4th character of the first name = "<<firstname[3]<<endl;
    cout<<"The 3th character of the first name = "<<firstname.at(2)<<endl;

    cout<<"\n-----------Example 2: string length----------"<<endl;
    //lenght method reurns the amoung of characters in a string
    int firstname_lenght = firstname.length();
    cout<<"First name has "<<firstname_lenght<<" characters"<<endl;

    cout<<"\n-----------Example 3: add or cooncatenate strings----------"<<endl;
    // + operator adds or concatenates strings;
    string color = "orange";
    string animal = "cat";
    string addstrings = "My "+ animal + " loves " + color + " toys";
    cout<<addstrings<<endl;
    cout<<color+animal<<endl;

    cout<<"\n-----------Example 4: substract characters from a string----------"<<endl;
    //substr() method substracts(extracts) characters froom a string
    //substr(index from where the substraction would happen, amoung from charaters to be extracted)
    string city = "Bayside";
    string sub_char = city.substr(3,4);//substract 4 charaters from index 3 
    cout<<"Substracted characters = "<<sub_char<<endl;

    cout<<"\n-----------Example 5: insert characters into a string----------"<<endl;
    //insert new characters into a string
    //insert(index from where the new charaters will be inserted, characters to be inerted)
    //BayQueens-side
    city.insert(3,"Queens-");
    cout<<"After insert method = "<<city<<endl;

    cout<<"\n-----------Example 6: add characters to the end of a string----------"<<endl;
    //append method
    string fullname = "Peter Pan";
    //add the wotd "@neverland" to the end of fullname
    fullname.append("@neverland");
    cout<<"After append method = "<<fullname<<endl;

    cout<<"\n-----------Example 7: replace characters in a string----------"<<endl;
    //replace method replaces characters in a string
    //replace(index where the replacement will happen, amoung of charaxters to be trplaced)
    string word = "engineering";
    //replace the word "ee" with "FUTURE". The result will be "enginFUTUREring"
    cout<<"Original word = "<<word<<endl;
    word.replace(5,2,"FUTURE");
    cout<<"After the replace method = "<<word<<endl;

    cout<<"\n-----------Example 8: erase characters in a string----------"<<endl;
    // erase(index where the erase will happen, amoung of characters to be erased)
    word = "layout";
    cout<<"Original word = "<<word<<endl;
    //erase 'yo' from word,the result should be 'laut'
    word.erase(2,2);
    cout<<"After the erase method = "<<word<<endl;

    cout<<"\n-----------Example 8: find characters in a string----------"<<endl;
    //find method return the index of the first found character
    word = "characters";
    //find letter 'a' from word
    int index_a = word.find('a');
    cout<<"Index for a = "<<index_a<<endl;
    //find the index for 'act'
    cout<<"Index for 'act = "<<word.find("act")<<endl;
    cout<<"\n---------EXERCISE---------"<<endl;
    cin>>word;
    /*
        print the 2nd character of the word. 
        find and print the length of the word.
        replace 2 characters from the 3rd character with "-- $ --" . Print result
        remove 3 characters from the end of the message. Print result
    
    */
    cout<<"2nd character: \t"<<word[1]<<endl<<endl;
    cout<<"word has \t"<<word.length()<<characters<<endl<<endl;
    cout<<"Replace word: \t"<<word<<endl<<endl;
    cout<<"Remove end characters:\t"<<word.erase(word.length()-4,3)<<endl;


    
    return 0;
}
