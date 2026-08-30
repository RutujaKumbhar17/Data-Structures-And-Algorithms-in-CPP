#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int fun(int n){
    string s=to_string(n);
    int p=1;
    vector<int>nums;

    for(int i=0;i<s.size();i++){
        nums.push_back(s[i]-'0');
    }
    
    for(int i=0;i<nums.size();i++){
        p*=nums[i];
    }
    cout<<p;
    return p;
}
int main(){
    int n;
    cin>>n;
    fun(n);
    return 0;
}