//As  name suggests, used to store two values

#include<bits/stdc++.h>//all libraries are included
#include <iostream>
using namespace std;
//#include <utility> //for std::pair

void pairp(){
    pair<int,int> p={1,4}; //basic pair, first define datatype and then values
    cout<<p.first<<" "<<p.second<<endl;

    //using nesteed pair to store more than two values
    pair<int,pair<int, int>> p1={1,{2,3}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;

    //we can also use pair in array or vector
    pair<int,int>arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[1].second<<endl; 

}

int main(){
    pairp();
    return 0;
}