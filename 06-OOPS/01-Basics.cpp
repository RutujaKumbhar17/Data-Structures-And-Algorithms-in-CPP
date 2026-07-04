#include<iostream>
using namespace std;

//ACCESS MODIFIERS-> 
//Public(can be used anywhere),
//Private(can be used only inside the class), 
//Protected.
//Default access modifier is private.


//OOPS-> 
//Class and object.
//class serves as the template and the object serves as the copy of that template.
//class keyword has to be written.It can be said that it is a user defined datatype.


//CONSTRUCTOR->
//initialises the properties of an object with garbage values.
//Same name as the class.
//no return type.
//no input argument.
// we have a default constructor, need not explictly create,whenever an object is created, constructor is called.

class Product{
    
    int password;

    public:

        //default constructor
        Product(){
            cout<<"Constructor 1 called"<<endl;
            //as we created our own default constructor, the default one is no longer available to us.
            //used when unparameterised object is created.
        }

        //Parameterised constructor
        Product(int i){
            //used when parameterised objected is created.
            cout<<"Constructor 2 called"<<endl;
            id=i;
        }

        Product(int a,int r){
            cout<<"Constructor 3 called"<<endl;
            int id = a;
            int weight = r;
        }
        
        int id;
        int weight;
        char name[50]; 
    
    void display(){
        cout<<password<<endl;
    }
    
    //getters and setters
    int getweight(){
        return weight;
    }

    void setweight(int a){
        weight = a;
    }

    //we can access private properties outside the class using a public function.
};

int main(){
    //creating object statically
    Product p1;
    Product p2;

    //creating object dynamically
    Product *p3 = new Product;

    //assigining values
    p2.id = 456;
    
    //for dynamically created object.two ways.
    (*p3).id = 90;
    p3-> weight = 55;

    p1.setweight(90);
    p3->setweight(88);

    p1.display();
    p3->display();

    Product p4(10);

    cout<<"p2.id ="<<p2.id<<endl;

    return 0;
}
