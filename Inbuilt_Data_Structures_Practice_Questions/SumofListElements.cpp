// Sum of List Elements
// Problem Description

// Sum of List Elements

// Write a cpp function that calculates the sum of all elements in a given list of integers.

// Parameters:

// numbers (List of integers): The input list containing integers.

// Returns:

// An integer representing the sum of all elements in the input list.

// Example:

// Input: numbers = [1, 2, 3, 4, 5]
// Output: 15

// Input: numbers = [10, -5, 7, 8, -2]
// Output: 18

#include<iostream>
using namespace std;
int sum(int arr[],int n){
    
    int summ=0;
    for(int i=0;i<n;i++){
        summ+=arr[i];
    }
return summ;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sum(arr,n);
}