// Check if all elements in a list are Unique
// Check if All Elements in a List are Unique

// You are given a list of integers. Write a Python program that checks if all elements in the list are unique. If all elements are unique, return True; otherwise, return False.

// Parameters:

// lst (List of integers): The list of integers to check for uniqueness.

// Returns:

// A boolean value True if all elements in the list are unique, False otherwise.

// Example:

// Input: lst = [1, 2, 3, 4, 5]
// Output: True

// Input: lst = [1, 2, 3, 3, 4, 5]
// Output: False
#include<iostream>
#include<vector>
using namespace std;
bool isunique(const vector<int>& num){
    for(int i=0;i<num.size();i++){
        for(int j=i+1;j<num.size();j++){
            if(num[i]==num[j]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int>num(n);
    for(int i =0;i<num.size();i++){
        cin>>num[i];
    }
    cout<<(isunique(num)?"True":"False");
}