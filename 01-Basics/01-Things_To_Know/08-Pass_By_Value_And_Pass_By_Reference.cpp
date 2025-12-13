#include<iostream>
using namespace std;
// Function to add two numbers
int add(int a, int b) {
    return a + b;
}
// Function to swap two numbers using pass by reference
//Remember Arrays are always passed by reference in C++ 
void swapByReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}       
int main() {
    int num1 = 10;
    int num2 = 20;

    // Demonstrating Pass by Value
    cout << "Before add function (Pass by Value): num1 = " << num1 << ", num2 = " << num2 << endl;
    int sum = add(num1, num2);
    cout << "Sum returned by add function: " << sum << endl;
    cout << "After add function (Pass by Value): num1 = " << num1 << ", num2 = " << num2 << endl;

    // Demonstrating Pass by Reference
    cout << "\nBefore swapByReference function (Pass by Reference): num1 = " << num1 << ", num2 = " << num2 << endl;
    swapByReference(num1, num2);
    cout << "After swapByReference function (Pass by Reference): num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
