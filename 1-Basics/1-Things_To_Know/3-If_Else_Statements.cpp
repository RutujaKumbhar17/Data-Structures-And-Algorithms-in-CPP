#include<iostream>
using namespace std;
int main() {
    int age;
    cin>> age;
    /*if(age>=18){
        cout<<"You are an adult!"<<endl;
       
    }
    else if(age=18){
        cout<<"You are an adult!"<< endl;
    }

    else {// not mandatory to have else block
        cout<<"You are not an adult!"<< endl;
    }*/

    //Nested if

    if(age>=18){
        cout<<"You are an adult!"<<endl;
         if(age>=20){
            cout<<"Enjoy your youth!"<<endl;
        }
       
    }
    
    else {// not mandatory to have else block
        cout<<"You are not an adult!"<< endl;
       
    }
    return 0;
}