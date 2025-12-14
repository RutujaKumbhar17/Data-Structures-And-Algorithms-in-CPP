/*Pattern 5:

* * * *
* * *
* *
*

*/

#include <iostream>
using namespace std;

void pattern5(int n){
    for(int i=n; i>=1;i--){
        for (int j=i; j>=1;j--){
            cout<<"* ";

        }
        cout<<endl;
    }
}



//OR


/*
void pattern5(int n){
    for(int i=1; i<=n; i++){
        for (int j=0; j<n-i+1;j++){
        cout<<"* ";
        }
        cout <<endl;
         }
    }
*/                        

int main(){
    int n;
    cin >>n;
    pattern5(n);
}