#include<iostream>
using namespace std;

int length(char input[]){
    int count=0;
    for(int i=0; input[i]!='\0'; i++){
        count++;
    }
    return count;
}

void reverse(char input[]){
    int s=0;
    int end=length(input)-1;
    while(s<end){
        swap(input[s],input[end]);
        s++;
        end--;
    }
}


int main(){
    char dance[100];
    cout<<"enter the dance form"<<endl;
    cin.getline(dance,100);  
    cout<<"the dance form is "<<dance<<endl;
    cout<<"Length: "<<length(dance)<<endl;
    reverse(dance);
    cout<<"reversed array: "<<dance<<endl;

    return 0;

}



