#include<iostream>
using namespace std;
int main(){

//1-D Array

 int arr[5];//same type of data stored in contiguous memory locations    
cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];

arr[3]+=10;
cout<<arr[3];

//2-D Array

 int arr2[2][3];//2 rows and 3 columns
 cin>>arr2[0][0]>>arr2[0][1]>>arr2[0][2];
 cin>>arr2[1][0]>>arr2[1][1]>>arr2[1][2];

 //strings
 string str= "DSA";
 int len=str.size();
 str[len-1]='Z';
 cout<<str[len-1];
return 0;



}

 



