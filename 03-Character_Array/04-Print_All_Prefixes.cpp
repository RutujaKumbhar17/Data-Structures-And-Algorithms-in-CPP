#include<iostream>
#include<cstring>
using namespace std;

void printallprifix(char input[]){
        for(int i = 0; i<strlen(input); i++){
                for(int j = 0; j<=i; j++){
                        cout<<input[j];
                }
                cout<<endl;
        }
}

// void printsufix(char input[]){
//         for(int i = strlen(input); i!=0; i--){
//                 for(int j = i; j!=0; j--){
//                         cout<<input[j];
//                 }
//                 cout<<endl;
//         }
// }

int main(){
        char ch[50]= "Printing Prefixes";
        printallprifix(ch);
        // printsufix(ch);
        return 0;
}