#include<bits/stdc++.h>

using namespace std;

int main()
{
    string t; //Declaring Variable 
    string s = "Hello world"; // Declaring And set Value of a String

    //Get Line is used for Take input with space
    //getline(cin,t);
     
for(auto i:s) // auto keyward
    cout << i <<endl; 


if(s.find("H")!=-1) // the find() method return -1 if there is not found case
{
    cout << "Found" << endl;
    cout << s.find("H") << endl; // if Found then return the index number of the char/letter ; if letter then return first start index of the find letter
}
else{
    cout << "Not Found" << endl;
}

cout << "Size : "<< s.size() << endl; // The size function return size int value;

s.append(" By Sourav");// the append add string to the last
cout << s.append(" Roy") << endl; // the append function return the Final String ;

cout << s.insert(22,"Kumar ") << endl; // It insert String in given position ; and return Final string ; 

cout << s.compare("Tada") << endl; // the compare function return -1 if not true ; 
cout << s.compare("Hello world By Sourav Kumar Roy") << endl; // And return 0 if Match;

cout << toupper('c') << endl; // Convert Lowercase letter to Uppercase and return ASCCI value ;



cout << s.erase(5,1) << endl; // The erase function take two input(index,lenght) and delet this letter , then return the final String ;

cout << s.replace(s.find("o"),1,"()") <<endl;// The replace function is take 3 input position, how many char will be erase , and what to put ; it return the final output

cout << count(s.begin(),s.end(),' ') << endl; // The count function calculate a spacial char fiquency in a string ; 

cout << s.substr(0,11) << endl; // The substr function is used for creat a sub string with value from main strin index i to lenght l ; and it return the sub string;

s.clear(); // its a void function , It clear everything;
cout << s << endl;

}