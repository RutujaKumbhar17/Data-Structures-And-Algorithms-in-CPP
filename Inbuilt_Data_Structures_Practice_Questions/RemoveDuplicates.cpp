// Remove Duplicate in a List
// Remove Duplicates from a List

// You are given a list of integers. Write a cpp program that removes any duplicate elements from the list and returns a new list with only unique elements. The order of elements in the list should be maintained.

// Parameters:

// lst (List of integers): The list of integers from which duplicates should be removed.

// Returns:

// A list of integers where all duplicates have been removed, preserving the original order.

// Example:

// Input: lst = [1, 2, 2, 3, 4, 4, 5]
// Output: [1, 2, 3, 4, 5]

// Input: lst = [4, 5, 5, 4, 6, 7]
// Output: [4, 5, 6, 7]


// Note :- Please don't use set or inbuilt functions. Try to use brute force logic.
#include<iostream>
#include<vector>
using namespace std;

vector<int> RemoveDuplicate(vector<int> lst){
    vector<int> ans;

    for(int i=0; i<lst.size(); i++){

        bool found = false;

        for(int j=0; j<ans.size(); j++){
            if(lst[i] == ans[j]){
                found = true;
                break;
            }
        }

        if(!found){
            ans.push_back(lst[i]);
        }
    }

    return ans;
}

int main(){
    int n;
    cin >> n;

    vector<int> lst(n);

    for(int i=0; i<n; i++){
        cin >> lst[i];
    }

    vector<int> ans = RemoveDuplicate(lst);

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }

    return 0;
}
