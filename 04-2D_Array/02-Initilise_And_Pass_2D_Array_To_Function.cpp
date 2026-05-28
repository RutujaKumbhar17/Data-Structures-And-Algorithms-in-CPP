#include<iostream>
using namespace std;

//for 2D Arays it is optional to give rows but columns are mandatory.

void printArray(int a[][5],int m,int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
    }
}

int main(){
    int a[][5]={{1,2},{3,4}};
    printArray(a,3,5);

}