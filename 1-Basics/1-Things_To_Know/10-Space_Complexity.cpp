//Space Complexity=Space required by the algorithm to run
//Space Complexity=Auxiliary Space + Input Space
//Auxiliary Space=Extra space or temporary space used by the algorithm(space that you take to solve the problem)
//Input Space=Space required to store the inputs(space that you take to store the inputs)


//Examples:

//Example 1:
//Code:
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n; // O(1) space
    int sum = 0; // O(1) space
    for (int i = 1; i <= n; i++) { // O(1) space
        sum += i; // O(1) space
    }
    cout << sum << endl; // O(1) space
    return 0;
}
//Space Complexity=O(1+1+1+1+1)=O(1)



//Example 2:
//Code:
/*
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n; // O(1) space
    int* arr = new int[n]; // O(n) space
    for (int i = 0; i < n; i++) { // O(1) space
        arr[i] = i; // O(1) space
    }
    cout << arr[n - 1] << endl; // O(1) space
    delete[] arr; // Freeing allocated memory
    return 0;
}
//Space Complexity=O(1+n+1+1+1)=O(n)*/



//Example 3:
//Code:
/*
#include <iostream>
using namespace std;
void func(int n) {
    if (n == 0) {
        return;
    }
    func(n - 1); // Recursive call
    cout << n << " ";
}
int main() {
    int n;
    cin >> n; // O(1) space
    func(n); // O(n) space due to recursion stack
    return 0;
}
//Space Complexity=O(1+n)=O(n)*/


