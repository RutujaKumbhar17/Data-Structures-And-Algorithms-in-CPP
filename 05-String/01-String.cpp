#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//string is similar to character array but in character array we had to take care of null character.

int main(){
    //initializing string stastically
    string s= "Rutuja";
    cout<<s<<endl;

    //initializing string dynamically
    string *sp = new string;
    *sp = "Ritu";
    cout<<sp<<endl; //prints address
    cout<<*sp<<endl; //prints content

    //can use when we need to store more than one string like 2D string
    vector<string> v;
    v.push_back(s);
    v.push_back("Kumbhar");
    
    //printing the strings
    for(int i=0; i<v.size(); i++){  
        cout<<v[i]<<endl;
        sort(v[i].begin(),v[i].end());  //sort
        cout<<v[i]<<endl;
    }

    //we know that cin cannot handle spaces, the solution was cin.getline()
    //but it was okay for character array as we knew size but in strings we do not know size when we take input
    //so format of the getline changes.use getline(cin,string_name);

    string s2;
    getline(cin,s2);
    cout<<s2<<endl;

    //we can also add strings like s3=s2+s1; result will be s2 followed by s1. 
    //str.size() and str.length() gives size.
    //str.substr() gives substring .. str.substr(3) results in everything after the index 3.
    //str.substr(start, how_many_chars)
    //str.find("blahblahblah") return index at which it is present. 
    //to_string(a)..converts into string. ex.:converts int 123 into string 123.
    //atoi(a.c_str())...takes string as input and returns int.
    return 0;
}