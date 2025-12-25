//Vectors are just like arrays,but they are dynamic in size.
#include <iostream>
#include <vector>
#include<utility>
//#include<bits/stdc++.h>
//#include <vector>//include vector header file
using namespace std;

void vectorv(){
 //1.declaration of vector   
    vector<int>v; 

    //to push the elements at back
    v.push_back(1);
    v.emplace_back(2);//both work similar but emplace_back is faster

    //using pair vector
    vector<pair<int, int> >vp;
    vp.push_back({1, 2});//here we need to define under curly braces
    vp.emplace_back(3, 4);//we can directly give it under normal braces and it will take it as pair

    //Pass the size of vector
    vector<int>v3(5,100);//100 is initial value for all 5 elements
    vector<int >v1(3,4);
    vector<int>v2(v1);//copy v1 vector into v2

 //2.Using Iterator

    //v.begin(): Points to the very first element.
    // v.end(): Points to the memory location after the last element (not the last element itself).     
    // *(it): The asterisk "dereferences" the iterator, which means it grabs the actual value stored at that spot.
    

    vector<int>::iterator itt=v.begin();
    itt++;
    cout<<*(itt)<<" ";

    itt=itt+2;
    cout<<*(itt)<<" ";

    //Without auto: vector<int>::iterator it = v.begin();
    // With auto: auto it = v.begin();
    // auto means auto assignation happens,no need to explicity tell.
    auto it= v.begin();
    auto rit= v.rbegin();
    auto rrit= v.rend();
    it= v.end();
    cout<<v[0]<<" "<<v.at(0);
    cout<< v.back()<<" ";

 //3.printing the vector

    for(auto it=v.begin(); it !=v.end();it++){
        cout<<*(it)<<" ";
    }

    for (auto it:v){
        cout<<it<<" ";
    }

 //4.Delete the vector
    
}


int main() {
    vectorv(); // This calls the function you wrote
    return 0;
}