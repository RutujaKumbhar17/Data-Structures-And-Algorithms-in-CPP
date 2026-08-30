#include<iostream>
using namespace std;


class Node{
    public:

    // this acts like object, one data = one node. Like train dabbas.
        int data;
        Node* next;

        //Constructor-Parameterized
        Node(int val){
            data = val;
            next = NULL;
            
        }

};

class List{
    //Here those dabbas will be connected and manipulated.

    //These are the pointers.
    Node* head;
    Node* tail;
    public:

        //Non-Parameterized constructor
        List(){
            head = tail = NULL;
        }

        //LL functions that are also availabe in STL;
        //1) push_front
        //2) pop_front
        //3) push_back
        //4) pop_back


        // 1] PUSH FRONT

        void push_front(int val){
            Node* newNode = new Node(val); // Dynamic

            //Node newNode(val);-->static-->deletes the object when the control comes out of push_front ans as we will perform actions on LL in int main so this is not the obv choice.

            // a) NULL
            if(head == NULL){
                head = tail = newNode;
                return;
            }

            // b) Not NULL
            else{
                newNode->next = head;
                head = newNode;
            }

        }

        // 2] PUSH BACK

        void push_back(int val){
            Node* newNode = new Node(val);

            if(head == NULL){
                head = tail =newNode;
            }
            else{
                tail->next = newNode;
                tail = newNode;
            }
        }

        // 3] POP FRONT

        void pop_front(){
            if(head == NULL){
                return;
            }

            Node* temp = head;
            head = head->next;
            temp->next =NULL;
            delete temp;
        }

        // 4] POP BACK

        void pop_back(){
            if(head == NULL){
                cout<<"ll IS EMPTY\n";
            }

            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }

            temp->next =NULL;
            delete tail; //tail ka data delete horha hai
            tail = temp; 
        }


        void printll(){
            Node* temp =head;

            while(temp!=NULL){
                cout<<temp->data <<"->";
                temp=temp->next;
            }
            cout<<"NULL"<<endl;
        }


};
int main(){
    List ll; //Linked l ist created.
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.push_back(4);
    ll.pop_front();
    ll.pop_back();

    ll.printll();

    return 0;
}
