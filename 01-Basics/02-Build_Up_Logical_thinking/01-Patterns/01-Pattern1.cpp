//Patterns->Nested Loops
/*
For patterns there will be two loops, the outer and the inner loop.
1]For the outer loop,count the number of rows.
2]For the inner loop, focus on the columns,and somehow connect them to rows.
3]Print the '*' inside the inner loop.
4]Observe the symmetry(optional).
*/

/*Pattern 1:

* * * *
* * * *
* * * *
* * * *

*/

#include <iostream>
using namespace std;

void pattern1(int n){
    for(int i=0;i<n;i++){
        for (int j=0; j<n; j++){
            cout<<"* ";
     
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pattern1(n);
    
}
