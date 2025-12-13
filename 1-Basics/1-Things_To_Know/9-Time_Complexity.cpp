//Time Complexity!=Time Taken By the code to execute
// Time Complexity=number of basic operations executed as the input size increases
//Time Complexity=Rate at which the code executes as the input size increases

//Rules to calculate Time Complexity
//1.Ignore Constants
//2.Always worst case analysis
//3.Ignore lower order terms

//TC-> Big O Notation

//Examples:

//Example 1:
//Code:
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n; // O(1)
    int sum = 0; // O(1)
    for (int i = 1; i <= n; i++) { // O(n)
        sum += i; // O(1)
    }
    cout << sum << endl; // O(1)
    return 0;
}
//Time Complexity=O(1+1+n*1+1)=O(n)



//Example 2:
//Code: 
/*
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n; // O(1)
    int sum = 0; // O(1)
    for (int i = 1; i <= n; i++) { // O(n)
        for (int j = 1; j <= n; j++) { // O(n)
            sum += i + j; // O(1)
        }
    }
    cout << sum << endl; // O(1)
    return 0;
}
//Time Complexity=O(1+1+n*n*1+1)=O(n^2)*/



//Example 3:
//Code:
/*
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n; // O(1)
    int sum = 0; // O(1)
    for (int i = 1; i <= n; i *= 2) { // O(log n)
        sum += i; // O(1)
    }
    cout << sum << endl; // O(1)
    return 0;
}
//Time Complexity=O(1+1+log n*1+1)=O(log n)*/
