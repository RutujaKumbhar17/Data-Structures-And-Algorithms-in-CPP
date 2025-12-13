#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//Data Types in cpp:

int integer=10;
long BigInteger=92837345;
long long veryBigInteger=9283462445;
float decimalNumber=3.14;
double largeDecimalNumbher=3.145667;
char character='A';
string str="Hi";
bool booleanValue= true;
short smallInteger=3245;

//Working of string:
int main() {

// string s1="hi";
// string s2="ritu";
// cin>> s1>> s2;
// cout<<s1<<s2<< endl;

string str;
getline(cin,str);// to get the entire line because string will just pick single word
cout<< str<<endl;
return 0;

}




/*#include <iostream>
#include<iomanip>  //need to include it for setprecision
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    char c;
    float d;
    double e;
    
    cin>>a>>b>>c>>d>>e;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<fixed<<setprecision(3)<<d<<endl;
    cout<<fixed<<setprecision(9)<<e<<endl;
    return 0;
}*/