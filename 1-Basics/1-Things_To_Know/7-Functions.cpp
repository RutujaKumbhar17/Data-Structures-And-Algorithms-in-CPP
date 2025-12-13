#include<iostream>
using namespace std;

// Functons are blocks of code that perform a specific task
//  can be reused throughout the program.
//  They help in organizing code, improving readability, and reducing redundancy.

//Types of Functiions:
// 1. Void Functions: These functions do not return a value.
void greet() {
    cout << "Hello, welcome to C++ functions!" << endl;
}

// 2. Return Functions: These functions return a value after execution.
int add(int a, int b) {
    return a + b;
}
// 3. Parameterized Functions: These functions take parameters to perform operations based on the input values.
void displaySum(int x, int y) {
    cout << "The sum of " << x << " and " << y << " is: " << (x + y) << endl;
}

int main() {
    // Calling Void Function
    greet();

    // Calling Return Function
    int result = add(5, 10);
    cout << "The result of addition is: " << result << endl;

    // Calling Parameterized Function
    displaySum(7, 3);

    return 0;
}