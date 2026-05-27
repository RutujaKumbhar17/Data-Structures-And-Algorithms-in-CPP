#include<iostream>
using namespace std;

//things work a lil differently for character array. we don't need to use for llop for taking the input as don in normal int array.
//whenever we write cin>>b;->coding,it is directly stored inside the array.
//a null character is added at the end of the string given which acts as the terminator. once the terminator is got printing stops.
//printing happens using for loop.

int length(char input[]);

int main(){
    char dance[100];
    cout<<"enter the dance form"<<endl;
    cin>>dance; //cin.getline(dance,100)
    cout<<"the dance form is "<<dance<<endl;
    cout<<"Length: "<<length(dance)<<endl;

    return 0;

}

//LENGTH FUNCTION
int length(char input[]){
    int count=0;
    for(int i=0; input[i]!='\0'; i++){
        count++;
    }
    return count;
}

//for a char array of size 4 i.e index 0,1,2,3 we can only store 3 char not 4 because 4th char has to be '\0'. otherwise it won't stop printng untill it receives'\0' which may crash our code.
//cin stops printing as soon as it sees spaces, tabs or '\n'(new line) [only hello from 'hello_world' is printed]
//SO A BUILTIN FUNCTION IS USED cin.getline()
//it takes 3 parameters cin.getline(string,len,delimiter) delimiter is optional.

