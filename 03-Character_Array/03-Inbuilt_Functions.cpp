#include<iostream>
#include<cstring> //to use the builtin functon
using namespace std;



int main(){
    char str1[100];
    char str2[100];
    cin>>str1>>str2;

    //1) Length--> strlen(stringname)....find the length of the string
    int len = strlen(str1);
    cout<<"Length: "<<len<<endl;

    //2) Compare 2 strings--> strcmp(str1,str2)....returns zero if two strings are equal,non zero if unequal.
    if(strcmp(str1,str2)==0){
        cout<<"equal"<<endl;    
    }else{
        cout<<"Not equal"<<endl;
    }

    //implementing the strcmp
    // bool strcmpimplement(char str1[],char str2[]){
    //         if(strlen(str1)!=strlen(str2)) return false;

    //         for(int i=0; str1[i]!='\0'; i++){
    //             if (str1[i] != str2[i]) return false;

    //         }
    //         return true;
    //     }
    
    
    return 0;
}