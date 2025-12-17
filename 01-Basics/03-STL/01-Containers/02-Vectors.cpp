//Vectors are just like arrays,but they are dynamic in size.
#include <iostream>
#include<bits/stdc++.h>
//#include <vector>//include vector header file
using namespace std;

void vectorv(){

    vector<int>v; //declaration of vector

    //to push the elements at back
    v.push_back(1);
    v.emplace_back(2);//both work similar but emplace_back is faster

    //using pair vector
    vector<pair<<int, int>>v;
    v.push_back({1, 2});//here we need to define under curly braces
    v.emplace_back(3, 4);//we can directly give it under normal braces and it will take it as pair

    //Pass the size of vector
    vector<int>v(5,100);//100 is initial value for all 5 elements
    vector<int >v1(3,4);
    vector<int>v2(v1);//copy v1 vector into v2
    

}
