// Largest Element in a List
// Find the Largest Element in a List

// Write a cpp function that finds and returns the largest element in a given list of integers.

// Parameters:

// numbers (List of integers): The input list containing integers.

// Returns:

// An integer representing the largest element in the input list.

// Example:

// Input: numbers = [3, 8, 2, 10, 5]
// Output: 10

// Input: numbers = [-5, -10, -2, -1, -7]
// Output: -1
#include<iostream>
using namespace std;
#include<climits>
#include<vector>

int largest(const vector<int> & numbers){
    int largest=INT_MIN;
    for(int i=0;i<numbers.size();i++){
        if (numbers[i]> largest){
            largest=numbers[i];
        }
        
    }
return largest;
}

int main(){
    int n;
    cin>>n;
    vector<int>numbers(n);
    for(int i =0;i<numbers.size();i++){
        cin>>numbers[i];
    }
    cout<<largest(numbers);
}
