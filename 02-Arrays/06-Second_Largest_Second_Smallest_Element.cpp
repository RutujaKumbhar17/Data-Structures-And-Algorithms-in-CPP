#include<iostream>
#include<climits>
using namespace std;

//Problem Statement: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

//Brute Force Approach:

//Sort the array in ascending order.
//The element at the second index (index 1) is the second smallest element.
//The element at the second index from the end (index length-2) is the second largest element.
