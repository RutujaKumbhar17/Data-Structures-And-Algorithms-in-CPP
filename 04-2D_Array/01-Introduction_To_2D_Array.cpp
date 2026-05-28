#include <iostream>
using namespace std;

int main(){
    int a[100][100];
    int m,n;
    cin>>m>>n;

    //taking input row wise
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        
        }
    }

    //printing matrix row wise
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        
        }
        cout<<endl;
    }
    
    
    return 0;
}