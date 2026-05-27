#include<iostream>
#include<cstring> //to use the builtin functon
using namespace std;


// 1)strlen(stringname)
// 2)strcmp(str1,str2)
// 3)strcpy(dst-str,source-str)
// 4)strncpy(dest_str,source_str,n)
// 5)strcat(str1,str2)


int main(){
    char str1[100] ="asdf";
    char str2[100] ="fdsa";
    //cin>>str1>>str2;

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


    //3) Copy string--> strcpy(dst-str,source-str)....copy source string into dst string.
    cout<<"Before copying"<<endl;
    cout<<"str1: "<<str1<<endl;
    cout<<"str2: "<<str2<<endl;

    strcpy(str1, str2);

    cout<<"After copying"<<endl;
    cout<<"str1: "<<str1<<endl;
    cout<<"str2: "<<str2<<endl;
    //It also copes the null which is at the end of the string.

    strcpy(str1, "Hello");
    cout<<"str1: "<<str1<<endl;
    

    //4)copy first n characters --> strncpy(dest_str,source_str,n)
    //It will not copy the null character
    strncpy(str1,str2,3);
    cout<<"str1: "<<str1<<endl;

    //5)concatinate two strings--> strcat(str1,str2)....appends str2 at the end of str1
    strcat(str1,str2);
    cout<<"str1: "<<str1<<endl;

    return 0;
}