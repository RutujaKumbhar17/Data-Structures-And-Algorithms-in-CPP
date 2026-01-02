//Array has contiguous memory allocation.
//Array size is fixed,a[]is wrong.
#include<iostream>
using namespace std;

int main(){

    //Array Initialisation

    int a [10]={1,2,3,4,5,5}; 
    a[0]=5;
    cout<<a[0]<<endl;
    cout<<a[6]<<endl; //Printing values
    
    //Printing the entire array

    cout<<"array is"<<endl;
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    cout<<sizeof(a);
    return 0;
}