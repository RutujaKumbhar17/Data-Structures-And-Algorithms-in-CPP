#include<iostream>
#include<climits> // for INT_MIN
using namespace std;

int main(){
    cout<<"Array Elements"<<endl;
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<< endl;


    int largest = INT_MIN;
    for(int i=0; i<n; i++){
        if(a[i]>largest){
            largest = a[i];
        }
    }
    cout<<"Largest Element is"<<largest<<endl;
    return 0;
}